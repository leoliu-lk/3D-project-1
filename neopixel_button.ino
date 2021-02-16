#include <Adafruit_NeoPixel.h>

#define BUTTON_PIN   6    // Digital IO pin connected to the button.  This will be
                          // driven with a pull-up resistor so the switch should
                          // pull the pin to ground momentarily.  On a high -> low
                          // transition the button press logic will execute.

#define PIXEL_PIN    13   // Digital IO pin connected to the NeoPixels.

#define PIXEL_COUNT 2   // number of neopixel (change this accordingly)

// Parameter 1 = number of pixels in strip,  neopixel stick has 8
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGB     Pixels are wired for RGB bitstream
//   NEO_GRB     Pixels are wired for GRB bitstream, correct for neopixel stick
//   NEO_KHZ400  400 KHz bitstream (e.g. FLORA pixels)
//   NEO_KHZ800  800 KHz bitstream (e.g. High Density LED strip), correct for neopixel stick
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool oldState = HIGH;
int showType = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
 Serial.begin(9600);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Get current button state.
  bool newState = digitalRead(BUTTON_PIN);

  // Check if state changed from high to low (button press).
  if (newState == LOW && oldState == HIGH) {
    // Short delay to debounce button.
    delay(10);
    // Check if button is still low after debounce.
    newState = digitalRead(BUTTON_PIN);
    if (newState == LOW) {
      showType++;
      if (showType > 4)
        showType=0;
      startShow(showType);
    }
    Serial.println(A0);
  }

  // Set the last button state to the old state.
  oldState = newState;
}

void startShow(int i) {
  switch(i){
    case 0: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 1: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 2: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 3: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 5: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 6: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 7: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 8: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 9: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 10: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 11: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 12: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 13: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 14: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 15: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 16: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 17: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 18: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 19: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 20: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 21: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 22: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 23: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 24: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 25: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 26: colorWipe(strip.Color(255, 0, 0), 50);  // Red
           
    case 27: colorWipe(strip.Color(0, 255, 30), 50);  // Green
           
    case 28: colorWipe(strip.Color(0, 0, 255), 50);  // Blue

    case 29: colorWipe(strip.Color(0, 0, 0), 50);    // Black/offcolorWipe(strip.Color(255, 0, 0), 50);  // Red         
            
    case 30: colorWipe(strip.Color(255, 0, 0), 50);  // Red

    case 31: colorWipe(strip.Color(255, 0, 0), 50);  // Red

    case 32: colorWipe(strip.Color(222, 49, 99), 50);  // Red

    case 33: colorWipe(strip.Color(255, 102, 204), 50);  // Red

    case 34: colorWipe(strip.Color(251, 96, 127), 50);  // Red

    case 35: colorWipe(strip.Color(236, 85, 120), 50);  // Red

    case 36: colorWipe(strip.Color(222, 111, 161), 50);  // Red

    case 37: colorWipe(strip.Color(241, 156, 187), 50);  // Red

    case 38: colorWipe(strip.Color(254, 127, 156), 50);  // Red

    case 39: colorWipe(strip.Color(255, 166, 201), 50);  // Red

    case 40: colorWipe(strip.Color(255, 185, 200), 50);  // Red

    case 41: colorWipe(strip.Color(222, 49, 99), 50);  // Red

    case 42: colorWipe(strip.Color(255, 102, 204), 50);  // Red

    case 43: colorWipe(strip.Color(251, 96, 127), 50);  // Red

    case 44: colorWipe(strip.Color(236, 85, 120), 50);  // Red

    case 45: colorWipe(strip.Color(222, 111, 161), 50);  // Red

    case 46: colorWipe(strip.Color(241, 156, 187), 50);  // Red

    case 47: colorWipe(strip.Color(254, 127, 156), 50);  // Red

    case 48: colorWipe(strip.Color(255, 166, 201), 50);  // Red

    case 49: colorWipe(strip.Color(255, 185, 200), 50);  // Red


  }

}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}
