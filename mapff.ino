void setup() {
  Serial.begin(115200);
}
double mapf(double val, double in_min, double in_max, double out_min, double out_max) {
    return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void loop() {
  int val = map(analogRead(A0), 360, 860, 1000, 0);
  float valf = val/1000.0;

  float newval = mapf(valf, 0.0, 1.0, 0.0, 100.0);
  Serial.println(newval);
  
  delay(100);
}
