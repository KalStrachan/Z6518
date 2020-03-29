// testshapes demo for RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 32x64 RGB LED matrix.

// WILL NOT FIT on ARDUINO UNO -- requires a Mega, M0 or M4 board

#include <RGBmatrixPanel.h>

// Most of the signal pins are configurable, but the CLK pin has some
// special constraints.  On 8-bit AVR boards it must be on PORTB...
// Pin 8 works on the Arduino Uno & compatibles (e.g. Adafruit Metro),
// Pin 11 works on the Arduino Mega.  On 32-bit SAMD boards it must be
// on the same PORT as the RGB data pins (D2-D7)...
// Pin 8 works on the Adafruit Metro M0 or Arduino Zero,
// Pin A4 works on the Adafruit Metro M4 (if using the Adafruit RGB
// Matrix Shield, cut trace between CLK pads and run a wire to A4).

//#define CLK  8   // USE THIS ON ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);
uint8_t w = 0;
uint8_t i = 0;
uint8_t l1 = 0;
uint8_t l2 = 1;
uint8_t l3 = 2;
uint8_t l4 = 3;
uint8_t l5 = 4;
uint8_t l6 = 5;
uint8_t l7 = 6;
uint8_t l8 = 7;
uint8_t l9 = 9;


void setup() {

  matrix.begin();

  // draw a pixel in solid white
  matrix.drawPixel(0, 0, matrix.Color333(7, 7, 7));
  delay(500);

  // fix the screen with green
  matrix.fillRect(0, 0, matrix.width(), matrix.height(), matrix.Color333(0, 7, 0));
  delay(500);

  // draw a box in yellow
  matrix.drawRect(0, 0, matrix.width(), matrix.height(), matrix.Color333(7, 7, 0));
  delay(500);

  // draw an 'X' in red
  matrix.drawLine(0, 0, matrix.width()-1, matrix.height()-1, matrix.Color333(7, 0, 0));
  matrix.drawLine(matrix.width()-1, 0, 0, matrix.height()-1, matrix.Color333(7, 0, 0));
  delay(500);

  // draw a blue circle
  matrix.drawCircle(10, 10, 10, matrix.Color333(0, 0, 7));
  delay(500);

  // fill a violet circle
  matrix.fillCircle(40, 21, 10, matrix.Color333(7, 0, 7));
  delay(500);

  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));

//  // draw some text!
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(true); // Don't wrap at end of line - will do ourselves
//
//  matrix.setCursor(8, 0);    // start at top left, with 8 pixel of spacing
//  uint8_t w = 0;
//  char *str = "ALTRONICS";
//  for (w=0; w<8; w++) {
//    matrix.setTextColor(Wheel(w));
//    matrix.print(str[w]);
//  }
//  matrix.setCursor(2, 8);    // next line
//  for (w=8; w<18; w++) {
//    matrix.setTextColor(Wheel(w));
//    matrix.print(str[w]);
//  }
//  matrix.println();
//  //matrix.setTextColor(matrix.Color333(4,4,4));
//  //matrix.println("Industries");
//  matrix.setTextColor(matrix.Color333(7,7,7));
//  matrix.println("LED MATRIX!");
//
//  // print each letter with a rainbow color
//  matrix.setTextColor(matrix.Color333(7,0,0));
//  matrix.print('3');
//  matrix.setTextColor(matrix.Color333(7,4,0));
//  matrix.print('2');
//  matrix.setTextColor(matrix.Color333(7,7,0));
//  matrix.print('x');
//  matrix.setTextColor(matrix.Color333(4,7,0));
//  matrix.print('6');
//  matrix.setTextColor(matrix.Color333(0,7,0));
//  matrix.print('4');
//  matrix.setCursor(34, 24);
//  matrix.setTextColor(matrix.Color333(0,7,7));
//  matrix.print("*");
//  matrix.setTextColor(matrix.Color333(0,4,7));
//  matrix.print('R');
//  matrix.setTextColor(matrix.Color333(0,0,7));
//  matrix.print('G');
//  matrix.setTextColor(matrix.Color333(4,0,7));
//  matrix.print("B");
//  matrix.setTextColor(matrix.Color333(7,0,4));
//  matrix.println("*");

  // whew!

  
  
}

void loop() {
  // Do nothing -- image doesn't change
  // fill the screen with 'black'
  //matrix.fillScreen(matrix.Color333(0, 0, 0));
  matrix.setCursor(5, 2);    // start at top left, with 8 pixel of spacing

  
  
  if(l1 == 0){
    l1 = 18; 
  }
  matrix.setTextColor(Wheel(l1));
  matrix.print('A');
  l1--;


    
  if(l2 == 0){
    l2 = 18; 
  }
  matrix.setTextColor(Wheel(l2));
  matrix.print('L');
  l2--;
  
  if(l3 == 0){
    l3 = 18; 
  }
  matrix.setTextColor(Wheel(l3));
  matrix.print('T');
  l3--;

  if(l4 == 0){
    l4 = 18; 
  }
  matrix.setTextColor(Wheel(l4));
  matrix.print('R');
  l4--;
  
  if(l5 == 0){
    l5 = 18; 
  }
  matrix.setTextColor(Wheel(l5));
  matrix.print('O');
  l5--;

  
  if(l6 == 0){
    l6 = 18; 
  }
  matrix.setTextColor(Wheel(l6));
  matrix.print('N');
  l6 --;

  if(l7 == 0){
    l7 = 18; 
  }
  matrix.setTextColor(Wheel(l7));
  matrix.print('I');
  l7--;
  
  if(l8 == 0){
    l8 = 18; 
  }
  matrix.setTextColor(Wheel(l8));
  matrix.print('C');
  l8--;
  
  if(l9 == 0){
    l9 = 18; 
  }
  matrix.setTextColor(Wheel(l9));
  matrix.print('S');
  l9--;

   matrix.setCursor(2, 11);    // start at top left, with 8 pixel of spacing
   matrix.setTextColor(matrix.Color333(7,0,0));
   matrix.print('6');
   matrix.setTextColor(matrix.Color333(7,4,0));
   matrix.print('4');
   matrix.setTextColor(matrix.Color333(7,7,0));
   matrix.print('x');
   matrix.setTextColor(matrix.Color333(4,7,0));
   matrix.print('3');
   matrix.setTextColor(matrix.Color333(0,7,0));
   matrix.print('2');
   matrix.setCursor(34, 10);
   matrix.setTextColor(matrix.Color333(0,7,7));
   matrix.print("*");
   matrix.setTextColor(matrix.Color333(0,4,7));
   matrix.print('R');
   matrix.setTextColor(matrix.Color333(0,0,7));
   matrix.print('G');
   matrix.setTextColor(matrix.Color333(4,0,7));
   matrix.print("B");
   matrix.setTextColor(matrix.Color333(7,0,4));
   matrix.println("*");

   matrix.setCursor(16, 20);
   matrix.setTextColor(matrix.Color333(7,7vg,7));
   matrix.println("$99.00");
   
   delay(100);
}


// Input a value 0 to 24 to get a color value.
// The colours are a transition r - g - b - back to r.
uint16_t Wheel(byte WheelPos) {
  if(WheelPos < 8) {
   return matrix.Color333(7 - WheelPos, WheelPos, 0);
  } else if(WheelPos < 16) {
   WheelPos -= 8;
   return matrix.Color333(0, 7-WheelPos, WheelPos);
  } else {
   WheelPos -= 16;
   return matrix.Color333(0, WheelPos, 7 - WheelPos);
  }
}
