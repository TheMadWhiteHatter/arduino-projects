#include <Adafruit_NeoPixel.h>


int readButtons(int pin);

void setup()
{
 Serial.begin(9600); 
  pinMode(A0, INPUT_PULLUP); // sets analog pin for input 
}

int ButtonNumber = 0;
void loop()
{
   // Check for input
   ButtonNumber = readButtons(0);
  // Serial.print("Button # ");
   //Serial.println(ButtonNumber);
   //delay(500);
}

int count;
int readButtons(int A0pin)

// returns the button number pressed, or zero for none pressed 
// int pin is the analog pin number to read 
/*Ground to 5v
5      4      3     2    1
200   253    337   508  1013
*/

{
  int b,r = 0;  // b is button.  r is resistance

  r=analogRead(A0pin); // get the analog value from A0
  Serial.print(analogRead(A0pin));
 Serial.print(" ");
 if (count % 100 == 0 )Serial.println(" enl ");
 count++;
  if (r >1000)
  {
    b=1; // buttons have not been pressed
  }   
else
  if (r>480 && r< 520)
  {
    b=2; // button 1 pressed
  }     
  else
    if (r>320 && r<360)
    {
      b=3; // button 2 pressed
    }       
    else
      if (r>230 && r< 270)
      {
        b=4; // button 3 pressed
      }         
      else
        if (r>150 && r<220)
        {
          b=5; // button 4 pressed
        }           
        else
          if (r<20)
          {
            b=0; // button 5 pressed
          }
return b;
}
//Button5 = 270
//Button4 = 314
//Button3 = 387
//Button2 = 538
//Button1 = 1022


