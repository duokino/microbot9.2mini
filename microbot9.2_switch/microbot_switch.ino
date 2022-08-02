#define button_switch 12
#define led11 A0
#define led22 A1

boolean oldSwitchState = LOW;
boolean newSwitchState = LOW;

void setup() {
  // put your setup code here, to run once:

pinMode(button_switch, INPUT);

pinMode(led11, OUTPUT);
pinMode(led22, OUTPUT);

digitalWrite(led11, LOW);
digitalWrite(led22, LOW);

for (int i = 0; i < 3; i++){
  if (digitalRead(button_switch) == LOW) i = 0;
}

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led11, HIGH);
digitalWrite(led22, LOW);
delay(200);
digitalWrite(led11, LOW);
digitalWrite(led22, HIGH);
delay(200);

}
