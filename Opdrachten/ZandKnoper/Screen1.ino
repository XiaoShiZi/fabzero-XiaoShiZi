void Screen1(){
//  u8g2.setFlipMode(TiltState);
//  u8g2.setFont(u8g2_font_unifont_t_chinese2);  // use chinese2 for all the glyphs of "你好世界" Try "小獅子"
  delay(50);
/*  
 *   
 if (TiltState == HIGH){
      Serial.println("NormaalSchermUp");  //u8g2.setFlipMode (TiltState);
//      u8g2(u8g2_R0);
//      u8g2.setFlipMode (0);
      u8g2.setDisplayRotation(U8G2_R3);
      u8g2.setFlipMode (0);
    }
    else {
      Serial.println("TurnScreenUp");
//      u8g2.setFlipMode (1);
      u8g2.setDisplayRotation(U8G2_R1);
      u8g2.setFlipMode (1);
    }
*/
//  u8g2.setFontDirection(0);
  u8g2.clearBuffer();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setCursor(1, 15);
  u8g2.print((String)SetT+SetE+" Min");  //TE Min
  //BoxBackGround 
  u8g2.setDrawColor(1);
  u8g2.drawBox(0,29,43,12);
  u8g2.setCursor(1, 40);
  u8g2.setFontMode(0);
  u8g2.setDrawColor(0);
  u8g2.print("START");
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setCursor(1, 65);
  u8g2.print("Next");
  u8g2.setCursor(35, 62);
  u8g2.print(".");
  u8g2.setCursor(36, 62);
  u8g2.print(".");
  u8g2.setCursor(35, 63);
  u8g2.print(".");
  u8g2.setCursor(36, 63);
  u8g2.print(".");
  u8g2.setCursor(1, 80);
  u8g2.print("Select-");
  u8g2.setCursor(49, 81);
  u8g2.print("-");
  u8g2.setCursor(53, 80);
  u8g2.print("-");
  u8g2.setCursor(53, 81);
  u8g2.print("-");
  u8g2.setCursor(1, 105);
  u8g2.print("小獅子");
  u8g2.sendBuffer();
}
