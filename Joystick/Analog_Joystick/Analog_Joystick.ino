



const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output



void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  /*
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  */
  if (analogRead(X_pin) > 550 && analogRead(Y_pin) == 504){
    Serial.print("w\n");
    delay(50);
  }
  if (analogRead(X_pin) < 480 && analogRead(Y_pin) == 504){
    Serial.print("s\n");
    delay(50);
  }
  if (analogRead(Y_pin) > 550 && analogRead(X_pin) == 507){
    Serial.print("d\n");
    delay(50);
  }
  if (analogRead(Y_pin) < 480 && analogRead(X_pin) == 507){
    Serial.print("a\n");
    delay(50);
  }
  if (analogRead(X_pin) == 507 && analogRead(Y_pin) == 504){
    Serial.print("nothing\n");
  }
  if (analogRead(X_pin) > 550 && analogRead(Y_pin) > 550) {
    Serial.print("e\n");//wd
    delay(50);
  }
  if (analogRead(X_pin) > 550 && analogRead(Y_pin) < 480){
    Serial.print("q\n");//wa
    delay(50);
  }
  if (analogRead(X_pin) < 480 && analogRead(Y_pin) > 550) {
    Serial.print("x\n");//sd
    delay(50);
  }
  if (analogRead(X_pin) < 480 && analogRead(Y_pin) < 480) {
    Serial.print("z\n");//sa
    delay(50);
  }
}
