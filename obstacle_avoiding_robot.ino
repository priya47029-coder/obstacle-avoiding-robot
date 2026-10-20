const int trigPin = 3;
const int echoPin = 2;
const int greenLED = 8;
const int redLED = 9;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    Serial.println("No obstacle detected");
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
  } else {
    distance = duration * 0.0343 / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance <= 20) {
      digitalWrite(greenLED, LOW);
      digitalWrite(redLED, HIGH);
      Serial.println("OBSTACLE! STOP ROBOT");
    } else {
      digitalWrite(greenLED, HIGH);
      digitalWrite(redLED, LOW);
      Serial.println("PATH CLEAR - MOVE FORWARD");
    }
  }

  delay(500);
}
