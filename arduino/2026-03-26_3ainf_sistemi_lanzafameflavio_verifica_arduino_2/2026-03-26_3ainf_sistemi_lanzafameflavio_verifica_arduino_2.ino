// Dichiarazioni pin LED
const int blueLedPin = 13;
const int greenLedPin = 12;
const int orangeLedPin = 8;

// Dichiarazioni pin pulsanti
const int blueButtonPin = 11;
const int greenButtonPin = 10;
const int orangeButtonPin = 9;

// Dichiarazioni variabili stato del bottone
bool isBlueButtPressed = false;
bool isGreenButtPressed = false;
bool isOrangeButtPressed = false;

void setup()
{
  // Setup pin pulsanti
  pinMode(blueButtonPin, INPUT);
  pinMode(greenButtonPin, INPUT);
  pinMode(orangeButtonPin, INPUT);
  
  // Setup pin LED
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(orangeLedPin, OUTPUT);
}

void loop()
{
  // Leggi lo stato del bottone
  isBlueButtPressed = digitalRead(blueButtonPin);
  isGreenButtPressed = digitalRead(greenButtonPin);
  isOrangeButtPressed = digitalRead(orangeButtonPin);
  
  // Accendi il LED se il pulsante e' premuto (true)
  if(isBlueButtPressed)
    digitalWrite(blueLedPin, HIGH);
  else
    digitalWrite(blueLedPin, LOW);
  
  if(isGreenButtPressed)
    digitalWrite(greenLedPin, HIGH);
  else
    digitalWrite(greenLedPin, LOW);
  
  if(isOrangeButtPressed)
    digitalWrite(orangeLedPin, HIGH);
  else
    digitalWrite(orangeLedPin, LOW);
}