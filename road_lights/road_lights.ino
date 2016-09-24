/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/

int red_b = 8;
int yel_b = 9;
int gre_b = 10;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red_b, OUTPUT);
  pinMode(yel_b, OUTPUT);
  pinMode(gre_b, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red_b, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000); 
  digitalWrite(yel_b, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(red_b, LOW);
  delay(1000);
  digitalWrite(yel_b, LOW);
  digitalWrite(gre_b, HIGH); 
  delay(3000);
  digitalWrite(yel_b, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
  digitalWrite(gre_b, LOW);
  delay(1000);
  digitalWrite(yel_b, LOW);
  
    
}
