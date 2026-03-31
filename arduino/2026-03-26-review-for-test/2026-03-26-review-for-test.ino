const int ledPin = 2;
const int buttonPin = 13;
bool isButtonPressed = false;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  isButtonPressed = digitalRead(buttonPin);
  if(isButtonPressed) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  Serial.print("Stato bottone: ");
  Serial.println(isButtonPressed);
  delay(500);
}