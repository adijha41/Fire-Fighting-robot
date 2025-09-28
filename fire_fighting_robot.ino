// Fire Fighting Robot Code
// Components: Arduino Uno, Flame Sensor, L298N Motor Driver, DC Motors, Relay Module + Water Pump

// Motor pins (L298N)
int ENA = 9;  // Enable pin for Left Motor
int IN1 = 8;  // Left Motor
int IN2 = 7;  // Left Motor
int ENB = 10; // Enable pin for Right Motor
int IN3 = 6;  // Right Motor
int IN4 = 5;  // Right Motor

// Flame sensor pin
int flameSensor = A0;

// Water pump pin (Relay)
int pump = 4;

void setup() {
  // Motor pins as output
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Pump pin as output
  pinMode(pump, OUTPUT);

  // Flame sensor as input
  pinMode(flameSensor, INPUT);

  // Serial for debugging
  Serial.begin(9600);
}

void loop() {
  int flameValue = analogRead(flameSensor); // Read flame sensor value
  Serial.println(flameValue);

  // Adjust threshold as per sensor sensitivity
  if (flameValue < 300) {
    // Fire detected
    stopMoving();
    digitalWrite(pump, HIGH);  // Turn ON pump
    delay(3000);               // Spray water for 3 seconds
    digitalWrite(pump, LOW);   // Turn OFF pump
  }
  else {
    // No fire -> Move forward
    moveForward();
  }
}

// Functions to control motors
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 150);
}

void stopMoving() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
