#define redled 3
#define greenled 4
#define buzzer 5
#define vibrationpin 8
int vibration = 0;

void setup() {
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(vibrationpin,INPUT);
  Serial.begin(9600);
}

void loop() {
  vibration = digitalRead(vibrationpin);
  if (vibration == HIGH)
  {
    Serial.print("Vibration detected");
    digitalWrite(greenled, LOW);
    digitalWrite(redled, HIGH);
   
    delay(400);

    digitalWrite(redled, LOW);
    delay(400);
     digitalWrite(buzzer, HIGH);
  }
  else
  {
    Serial.print("Vibration detected");
    digitalWrite(redled, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(greenled, HIGH);
  }
}
