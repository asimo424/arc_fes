/*2016 Toku Segawa*/

#define KEY_2 31
#define KEY_3 32 
#define KEY_4 33
#define KEY_5 34
#define KEY_7 36
#define KEY_8 37
#define KEY_9 38
#define KEY_0 39
#define KEY_SPACE 44

#define PIN_2 2 //key 1
#define PIN_3 3 //key 2
#define PIN_4 4 //key 3
#define PIN_5 5 //key 4
#define PIN_6 6 //key 5
#define PIN_7 7 //key 7
#define PIN_8 8 //key 8
#define PIN_9 9 //key 9
#define PIN_10 10 //key spacebar

uint8_t buf[8] = {0};

int state = 1;

void setup(){
  Serial.begin(9600);
  pinMode(PIN_2,INPUT);
  pinMode(PIN_3,INPUT);
  pinMode(PIN_4,INPUT);
  pinMode(PIN_5,INPUT);
  pinMode(PIN_6,INPUT);
  pinMode(PIN_7,INPUT);
  pinMode(PIN_8,INPUT);
  pinMode(PIN_9,INPUT);
  pinMode(PIN_10,INPUT);
  digitalWrite(PIN_2,1);
  digitalWrite(PIN_3,1);
  digitalWrite(PIN_4,1);
  digitalWrite(PIN_5,1);
  digitalWrite(PIN_6,1);
  digitalWrite(PIN_7,1);
  digitalWrite(PIN_8,1);
  digitalWrite(PIN_9,1);
  digitalWrite(PIN_10,1);
  delay(200);
}

void loop(){
  state = digitalRead(PIN_2);
  if(state != 1){
    buf[2] = KEY_2;
    Serial.write(buf,8);
    release();
  }
  
  state = digitalRead(PIN_3);
  if(state != 1){
    buf[2] = KEY_3;
    Serial.write(buf,8);
    release();
  }

  state = digitalRead(PIN_4);
  if(state != 1){
    buf[2] = KEY_4;
    Serial.write(buf,8);
    release();
  }

  state = digitalRead(PIN_5);
  if(state != 1){
    buf[2] = KEY_5;
    Serial.write(buf,8);
    release();
  }

  state = digitalRead(PIN_6);
  if(state != 1){
    buf[2] = KEY_7;
    Serial.write(buf,8);
    release();
  }

  state = digitalRead(PIN_7);
  if(state != 1){
    buf[2] = KEY_8;
    Serial.write(buf,8);
    release();
  }
  
  state = digitalRead(PIN_8);
  if(state != 1){
    buf[2] = KEY_9;
    Serial.write(buf,8);
    release();
  }
  
  state = digitalRead(PIN_9);
  if(state != 1){
    buf[2] = KEY_0;
    Serial.write(buf,8);
    release();
  }

  state = digitalRead(PIN_10);
  if(state != 1){
    buf[2] = KEY_SPACE;
    Serial.write(buf,8);
    release();
  }
}

void release(){
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf,8);
  delay(200);
}

