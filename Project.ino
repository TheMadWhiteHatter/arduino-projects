const int trigPin = 10;
const int echoPin = 9;

long duration;
int distance;
int safetyDistance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 5){
  digitalWrite(13, HIGH);
}
else{
  digitalWrite(13, LOW);
}

Serial.print("Distance: ");
Serial.println(distance);
}
