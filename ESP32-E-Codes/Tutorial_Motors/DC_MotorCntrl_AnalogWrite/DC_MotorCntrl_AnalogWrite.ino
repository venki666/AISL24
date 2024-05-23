

int SpeedStep = 1;
int Speed = 0;
#define MOTORIN1 16
#define MOTORIN2 17
void setup() {
  pinMode(MOTORIN1, OUTPUT);
  pinMode(MOTORIN2, OUTPUT);

}

void loop() {

  analogWrite(MOTORIN1, 128);
  analogWrite(MOTORIN2, 0);
  delay(5000);
  
  analogWrite(MOTORIN1, 0);
  analogWrite(MOTORIN2, 0);
  delay(1000);
  
  analogWrite(MOTORIN1, 0);
  analogWrite(MOTORIN2, 512);
  delay(5000);
  
  analogWrite(MOTORIN1, 0);
  analogWrite(MOTORIN2, 0);
  delay(1000);
}
