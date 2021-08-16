const byte ledPin = 13;
const byte pir = 2;
volatile byte state = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(pir));
  if (digitalRead(pir) == 1) {
    digitalWrite(ledPin, HIGH);
    Serial.println("motion ditected");
    delay(500);
  }else{
    digitalWrite(ledPin, LOW);
    Serial.println("no motion ditected");
  }
  
}