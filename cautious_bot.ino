const int motor_LF = 2;
const int motor_LB = 3;
const int motor_RB = 4;
const int motor_RF = 5;

const int trig_pin = 9;
const int echo_pin = 10;

long duration;
int distance;

void setup() {
  pinMode(motor_LF, OUTPUT);
  pinMode(motor_LB, OUTPUT);
  pinMode(motor_RF, OUTPUT);
  pinMode(motor_RB, OUTPUT);

  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echo_pin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
  
  if (distance <= 20) {
    if (distance <= 10) {
      low()
      digitalWrite(motor_LB, HIGH);
      digitalWrite(motor_RB, HIGH);
    } else {
      low()
      digitalWrite(motor_LF, HIGH);
      digitalWrite(motor_RF, HIGH);
    }
  } else {
    low()
    digitalWrite(motor_LF, HIGH);
    digitalWrite(motor_RB, HIGH);
  }
}

void low() {
  digitalWrite(motor_LF, LOW);
  digitalWrite(motor_LB, LOW);
  digitalWrite(motor_RF, LOW);
  digitalWrite(motor_RB, LOW);
}
