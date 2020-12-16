//Integer for pin 13 slot in Arduino board
int relay = 13; 
void setup() {
  Serial.begin(9600);
  // Initialise the Arduino data pin 13 for OUTPUT
  pinMode(relay,OUTPUT); // Initialise the Arduino data pin 13 for OUTPUT
  }
void loop() {
  while (Serial.available() == 0);
  int val = Serial.read()-’0’;
  Serial.println(val);
    // Turn on relay on press “1” in serial monitor
    if(val ==1){
      Serial.println("relay on"); // Turn on relay on press “1” in serial monitor
      digitalWrite(relay,HIGH);
      //Wait till 10 min relay turned off 
      delay(600000);
      Serial.println("relay off");
      digitalWrite(relay,LOW);
      }
  // Turn off relay on press “0” in between 10 min
  else if(val ==0)
  {
  Serial.println("relay off");
  digitalWrite(relay,LOW);
  }
 }
