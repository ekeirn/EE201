void setup() {
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {  
  if (digitalRead(13)){
    Serial.println("Hello World!");
  } else {
     Serial.println("It's 2023");
  }
}
