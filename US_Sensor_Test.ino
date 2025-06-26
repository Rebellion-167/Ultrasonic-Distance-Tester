//Defining pins for Trigger and Echo
const int trigPin = A2;
const int echoPin = A1;

//Variables to store duration and time
long duration;
int distance;

void setup() {
  //Starting the Serial Monitor
  Serial.begin(9600);
  //Setting pin modes
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  //Clearing the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  //Triggering the sensor by sending a HIGH pulse of 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  //Reading the echoPin and calculating the duration
  duration = pulseIn(echoPin, HIGH);

  //Calculating the distance in cm
  distance = duration * 0.034 / 2;

  //Printing the distance to Serial Monitor
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  //Waiting before next reading
  delay(500);

}
