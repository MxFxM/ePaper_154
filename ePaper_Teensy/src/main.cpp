#include <Arduino.h>
#include <Adafruit_I2CDevice.h>
#include <GxEPD2_BW.h> // including both doesn't use more code or ram
#include <GxEPD2_3C.h> // including both doesn't use more code or ram
GxEPD2_BW<GxEPD2_154, GxEPD2_154::HEIGHT> display(GxEPD2_154(/*CS=D8*/ SS, /*DC=D3*/ 8, /*RST=D4*/ 9, /*BUSY=D2*/ 7));

//#define MINIMAL_EXAMPLE
#define BITMAP_EXAMPLE

#ifdef BITMAP_EXAMPLE

#include "200x200_mxfxmdragon_rot.h"


void setup()
{
  display.init();
  display.drawImage(bitmap, 0, 0, 200, 200, false, true, true);
}

void loop(){};
#endif

#ifdef MINIMAL_EXAMPLE
void setup()
{
  display.init();
  display.setTextColor(GxEPD_BLACK);
  display.firstPage();
  do
  {
    display.fillScreen(GxEPD_WHITE);
    display.print("Hello World!");
  } while (display.nextPage());
}

void loop(){};
#endif