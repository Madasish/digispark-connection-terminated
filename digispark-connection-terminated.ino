  #include "DigiKeyboard.h"
  #include <avr/pgmspace.h>

  char buffer[128]; //as long as longest string + 1 for null
  #define GetPsz( x ) (strcpy_P(buffer, (char*)x))
  #define delay1() DigiKeyboard.delay(1000);
void enter() {
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  }
  const char line1[] PROGMEM = "Connection terminated.";
  const char line2[] PROGMEM = "I'm sorry to interrupt you Elizabeth, if you still even remember that name.";
  const char line3[] PROGMEM = "But I'm afraid you've been misinformed.";
  const char line4[] PROGMEM = "You are not here to receive a gift, nor have you been called here by the individual you assume.";
  const char line5[] PROGMEM = "Although you have indeed been called. You have all been called here.";
  const char line6[] PROGMEM = "Into a labyrinth of sounds and smells, misdirection and misfortune.";
  const char line7[] PROGMEM = "A labyrinth with no exit, a maze with no prize. You don't even realize that you are trapped.";
  const char line8[] PROGMEM = "Your lust for blood has driven you in endless circles.";
  const char line9[] PROGMEM = "Chasing the cries of children in some unseen chamber, always seeming so near, yet somehow out of reach.";
  const char line10[] PROGMEM = "But you will never find them, none of you will. This is where your story ends.";
  const char line11[] PROGMEM = "And to you, my brave volunteer, who somehow found this job listing not intended for you.";
  const char line12[] PROGMEM = "Although there was a way out planned for you, I have a feeling that's not what you want.";
  const char line13[] PROGMEM = "I have a feeling that you are right where you want to be. I am remaining as well, I am nearby.";
  const char line14[] PROGMEM = "This place will not be remembered, and the memory of everything that started this can finally begin to fade away.";
  const char line15[] PROGMEM = "As the agony of every tragedy should.";
  const char line16[] PROGMEM = "And to you monsters trapped in the corridors: Be still and give up your spirits, they don't belong to you.";
  const char line17[] PROGMEM = "For most of you, I believe there is peace and perhaps more waiting for you after the smoke clears.";
  const char line18[] PROGMEM = "Although, for one of you, the darkest pit of Hell has opened to swallow you whole, so don't keep the devil waiting, old friend.";
  const char line19[] PROGMEM = "My daughter, if you can hear me, I knew you would return as well. It's in your nature to protect the innocent.";
  const char line20[] PROGMEM = "I'm sorry that on that day, the day you were shut out and left to die.";
  const char line21[] PROGMEM = "No one was there to lift you up into their arms the way you lifted others into yours. And then, what became of you.";
  const char line22[] PROGMEM = "I should have known you wouldn't be content to disappear, not my daughter. I couldn't save you then, so let me save you now.";
  const char line23[] PROGMEM = "It's time to rest. For you, and for those you have carried in your arms. This ends for all of us.";
  const char line24[] PROGMEM = "End communication.";
  const char rickroll[] PROGMEM = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";

void digiReset() {
  DigiKeyboard.sendKeyStroke(0, 0);
  DigiKeyboard.delay(1000);
}

//void waitFor( int d ) {
//  DigiKeyboard.delay( d );
//}

//void sendModKey( int key, int mod ) {
//  DigiKeyboard.sendKeyStroke( key, mod );
//  DigiKeyboard.update();
//}

//void sendKey( int key ) {
//  DigiKeyboard.sendKeyStroke( key );
//  DigiKeyboard.update();
//}

void printText( char * txt ) {
  int l = strlen(txt);
  for (int i = 0; i < l; i++) {
    DigiKeyboard.print( txt[i] );
    DigiKeyboard.update();
  }
}

void setup() {
  digiReset();
}
void loop() {
  
  // Hides all apps
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  // Opens run window
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  // Opens numpad using the numpad window
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  // Starts typing the text
  printText( GetPsz (line1) );
  enter();
  delay1();
  printText( GetPsz (line2) );
  enter();
  printText( GetPsz (line3) );
  enter();
  printText( GetPsz (line4) );
  enter();
  printText( GetPsz (line5) );
  enter();
  printText( GetPsz (line6) );
  enter();
  printText( GetPsz (line7) );
  enter();
  printText( GetPsz (line8) );
  enter();
  printText( GetPsz (line9) );
  enter();
  printText( GetPsz (line10) );
  enter();
  printText( GetPsz (line11) );
  enter();
  printText( GetPsz (line12) );
  enter();
  printText( GetPsz (line13) );
  enter();
  printText( GetPsz (line14) );
  enter();
  printText( GetPsz (line15) );
  enter();
  printText( GetPsz (line16) );
  enter();
  printText( GetPsz (line17) );
  enter();
  printText( GetPsz (line18) );
  enter();
  printText( GetPsz (line19) );
  enter();
  printText( GetPsz (line20) );
  enter();
  printText( GetPsz (line21) );
  enter();
  printText( GetPsz (line22) );
  enter();
  printText( GetPsz (line23) );
  enter();
  printText( GetPsz (line24) );
  enter();
  DigiKeyboard.delay(3000);
  
//  Closes the notepad window without saving
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(79); //right arrow key
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
//  Optional rickroll (select and use ctrl+/ to uncomment)
//
//  DigiKeyboard.delay(2000);
//  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
//  DigiKeyboard.delay(500);
//  printText( GetPsz (rickroll) );
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);

//
  for(;;){ /*empty*/ }
}
