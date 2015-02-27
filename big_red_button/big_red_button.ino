const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
   // make the pushButton pin an input:
   pinMode(buttonPin, INPUT);
   // initialize control over the keyboard:
   Keyboard.begin();
}

void loop() {
   // read the pushbutton:
   int buttonState = digitalRead(buttonPin);
   // if the button state has changed, 
   if ((buttonState != previousButtonState) 
     // and it's currently pressed:
   && (buttonState == HIGH)) {
     // increment the button counter
     counter++;
     // type linux shutdown ('shutdown -h now)
     Keyboard.print("shutdown ");
     Keyboard.write(192);
     Keyboard.println("h now");

     // type windows shutdown ('shutdown -s -t 0)
     Keyboard.print("shutdown ");
     Keyboard.write(192);
     Keyboard.print("s ");
     Keyboard.write(192);
     Keyboard.println("t 0 ");
   }
   // save the current button state for comparison next time:
   previousButtonState = buttonState; 
}

