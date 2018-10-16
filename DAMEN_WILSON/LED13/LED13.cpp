
#include "LED13.h" //declaration for this class
 
const byte LED_PIN = 13; //use the LED at Arduino pin 13
 
//<<constructor>> 
LED13::LED13(){
    pinMode(LED_PIN, OUTPUT); //make that pin an OUTPUT
}
 
//<<destructor>>
LED13::~LED13(){/*nothing to destruct*/}
 
//turn the LED on
void LED13::on(){
        digitalWrite(LED_PIN,HIGH); //set the pin HIGH and thus turn LED on
}
 
//turn the LED off
void LED13::off(){
        digitalWrite(LED_PIN,LOW); 
}
 
//blink the LED 
void LED13::blink(int time){
        on();                   
        delay(time/2);  //half of the period
        off();          //turn LED off
        delay(time/2);  //half of the period
}