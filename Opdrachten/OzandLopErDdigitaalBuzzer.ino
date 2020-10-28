/*
 * Arduino Nano Every O zandLopEr Digitaal 
 *         Eerste versie Oled, Ballswitch en Passive Buzzer.
 *         
 * By Xiao Shi Zi Yi 小獅子一
 * 
 * Geluid door Buzzer aangesloten op pin D3(pin6 van het board) 
 * 
 * Ball switch aangesloten op pin D2(pin5)
 * 
 * Library: Oled 6 pins 2 colours, u8g2 by Oliver (ipv u8glib)
 * Pins on the Nano Every
 * 
 * Library 
 * 
 * Test van de Buzzer met de hoorbare frequenties zonder veel ruis door aanpassing van de tone(buzzer, Waarde).
 * 
 */
const int buzzer = 3; //buzzer to Nano Every pin D3
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Ter controle tijdens testen van de code
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 50); // Send 50Hz sound signal... between 20-12000
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  tone(buzzer, 100); // Send 100Hz sound signal... between 20-12000
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  tone(buzzer, 12000); // Send 12KHz sound signal... between 20-12000
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
}
