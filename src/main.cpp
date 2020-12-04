#include <Arduino.h>
#include "pitches.h"

int melody[] = {

  NOTE_C4, NOTE_G3
};


int noteDurations[] = {

  4,8
};

void setup() {


  for (int thisNote = 0; thisNote < 2; thisNote++) {


    int noteDuration = 1000 / noteDurations[thisNote];

    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;

    delay(pauseBetweenNotes);

    noTone(8);

  }
}

void loop() {

}