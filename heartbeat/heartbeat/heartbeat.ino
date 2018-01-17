int n = 0;
int ledPin = 13;
int m;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  n++;
  Serial.print(n);
  Serial.println(" seconds have passed");
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(900); 
  m = millis();
  Serial.println(m); 
}
