const int ledPin = 8;
const int sensorPin = A0;
int sensorValue = 0;
int threshold = 220;
String command;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("Sensor value: ");
  Serial.println(sensorValue);

  if (sensorValue >= threshold) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
  } else {
    digitalWrite(ledPin, LOW);
  }

  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    if (command == "stop") {
      digitalWrite(ledPin, LOW);
      Serial.println("Blinking stopped.");
      
 
    }
  }
}
