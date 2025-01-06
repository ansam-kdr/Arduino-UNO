const int ultrasonicPin = 9;
int distance;
long duration;

void setup()
{
pinMode(ultrasonicPin, OUTPUT);
Serial.begin(9600);
}

void loop()
{
  pinMode(ultrasonicPin, OUTPUT);
  digitalWrite(ultrasonicPin, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonicPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonicPin, LOW);

  pinMode(ultrasonicPin, INPUT);
  duration = pulseIn(ultrasonicPin, HIGH);

distance = duration * 0.034/2;

  Serial.print("distance :");
  Serial.print(distance);
  Serial.println(" cm");

}
