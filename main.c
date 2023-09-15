#include "SoftwareSerial.h"
#include "DFPlayer_Mini_Mp3.h"

SoftwareSerial mySerial(6, 7); // RX, TX

void setup() {
  Serial.begin(9600);
    mySerial.begin(9600);
    mp3_set_serial(mySerial);
    mp3_set_volume(15);       // fixe le son (30 maximum)
    mp3_set_EQ(0);            // equalizer de 0 à 5
}

void loop() {
    int delai = 3000;
    mp3_play();  // joue mp3/0001.mp3
    Serial.print("Playing first");
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes

    mp3_play(3); // joue mp3/0004.mp3
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes

    mp3_next();  // joue le prochain mp3
    delay(delai); // pause de 5 secondes
}   