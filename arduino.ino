const int ledPins[] = { 2, 4, 6, 8, 10, 12 };

void setup() {
  for (int thisLed : ledPins) {
    pinMode(thisLed, OUTPUT);
  };
};

void loop() {
  for(int thisLed : ledPins) {
    digitalWrite(thisLed, !digitalRead(thisLed));
    delay(1000/6);
  };
};
