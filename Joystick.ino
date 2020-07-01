
//Includes the library file
#include <Joystick.h> 

//Creates Joystick
Joystick_ Joystick; 

//Introducing the variables
int RxAxis_ = 0; 
int RyAxis_ = 0; 
int XAxis = 0; 
int YAxis = 0; 

Const bool initAutoSendState = true;

void setup() {
  
  // put your setup code here, to run once:
  
  //Setup all our buttons
  PinMode(9, INPUT_PULLUP);
  PinMode(4, INPUT_PULLUP);
  PinMode(10, INPUT_PULLUP);
  PinMode(14, INPUT_PULLUP);
  PinMode(15, INPUT_PULLUP);
  PinMode(2, INPUT_PULLUP);
      //Starts Joystick
      Joystick.begin(); 
      
}

void loop() {
  
  // put your main code here, to run repeatedly:

  RxAxis_ = analogRead(A2); //Variable is equal to the input from analog pin 2
   RxAxis_ = map(RxAxis_, 0, 1023, 255, 0); //map the variables
   Joystick.setRxAxis(RxAxis_); //Links the Joystick's right x-axis to the input variable

   RyAxis_ = analogRead(A3); //Variable is equal to the input from analog pin 3
   RyAxis_ = map(RyAxis_, 0, 1023, 255, 0); //map the variables
   Joystick.setRyAxis(RyAxis_); //Links the Joystick's right y-axis to the input variable

   XAxis_ = analogRead(A1); //Variable is equal to the input from analog pin 1
   XAxis_ = map(XAxis_, 0, 1023, 255, 0); //map the variables
   Joystick.setXAxis(XAxis_); //Links the Joystick's left x-axis to the input variable

   YAxis_ = analogRead(A0); //Variable is equal to the input from analog pin 0
   YAxis_ = map(YAxis_, 0, 1023, 255, 0); //map the variables
   Joystick.setYAxis(YAxis_); //Links the Joystick's left y-axis to the input variable

   if(digitalRead(9) == LOW) //If the button connected to pin 9 pressed
    {Joystick.pressButton(0);} //Button 0 is pressed
   else
    {Joystick.releaseButton(0);} //If the button connected to pin 9 is not pressed release button 9

   if(digitalRead(4) == LOW) //If the button connected to pin 4 pressed
    {Joystick.pressButton(1);} //Button 1 is pressed
   else
    {Joystick.releaseButton(1);} //If the button connected to pin 4 is not pressed release button 4

   if(digitalRead(10) == LOW) //If the button connected to pin 10 pressed
    {Joystick.pressButton(2);} //Button 2 is pressed
   else
    {Joystick.releaseButton(2);} //If the button connected to pin 10 is not pressed release button 10

   if(digitalRead(14) == LOW) //If the button connected to pin 14 pressed
    {Joystick.pressButton(3);} //Button 3 is pressed
   else
    {Joystick.releaseButton(3);} //If the button connected to pin 14 is not pressed release button 14

   if(digitalRead(15) == LOW) //If the button connected to pin 15 pressed
    {Joystick.pressButton(4);} //Button 4 is pressed
   else
    {Joystick.releaseButton(4);} //If the button connected to pin 15 is not pressed release button 15

   if(digitalRead(2) == LOW) //If the button connected to pin 2 pressed
    {Joystick.pressButton(5);} //Button 5 is pressed
   else
    {Joystick.releaseButton(5);} //If the button connected to pin 2 is not pressed release button 2

    delay(1);
   
}
