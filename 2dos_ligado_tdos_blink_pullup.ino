// C++ code
//
int buttonState1 = 0;
int buttonState2 = 0;
// *********alterar os tempos de dosagem
int tdos1 = 5000;
int tdos2 = 7000;
int nblink;
int i;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // *********dosadora 1
  // read the state of the pushbutton 1
  buttonState1 = digitalRead(3);
  // define numero de blinks
  nblink = tdos1/1000;
  // check if pushbutton is pressed. if it is, the
  // button state is HIGH
  if (buttonState1 == LOW){
    digitalWrite(13, HIGH);	  //liga a dosadora 1
    for(i=1;i<=nblink;i++){
    	digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
    	delay(1000);
    	digitalWrite(11,LOW);
    	delay(1000);
    }
    
  } else {
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
  }
  // *********dosadora 2
  // read the state of the pushbutton 2
  buttonState2 = digitalRead(2);
  // define numero de blinks
  nblink = tdos2/1000;
  // check if pushbutton is pressed. if it is, the
  // button state is HIGH
  if (buttonState2 == LOW) {
    digitalWrite(12, HIGH);   //liga a dosadora 2
    for(i=1;i<=nblink;i++){
    	digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
    	delay(1000);
      	digitalWrite(11,LOW);
    	delay(1000);
    }  
  } else {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  delay(100); // Delay a little bit to improve simulation performance
}

