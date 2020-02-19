int pin_input = 12; //Variable to store the input value from Soil moisture sensor
int pin_output = 13; //Variable to store the output value to send signal to relay
int val; //Variable stores the value received from Soil moisture sensor.
void setup() {
  pinMode(pin_output,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(pin_input,INPUT); //Set pin 8 as input pin, to receive data from Soil moisture sensor.
}

void loop() { 
  val = digitalRead(pin_input);  //Read data from soil moisture sensor  
  if(val == LOW) 
  {
  digitalWrite(pin_output,LOW); //if soil moisture sensor provides LOW value send LOW value to relay
  }
  else
  {
  digitalWrite(pin_output,HIGH); //if soil moisture sensor provides HIGH value send HIGH value to relay
  }
  delay(400); //Wait for few second and then continue the loop.
}
