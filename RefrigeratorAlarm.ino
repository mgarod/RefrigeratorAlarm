/*  Author: Michael Garod
 *  Date Created: 1/3/17
 *  Description: While either of the two Reed Switchs are open/LOW (i.e. the magnets are
 *    separated), play "Closer" by The Chainsmokers.
 *  Resources used:
 *    http://randomnerdtutorials.com/monitor-your-door-using-magnetic-reed-switch-and-arduino/
 *    https://github.com/davesolitario/SONGS---FOR---ARDUINO
 */

#include "pitches.h"
const int doorOpenLed=13; // RED
const int switchReedLeft=6; // BLUE
const int switchReedRight=7; // GREEN
const int BUZZER=12; // YELLOW

void setup(){
  pinMode(doorOpenLed, OUTPUT);
  pinMode(switchReedLeft, INPUT);
  pinMode(switchReedRight, INPUT);
  pinMode(BUZZER, INPUT);
  Serial.begin(9600);
}

void loop(){
  // If either reed switch is open, trigger song
  if (digitalRead(switchReedLeft)==HIGH || digitalRead(switchReedRight)==HIGH){
    digitalWrite(doorOpenLed, HIGH);
    Serial.println("Your Door is Open");
    // wait before playing
    delay(1000);   
    playCloser(); // will break soon after BOTH switchReed comes back together
    noTone(BUZZER);
  }
  else {
    digitalWrite(doorOpenLed, LOW);
    Serial.println("Your Door is Closed");
  }
  delay(1000); 
}

void playCloser() {
  /* https://github.com/davesolitario/SONGS---FOR---ARDUINO */
  /* Checks the reed switch periodically to break song */
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_GS5,130); 
  
tone(BUZZER,NOTE_GS5,650); 
  delay(1100);
  
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);

tone(BUZZER,NOTE_AS5,300); 
  delay(316);

  tone(BUZZER,NOTE_C6,300); 
  delay(316);
if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
    tone(BUZZER,NOTE_GS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);
    tone(BUZZER,NOTE_C6,300); 
  delay(316);
if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
   tone(BUZZER,NOTE_GS5,300); 
  delay(316);
 tone(BUZZER,NOTE_AS5,300); 
  delay(316);

tone(BUZZER,NOTE_AS5,300); 
  delay(316);

  tone(BUZZER,NOTE_C6,300); 
  delay(316);
if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
    tone(BUZZER,NOTE_GS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);
    tone(BUZZER,NOTE_GS5,200); 
  delay(316);
if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
 tone(BUZZER,NOTE_GS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(316);

tone(BUZZER,NOTE_C6,300); 
  delay(316);

if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
 tone(BUZZER,NOTE_GS5,300); 
  delay(316);
    tone(BUZZER,NOTE_AS5,316); 
  delay(316);
    tone(BUZZER,NOTE_AS5,300); 
  delay(632);
tone(BUZZER,NOTE_GS5,300); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
    tone(BUZZER,NOTE_AS5,316); 
  delay(316);
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
tone(BUZZER,NOTE_GS5,300); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316); 
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_AS5,316); 
  delay(316);
   tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316);
 tone(BUZZER,NOTE_C6,300); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
 tone(BUZZER,NOTE_GS5,300); 
  delay(316);
   tone(BUZZER,NOTE_AS5,316); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316);
tone(BUZZER,NOTE_C6,300); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
tone(BUZZER,NOTE_GS5,300); 
  delay(316);
   tone(BUZZER,NOTE_AS5,316); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
tone(BUZZER,NOTE_C6,300); 
  delay(316);
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
   tone(BUZZER,NOTE_AS5,316); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(632);
if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
   tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_GS5,26); 
  delay(26);
 tone(BUZZER,NOTE_AS5,290); 
  delay(290);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
   tone(BUZZER,NOTE_GS5,300); 
  delay(316);
tone(BUZZER,NOTE_AS5,316); 
  delay(316);
 tone(BUZZER,NOTE_AS5,316); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_GS5,200); 
  delay(316);
   tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_C6,300); 
  delay(316);
  tone(BUZZER,NOTE_C6,300); 
  delay(316);
  if (digitalRead(switchReedLeft)==LOW && digitalRead(switchReedRight)==LOW) return;
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_GS5,300); 
  delay(316);
  tone(BUZZER,NOTE_AS5,316); 
  delay(316);
  tone(BUZZER,NOTE_AS5,316); 
  delay(316);
   tone(BUZZER,NOTE_GS5,3000); 
  delay(1000);
}
