//푸시버튼들과 연결된 아두이노 보드의 디지털 입력 포트
int key1 = 5;
int key2 = 4;
int key3 = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(key1,INPUT_PULLUP);
  pinMode(key2,INPUT_PULLUP);
  pinMode(key3,INPUT_PULLUP);
  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if(digitalRead(key1)==LOW){ //첫번째 버튼
    
    Serial.println("1");
    delay(1000);
  }
    
  if(digitalRead(key2)==LOW){ //두 번째 버튼
    
    Serial.println("2");
    delay(1000);
  }
    
  if(digitalRead(key3)==LOW){ //세 번째 버튼
    Serial.println("3");
    delay(1000);
  }
  
}
