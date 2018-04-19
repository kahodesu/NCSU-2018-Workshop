//#include <Keyboard.h>// FOR KEYBOARD
    
//PLAYABLE FASHION GLOVE CODE
//REVISED VERSION 4/18/2018 
//for use with Circuit Playground
//based on button example 
//http://www.arduino.cc/en/Tutorial/Button

// constants won't change. They're used here to set pin numbers:
const int glovePin = A3;     // the pin number of the glove pin
const int ledPin = 13;      // the pin number of the LED pin

// variables will change:
int gloveState = 0;         // variable for reading the pushbutton status 
     
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the glove pin as an input:
  pinMode(glovePin, INPUT_PULLUP);   
 //Keyboard.begin(); //FOR KEYBOARD
}

void loop(){
  // read the state of the glove value:
  gloveState = digitalRead(glovePin);

  // check if the glove is clapped.
  // if it is, the gloveState is LOW:                     
  if (gloveState == LOW) {
      //Keyboard.press(' ');//FOR KEYBOARD
      digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    //Keyboard.release(' ');//FOR KEYBOARD
    digitalWrite(ledPin, LOW); 
   
  }
}
