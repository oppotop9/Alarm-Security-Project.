// ประกาศตัวแปรกับขาPin 
const int flamePin = 3; //สัญญาณตรวจจับไฟ
const int buzzerPin = 9; //buzzer(ตัวปล่อยเสียง)เชื่อมกับขาPin11
const int ledPinW = 12; //แสงไฟสีขาว
const int ledPinY = 7; //แสดงไฟสีเหลือง
int Flame = HIGH; //state of sensor(ประกาศว่าเปิดการทำงานของ เซนเซอร์เปลวไฟ)(Interrupt)

  void setup()
 {
     pinMode(flamePin, INPUT);
     pinMode(buzzerPin, OUTPUT);
     pinMode(ledPinW, OUTPUT);
     pinMode(ledPinY, OUTPUT);
     Serial.begin(9600);
 }
 
  void loop()
 {
     Flame = digitalRead(flamePin); 
     if (Flame == 0) //(Interrupt)
     {
         digitalWrite(buzzerPin, 1);
         digitalWrite(ledPinW, 1);
         digitalWrite(ledPinY, 1);
     }
     else {
         digitalWrite(buzzerPin, 0);
         digitalWrite(ledPinW, 0);
         digitalWrite(ledPinY, 0);       
     }
 }
  