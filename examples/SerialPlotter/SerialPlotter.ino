// Used to test the GUI - PLOTTING section of theme.txt

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(0);  //plotting.graphcolor.00
  Serial.print(',');
  Serial.print(1);  //plotting.graphcolor.01
  Serial.print(',');
  Serial.print(2);  //plotting.graphcolor.02
  Serial.print(',');
  Serial.println(3);  //plotting.graphcolor.03
}
