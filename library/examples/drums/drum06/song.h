#ifndef SONG_H
#define SONG_H

#define Song const uint8_t PROGMEM

Song music[] = {
  0x05,           // Number of tracks
  0x00, 0x00,     // Address of track 0
  0x03, 0x00,     // Address of track 1
  0x07, 0x00,     // Address of track 2
  0x52, 0x00,     // Address of track 3
  0x59, 0x00,     // Address of track 4
  0x00,           // Channel 0 entry track (PULSE)
  0x00,           // Channel 1 entry track (SQUARE)
  0x00,           // Channel 2 entry track (TRIANGLE)
  0x01,           // Channel 3 entry track (NOISE)

  //"Track 0"
  0x40, 0,        // FX: SET VOLUME: volume = 0
  0xFE,           // RETURN (empty track used for silent channels)

  //"Track 1"
  0xFD, 32, 2,    // REPEAT: count = 32 - track = 4
  0xFE,           // RETURN

  //"Track 2" 16
  0xFD, 14, 3,    // REPEAT: count = 15 - track = 3
  0x40,  0,       // FX: SET VOLUME: volume = 0
  0x9F + 2,       // DELAY: ticks = 2

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x9F + 32,      // DELAY: ticks = 32

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 4,       // DELAY: ticks = 4

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 4,       // DELAY: ticks = 4

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 4,       // DELAY: ticks = 4

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 4,       // DELAY: ticks = 4

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x40, 32,       // FX: SET VOLUME: volume = 32
  0xFD, 3, 4,     // REPEAT: count = 3 - track = 4
  0x9F + 12,      // DELAY: ticks = 12

  0x9F + 16,      // DELAY: ticks = 16

  0xFE,           // RETURN

  //"Track 3"
  0x40, 32,       // FX: SET VOLUME: volume = 32
  0x9F + 1,       // DELAY: ticks = 1
  0x40, 16,       // FX: SET VOLUME: volume = 16
  0x9F + 1,       // DELAY: ticks = 1
  0xFE,           // RETURN

  //"Track 4"
  0x41, -16,      // FX: VOLUME SLIDE ON: steps = -16
  0x9F + 1,       // DELAY: ticks = 1
  0xFE,           // RETURN
};

#endif