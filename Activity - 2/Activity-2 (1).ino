int pins [] = {8,9,10, 11, 12};
int i = 0;


void setup()
{

  while(i < 5 ){

  pinMode(pins[i], OUTPUT);
    i++;
}

}

void loop()
{
i = 0;

    while (i < 5)

    {
       analogWrite(pins[i], 255);
       delay (1000);
       i++;
    }

      i = 0;

    while (i < 5)

    {
     analogWrite(pins[i], 0);
        delay (1000);
        i++;
    }
}