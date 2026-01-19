#define THERMISTOR_PIN A0
#define LDR_PIN A2
#define ALERT_PIN 12

const float TEMP_THRESHOLD = 50.0;  
const int LIGHT_THRESHOLD = 220;   

void setup() {
  Serial.begin(9600);
  pinMode(ALERT_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  float temperature = readTemperature();
  int lightState = readBrightness();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C | Light: ");
  Serial.println(lightState == HIGH ? "Bright" : "Dark");


  if (temperature >= TEMP_THRESHOLD && lightState == HIGH) {
    digitalWrite(ALERT_PIN, HIGH);
    delay(100);
    digitalWrite(ALERT_PIN, LOW);
    delay(100);
  } else {
    digitalWrite(ALERT_PIN, LOW);
  }

  delay(500);
}

float readTemperature() {
  int analogValue = analogRead(THERMISTOR_PIN);
  float voltage = analogValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0; 
  return temperatureC;
}


int readBrightness() {
  int brightness = analogRead(LDR_PIN);
  if (brightness >= LIGHT_THRESHOLD)
    return HIGH;
  else
    return LOW;
}
