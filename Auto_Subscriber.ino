#include "DigiKeyboard.h"
#define KEY_TAB      0x2b

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  //Small delay to make sure DigiSpark is fully connected
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(0);
  //Opens up Chrome through Window's search in order to avoid being blocked by administrator ristrictions
  DigiKeyboard.sendKeyStroke('r',MOD_GUI_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("Google Chrome");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //Incase of Chromebook
  DigiKeyboard.sendKeyStroke(KEY_N,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_L,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  //||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||Enter your Youtube Channel link below||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
  //VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV                                     VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV
  DigiKeyboard.print("CHANNEL LINK HERE");
  //Changes the link to subscriber confirmation link
  DigiKeyboard.delay(100);
  DigiKeyboard.print("?sub_confirmation=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Large delay in order to let Youtube load
  DigiKeyboard.delay(7500);
  //Selects the subscribe button using the TAB key
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Flashes LED when done
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  DigiKeyboard.delay(500);
  digitalWrite(1,HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1,LOW);
  for(;;){ /*empty*/ }
}
