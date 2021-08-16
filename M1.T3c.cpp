const byte ledPin = 13;
const byte led2Pin = 12;
const byte pir = 2;
const byte btn = 3;
volatile byte state = LOW;
volatile byte led2_state = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(pir, INPUT);
  pinMode(btn, INPUT);
  attachInterrupt(digitalPinToInterrupt(pir), blink, CHANGE);
  attachInterrupt(digitalPinToInterrupt(btn), toggle, FALLING);
  Serial.begin(9600);
}

void loop()
{
  
}

void blink() {
  state = !state;
  Serial.println(digitalRead(pir));
  digitalWrite(ledPin, state);
  Serial.println("interupt from pir motion sensor");
}

void toggle() {
  led2_state = !led2_state;
  Serial.println(digitalRead(btn));
  digitalWrite(led2Pin, led2_state);
  Serial.println("interupt from button sensor");
}