const int redPotPin = A0, bluePotPin = A1, greenPotPin = A2;
const int redLedPin = 11, blueLedPin = 10, greenLedPin = 9;
int redPotValue, bluePotValue, greenPotValue;
int redBrightness, blueBrightness, greenBrightness;
float time;

void setup()
{
  Serial.begin(9600); 
  
  pinMode(redPotPin, INPUT);
  pinMode(bluePotPin, INPUT);
  pinMode(greenPotPin, INPUT);
  
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop()
{
  time = millis();
  Serial.print("\nTempo: ");
  Serial.print(time);
  Serial.println(" ms");
  
  Serial.print("Potenziometro LED rosso: ");
  Serial.println(redPotValue);
  delay(100);
  
  Serial.print("Potenziometro LED blu: ");
  Serial.println(bluePotValue);
  delay(100);
  
  Serial.print("Potenziometro LED verde: ");
  Serial.println(greenPotValue);
  delay(100);
  
  redPotValue = analogRead(redPotPin);
  redBrightness = map(redPotValue, 0, 1023, 0, 255);
  analogWrite(redLedPin, redBrightness);
  
  bluePotValue = analogRead(bluePotPin);
  blueBrightness = map(bluePotValue, 0, 1023, 0, 255);
  analogWrite(blueLedPin, blueBrightness);
  
  greenPotValue = analogRead(greenPotPin);
  greenBrightness = map(greenPotValue, 0, 1023, 0, 255);
  analogWrite(greenLedPin, greenBrightness);
  
  delay(1000);
}