const byte ledPin = 13;
const byte pir = 2;
volatile byte state = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pir, INPUT);
  attachInterrupt(digitalPinToInterrupt(pir), blink, CHANGE);
  Serial.begin(9600);
}

void loop()
{
  
  
}

void blink() {
  state = !state;
  Serial.println(digitalRead(pir));
  digitalWrite(ledPin, state);
  Serial.println("interrupt occured");
}