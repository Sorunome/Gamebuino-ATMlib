#include <Arduino.h>
#include <ATMlib.h>
#include "Arglib.h"
#include "bitmaps.h"
#include "song.h"
#include "testsong.h"


Arduboy arduboy;
Sprites sprites(arduboy);


void setup() {
  arduboy.start();
  // set the framerate of the game at 60 fps
  arduboy.setFrameRate(60);
  // Initializes ATMSynth and samplerate
  // Begin playback of song.
  // Lower the tempo ever so slightly
  ATM.play(testmusic, 15625, 50);
}

void loop() {

  if (!(arduboy.nextFrame())) return;
  arduboy.poll();
  arduboy.clearDisplay();
  for (byte i = 0; i < 4; i++) sprites.drawSelfMasked(32 * i, 10, TEAMarg, i);
  sprites.drawSelfMasked(43, 50, TEAM_argPart5, 0);
  if (arduboy.justPressed(A_BUTTON))
  {
    /*
      for (int n = 1000; n < 4000; n += 40) {
      osc[0].vol = 63;
      osc[0].freq = n;
      delay(1);
      osc[0].vol = 0;

      }
    */
  }
  if (arduboy.justPressed(B_BUTTON)) ATM.playPause();
  arduboy.display();
}
