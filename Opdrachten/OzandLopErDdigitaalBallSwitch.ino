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
 * Test van de BallSwitch met de open en geslotencontact melding in de Serieële monitor.
 * 
 */

const int ballSwitch = 2; //BallSwoitch to Nano Every pin D2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Ter controle tijdens testen van de code via seriele monitor
  pinMode(ballSwitch, INPUT); //Ball switch as an input  
}

void loop() {
  // put your main code here, to run repeatedly:
  int ballKnop = digitalRead(ballSwitch);
  if (ballKnop == HIGH){
    Serial.println("Ballknop ingedrukt");
    playSoundVictory();
  } else {
    Serial.println("Ballknop vrij");
    playSoundDeath();
  }
}

void playSoundVictory(){
  Serial.println("Ballknop ingedrukt");
}

void playSoundDeath(){
  Serial.println("Ballknop vrij");
}
