#include <Adafruit_NeoPixel.h>
#include <config.h>

void setup()
{
    strip.begin();
    strip.setBrightness(255);
}

void colors()
{
    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(255, 0, 0));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(255, 77, 0));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(255, 255, 0));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(0, 255, 0));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(0, 255, 255));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 255));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(77, 0, 255));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(255, 0, 255));
        strip.show();
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.show();
        delay(20);
    }
}

void center()
{
    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(255, 0, 0));
        strip.setPixelColor(i, strip.Color(255, 0, 0));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(255, 77, 0));
        strip.setPixelColor(i, strip.Color(255, 77, 0));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(255, 255, 0));
        strip.setPixelColor(i, strip.Color(255, 255, 0));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(0, 255, 0));
        strip.setPixelColor(i, strip.Color(0, 255, 0));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(0, 255, 255));
        strip.setPixelColor(i, strip.Color(0, 255, 255));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(0, 0, 255));
        strip.setPixelColor(i, strip.Color(0, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(77, 0, 255));
        strip.setPixelColor(i, strip.Color(77, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(255, 0, 255));
        strip.setPixelColor(i, strip.Color(255, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = NUM_LEDS / 2; i >= 0; i--) {
        strip.setPixelColor(NUM_LEDS - i - 1, strip.Color(0, 0, 0));
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.show();
        delay(30);
    }
}

void toCenter()
{
    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(255, 0, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(255, 0, 0));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(255, 77, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(255, 77, 0));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(255, 255, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(255, 255, 0));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(0, 255, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(0, 255, 0));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(0, 255, 255));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(0, 255, 255));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 255));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(0, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(133, 0, 255));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(133, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(255, 0, 255));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(255, 0, 255));
        strip.show();
        delay(30);
    }

    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(0, 0, 0));
        strip.show();
        delay(30);
    }
}

void rainbow()
{
    unsigned long startTime = millis();
    unsigned long elapsedTime = 0;
    unsigned long rainbowTime = 30000;
    int rainbow = 0;

    while (elapsedTime < rainbowTime) {
        strip.rainbow(rainbow);
        strip.show();
        delay(15);

        elapsedTime = millis() - startTime;
        rainbow -= 256;
    }
}

void toBlack()
{
    for (int i = 0; i < NUM_LEDS / 2; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.setPixelColor(NUM_LEDS - 1 - i, strip.Color(0, 0, 0));
        strip.show();
        delay(30);
    }
}

void commet()
{
    unsigned long startTime = millis();
    unsigned long elapsedTime = 0;
    unsigned long commetTime = 30000;

    while (elapsedTime < commetTime) {
        for (int i = NUM_LEDS - 1; i >= 0; i--) {
            for (int j = 0; j < NUM_LEDS; j++) {
                int brightness = map((j + i) % NUM_LEDS, 0, NUM_LEDS / 2, 0, 255);
                brightness = constrain(brightness, 0, 255);
                if ((j + i) % NUM_LEDS >= NUM_LEDS / 2) {
                    strip.setPixelColor(j, strip.Color(0, 0, 0));
                } else {
                    strip.setPixelColor(j, strip.Color(0, brightness, brightness));
                }
            }
            strip.show();
            delay(30);

            elapsedTime = millis() - startTime;
        }
    }
}

void loop()
{
    colors();
    center();
    toCenter();
    rainbow();
    toBlack();
    commet();
    toBlack();
}