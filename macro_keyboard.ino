/*
MAPPA GPIO TO BUTTON
- - - -
4 8 5 6
- - - -
3 9 7 2

MAPPA SHORTCUT
1 -> g hub
2 -> ALT TAB
3 -> save
4 -> spotify
5 -> file explorer
6 -> lock
7 -> cmd
8 -> nuovo documento
*/

#include <Keyboard.h>

#define b1 4
#define b2 8
#define b3 5
#define b4 6

#define b5 3
#define b6 9
#define b7 7
#define b8 2


int a1,a2,a3,a4,a5,a6,a7,a8;
int p1,p2,p3,p4,p5,p6,p7,p8;

void setup() 
{
  int i=2;
  while(i<=9)
  {
    pinMode(i,INPUT_PULLUP);
    i++;
  }
  Serial.begin(9600);
  Keyboard.begin();
  a1=digitalRead(b1);
  a2=digitalRead(b2);
  a3=digitalRead(b3);
  a4=digitalRead(b4);
  a5=digitalRead(b5);
  a6=digitalRead(b6);
  a7=digitalRead(b7);
  a8=digitalRead(b8);
}

void loop() 
{
  p1=a1;
  p2=a2;
  p3=a3;
  p4=a4;
  p5=a5;
  p6=a6;
  p7=a7;
  p8=a8;
  a1=digitalRead(b1);
  a2=digitalRead(b2);
  a3=digitalRead(b3);
  a4=digitalRead(b4);
  a5=digitalRead(b5);
  a6=digitalRead(b6);
  a7=digitalRead(b7);
  a8=digitalRead(b8);

  if(p1==1 && a1==0)
  {
    Serial.print("1");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('g');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p2==1 && a2==0)
  {
    Serial.print("2");
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_TAB);
    delay(100);
    Keyboard.releaseAll();
  }

  if(p3==1 && a3==0)
  {
    Serial.print("3");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p4==1 && a4==0)
  {
    Serial.print("4");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p5==1 && a5==0)
  {
    Serial.print("5");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p6==1 && a6==0)
  {
    Serial.print("6");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p7==1 && a7==0)
  {
    Serial.print("7");
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(100);
    Keyboard.releaseAll();
  }

  if(p8==1 && a8==0)
  {
    Serial.print("8");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('n');
    delay(100);
    Keyboard.releaseAll();
  }
}
