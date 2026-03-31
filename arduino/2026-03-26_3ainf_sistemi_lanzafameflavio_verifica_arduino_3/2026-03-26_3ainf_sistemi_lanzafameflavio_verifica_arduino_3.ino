// Dichiarazioni pin
const int potPin = 0;
const int ledPin = 13;

// Dichiarazione variabile valore potenziometro
int potValue;

void setup()
{
  // Setup pin
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  // Setup monitor seriale
  Serial.begin(9600);
  
  // Accendi il LED verde
  digitalWrite(ledPin, HIGH);
}

void loop()
{
  // Leggi il valore del potenziometro
  potValue = analogRead(potPin);
  
  // Stampa valore potenziometro
  Serial.print("\nValore potenziometro: ");
  Serial.println(potValue);
  
  delay(500);
}