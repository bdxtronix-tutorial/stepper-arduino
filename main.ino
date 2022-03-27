#include <Stepper.h> 

double stepsPerRevolution = 2048;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);  

void setup() 

{ 

  myStepper.setSpeed(10);  

  Serial.begin(9600); 

} 

void loop() 

{  

  Serial.println("clockwise");    

  myStepper.step(stepsPerRevolution);  

  delay(500); 

 

  Serial.println("anti-clockwise");  

  myStepper.step(-stepsPerRevolution); 

  delay(500); 

 

}
