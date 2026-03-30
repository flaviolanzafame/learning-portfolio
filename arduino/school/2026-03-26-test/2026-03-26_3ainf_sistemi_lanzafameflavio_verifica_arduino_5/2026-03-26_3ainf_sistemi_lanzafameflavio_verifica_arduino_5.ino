// Dichiarazioni pin
const int potPin = 0;
const int greenLedPin = 13;
const int yellowLedPin = 8;
const int redLedPin = 6;

// Dichiarazione variabili valore potenziometro
int potValue;
int percentualPotValue;

// Luminosita' LED rosso
int redLedBrightness;

void setup()
{
  // Setup pin
  pinMode(potPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);

  // Setup monitor seriale
  Serial.begin(9600);
  
  // Accendi il LED verde
  digitalWrite(greenLedPin, HIGH);
}

void loop()
{
  // Leggi il valore del potenziometro
  potValue = analogRead(potPin);
  
  // Converti il valore in percentuale
  percentualPotValue = map(potValue, 0, 1023, 0, 100);
  
  // Se il valore percentuale > 50, accendi il led giallo
  if(percentualPotValue > 50) {
    digitalWrite(yellowLedPin, HIGH);
  } else {
    digitalWrite(yellowLedPin, LOW);
  }
  
  delay(500);
  
  // Converti il valore del pot. per l'uscita analogica
  redLedBrightness = map(potValue, 0, 1023, 0, 255);
  
  // Imposta luminosita' LED rosso con il valore del pot.
  analogWrite(redLedPin, redLedBrightness);
  
  // Stampa valori potenziometro
  Serial.print("\nValore potenziometro: ");
  Serial.println(potValue);
  
  Serial.print("Valore potenziometro percentuale: ");
  Serial.print(percentualPotValue);
  Serial.println("%");
  
  Serial.print("Valore LED rosso: ");
  Serial.println(redLedBrightness);
  
  delay(500);
}