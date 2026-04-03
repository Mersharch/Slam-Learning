#define IN1 26
#define IN2 27
#define ENA 25

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  Serial.begin(115200);
}

// Move forward
void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, HIGH);
}

// Move backward
void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(ENA, HIGH);
}

// Stop motor
void stopMotor() {
  digitalWrite(ENA, LOW);
}

void loop() {
  Serial.println("Forward");
  forward();
  delay(3000);

  Serial.println("Backward");
  backward();
  delay(3000);

  Serial.println("Stop");
  stopMotor();
  delay(2000);
}