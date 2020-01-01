#include "DigiKeyboard.h"

const int piezoPin1 =  0;
const int piezoPin2 =  1;


void setup(){
  DigiKeyboard.delay(5000);
  
  pinMode(piezoPin1, OUTPUT);
  pinMode(piezoPin2, OUTPUT);

  digitalWrite(piezoPin1, LOW);
  digitalWrite(piezoPin2, HIGH);
  delay(50);
  digitalWrite(piezoPin1, LOW);
  digitalWrite(piezoPin2, LOW);  
}


void loop(){
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);

  long second_ms = 1000;
  long minute_ms = second_ms * 60;
  long low =  60;
  long high = 120;
  long randTime = random(low, high);
  delay(randTime * second_ms);
  
  
  int randItem = random(1, 10);
  if(randItem == 0)
  {
    // Print Hallo
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.println("@");
    // --- Print Hallo
  }

  if(randItem == 1)
  {
    // Open Explorer
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_E, MOD_GUI_LEFT);
    // --- Open Explorer
  }

  if(randItem == 2)
  {
    // Open Calculator
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(250);
    DigiKeyboard.println("calc");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    // --- Open Calculator
  }

  if(randItem == 3)
  {
    // Lock Screen
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);
    // --- Lock Screen
  }

  if(randItem == 4)
  {
    // Show Desktop
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
    // --- Show Desktop
  }

  if(randItem == 5)
  {
    // New
    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
    // --- New
  }

  
  if(randItem == 6 || randItem == 7)
  {
    // Beep
    digitalWrite(piezoPin1, LOW);
    digitalWrite(piezoPin2, HIGH);
    delay(50);
  
    digitalWrite(piezoPin1, LOW);
    digitalWrite(piezoPin2, LOW);  
    // --- Beep
  }
  
  //DigiKeyboard.delay(50000);
  
}
