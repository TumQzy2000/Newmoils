float val = 0; //ทุกค่าจะแสดงผลเมื่อค่าที่วัดได้อยู่ที่ 0
float val1 = 0;
float val2 = 0;
float val3 = 0;

void setup(){

Serial.begin(115200);

pinMode(36, INPUT);//กำหนดพินสำหรับต่อเซนเซอร์
pinMode(39, INPUT);
pinMode(34, INPUT);
}

void loop(){

Serial.print("Moisture Sensor Value 1 :");
Serial.println(analogRead(36));
val = analogRead(36);
val1 = 100-(val*100)/4095;
Serial.print("sensor 1 percent (%) = ");
Serial.println(val1);
Serial.print("Moisture Sensor Value 2 :");
Serial.println(analogRead(39));
val = analogRead(39);
val2 = 100-(val*100)/4095;
Serial.print("sensor 2 percent (%) = ");
Serial.println(val2);
Serial.print("Moisture Sensor Value 3 :");
Serial.println(analogRead(34));
val = analogRead(34);
val3 = 100-(val*100)/4095;
Serial.print("sensor 3 percent (%) = ");
Serial.println(val3);

delay(5000);
}
