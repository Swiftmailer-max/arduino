#include "pitches.h"

// Definicje nut dla melodii "Sleigh Ride"
int melody[] = {
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A3, NOTE_A3
};

int noteDurations[] = {
  4, 4, 4, 2, 2, 4, 4,
  2, 2, 2, 4, 4, 2, 1
};

const int buzzerPin1 = 13; // Pierwszy pin buzzera (nie dziala)
const int buzzerPin2 = 12; // Drugi pin buzzera

void setup() {
  pinMode(buzzerPin1, OUTPUT);
  pinMode(buzzerPin2, OUTPUT);
}

void loop() {
  // Funkcja odtwarzająca melodię
  playMelody();
  delay(2000); // Przerwa przed ponownym odtworzeniem melodii
}

void playMelody() {
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    
    // Odtwarzaj nutę, przełączając się między pinami
    tone(buzzerPin2, melody[thisNote], noteDuration / 2);
    delay(noteDuration);
    //tone(buzzerPin2, melody[thisNote], noteDuration / 2);
    //delay(noteDuration * 1.3 / 2); // Przerwa między nutami
    //delay(440 * 1.3 / 2);

    noTone(buzzerPin2);
    //noTone(buzzerPin2);
  }
}
