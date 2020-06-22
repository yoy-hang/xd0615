int a=7;
int b=6;
int c=5;
int d=11; 
int e=10; 
int f=8; 
int g=9; 
int dp=4;
//显示数字0
void digital_0(void) {

  digitalWrite(dp,HIGH); 
  digitalWrite(c,LOW); 
  digitalWrite(f,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(g,HIGH);
  
}
//显示数字 1
void digital_1(void) {
  unsigned char j;
  digitalWrite(c,LOW);
  digitalWrite(b,LOW);
  for( j=7;j<=11;j++) {
    digitalWrite( j,HIGH); 
  }
  digitalWrite(dp,HIGH);
}
//显示数字 2
void digital_2(void) {
  unsigned char j; 
  digitalWrite(b,LOW); 
  digitalWrite(a,LOW); 
  for( j=9;j<=11;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(dp,HIGH); 
  digitalWrite(c,HIGH); 
  digitalWrite(f,HIGH);
}
//显示数字 3
void digital_3(void) {
  unsigned char j; 
  digitalWrite(g,LOW); 
  digitalWrite(d,LOW); 
  for( j=5;j<=7;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(dp,HIGH); 
  digitalWrite(f,HIGH); 
  digitalWrite(e,HIGH);
}
//显示数字 4
void digital_4(void) {
  digitalWrite(c,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(f,LOW); 
  digitalWrite(g,LOW); 
  digitalWrite(dp,HIGH); 
  digitalWrite(a,HIGH); 
  digitalWrite(e,HIGH); 
  digitalWrite(d,HIGH);
}
//显示数字 5
void digital_5(void) {
  unsigned char j;
  for( j=7;j<=9;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(dp,HIGH); 
  digitalWrite(b,HIGH); 
  digitalWrite(e,HIGH);
}
//显示数字 6
void digital_6(void) {
  unsigned char j; 
  for( j=7;j<=11;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(c,LOW); 
  digitalWrite(dp,HIGH); 
  digitalWrite(b,HIGH);
}
//显示数字 7
void digital_7(void) {
  unsigned char j; 
  for( j=5;j<=7;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(dp,HIGH); 
  for( j=8;j<=11;j++) {
    digitalWrite( j,HIGH); 
  }
}
//显示数字 8
void digital_8(void) {
  unsigned char j; 
  for( j=5;j<=11;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(dp,HIGH);
  }
  void setup() {
  int i;//定义发量 
  for(i=4;i<=11;i++) {
    pinMode(i,OUTPUT);
  }
}
//显示数字9
void digital_9(void) {
  unsigned char j; 
  digitalWrite(b,LOW); 
  digitalWrite(a,LOW); 
  for( j=9;j<=11;j++) {
    digitalWrite( j,LOW); 
  }
  digitalWrite(dp,HIGH); 
  digitalWrite(c,LOW); 
  digitalWrite(f,LOW);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  
}
void loop() {
  digital_0();
  delay(1000);
  digital_1();//数字 1 
  delay(1000);//延时 1s 
  digital_2(); 
  delay(1000); 
  digital_3(); 
  delay(1000); 
  digital_4(); 
  delay(1000); 
  digital_5(); 
  delay(1000); 
  digital_6(); 
  delay(1000); 
  digital_7(); 
  delay(1000); 
  digital_8(); 
  delay(1000);
  digital_9();
  delay(1000);
}