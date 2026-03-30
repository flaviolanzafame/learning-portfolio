// Dichiarazioni pin
const int blueLedPin = 13;
const int greenLedPin = 12;
const int orangeLedPin = 8;

void setup()
{
  // Setup pin
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(orangeLedPin, OUTPUT);
  
  // Accende i 3 LED uno dopo l'altro con ritardo di 700 ms
  digitalWrite(blueLedPin, HIGH);
  delay(700);
  digitalWrite(greenLedPin, HIGH);
  delay(700);
  digitalWrite(orangeLedPin, HIGH);
  delay(700);
  
  // Lascia accesi per 2,5 s
  delay(2500);
  
  // Spegne tutti e 3 contemporaneamente
  digitalWrite(blueLedPin, LOW);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(orangeLedPin, LOW);
  delay(700);
}

void loop()
{
}