//calcul remplace map


int potPin = A0;
int ledPin = 13;
float sensorValue ;
int outputValue;
int entreeMin =1;
int entreeMax = 205;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode (ledPin, OUTPUT);
    pinMode (potPin, INPUT);

}

void loop() {

  sensorValue = analogRead(potPin);            
  float val = sensorValue;
  val = val - entreeMin;

if (val < 0) {
  val = 0;
}
  val = val/(entreeMax - entreeMin);
if (val > 1) {
  val =1;
}
outputValue = val * 255;

  analogWrite(ledPin, outputValue);           
Serial.println (outputValue);

  }


