# arduino_alarmplatform
Arduino 로 만드는 알람 플랫폼

## Operation
버튼 1번을 누르면 다른 아두이노에서 0001.mp3 파일 재생
.... 2번 ... 3번...

mp3 파일은 TTS 파일

## ./communication
```bash
├── communication         - 시연 영상 속 코드
│   ├── RF24-master       - 블루투스 모듈 라이브러리
│   ├── rec               - 통신을 받고 mp3 파일 재생
│   │── send              - 버튼에 따라 통신 전송
│   │ 
```

## ./mp3_getstarted
DFPlayer의 모든 작동, 오류(sd카드 미인식 등) 파악 가능

## ./mp3player_example
0001.mp3 0002.mp3 파일 차례대로 재생

## ./pullup_button
버튼 세개 pullup 방식으로 병렬연결
<br></br>
##### 하드웨어 관련 자세한 부분은 아래 In details 참조

##### In details
https://blog.naver.com/hl2ozs/221730988164
