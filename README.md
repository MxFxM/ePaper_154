# ePaper_154
1.54 inch e-Paper from waveshare

## libraries
Adafruit BusIO by Adafruit
1.9.3

Adafruit GFX Library by Adafruit
1.10.12

GxEPD2 by Jean-Marc Zingg
1.3.8

## connections
| Teensy | Function       | ePaper |
|--------|----------------|--------|
| 3v3    | Supply voltage | 3v3    |
| GND    | Ground         | GND    |
| 7      | Display busy   | BUSY   |
| 8      | ?              | DC     |
| 9      | Display reset  | RST    |
| 10     | Chip select    | CS     |
| 11     | Serial data    | DIN    |
| 13     | Serial clocl   | CLK    |

## convert images to bitmaps
https://javl.github.io/image2cpp/