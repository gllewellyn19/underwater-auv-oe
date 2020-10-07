int IRPin = A0;
int value;

void setup() {
  pinMode(IRPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(IRPin);
  if (value == 0) {
    Serial.println("Object detected");
  } else {
    Serial.println("Not detected");
  }
  delay(500);
} 
