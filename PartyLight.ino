const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup() {

  setColourRgb(0,0,0);
}

void loop() {
  unsigned int rgbColour[3];

 
  rgbColour[0] = 255;
  rgbColour[1] = 0;
  rgbColour[2] = 0;  

  
  for (int decColour = 1; decColour < 3; decColour += 1) {
    int incColour = decColour == 2 ? 0 : decColour + 1;

   
    for(int i = 0; i < 255; i += 1) {
      rgbColour[decColour] -= 1;
      rgbColour[incColour] += 1;
      
      setColourRgb(rgbColour[0], rgbColour[1], rgbColour[2]);
      delay(5);
    }
  }
}

void setColourRgb(unsigned int red, unsigned int green, unsigned int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
