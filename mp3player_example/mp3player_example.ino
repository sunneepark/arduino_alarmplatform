/*
 * mp3 player example
 * 
 * The circuit:
 * -INPUT
 * 5V
 * GND
 * TX
 * RX
 * 
 * -OUTPUT
 * SPK_1
 * SPK_2
 *
 * Created 19/12/03
 * By sunneepark
 * 
 */
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>  // 라이브러리는 첨부하였습니다.

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  mp3_set_serial (Serial); //set Serial for DFPlayer-mini mp3 module 
  delay(1);  //wait 1ms for mp3 module to set volume
  mp3_set_volume (15);
}

void loop() {
  // put your main code here, to run repeatedly:
  mp3_play (1);//0001.mp3재생
  Serial.println("이게뭐야");
  delay (30000);
  mp3_play (2);//0002.mp3재생
  delay (30000);
}
