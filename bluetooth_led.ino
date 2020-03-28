/*
* Bluetooh Basic: LED ON OFF - Avishkar
* Coder - Mayoogh Girish
* Website - http://bit.do/Avishkar
* Download the App : https://github.com/Mayoogh/Arduino-Bluetooth-Basic
* This program lets you to control a LED on pin 13 of arduino using a bluetooth module
*/

#include <Servo.h>

Servo myservo;
char data = 0;   
int pos = 0; 
void setup()
{
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    myservo.attach(12);
}
void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == 'A')              // Checks whether value of data is equal to 1
         digitalWrite(8, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'a')         //  Checks whether value of data is equal to 0
         digitalWrite(8 , LOW);    //If value is 0 then LED turns OFF
         else if(data=='B')
         digitalWrite(9,HIGH);
         else if(data=='b')
         digitalWrite(9,LOW);
         else if(data=='C')
         digitalWrite(10,HIGH);
         else if(data=='c')
         digitalWrite(10,LOW);
         else if(data=='D')
         digitalWrite(11,HIGH);
         else if(data=='d')
         digitalWrite(11,LOW);

         

       
}
}

