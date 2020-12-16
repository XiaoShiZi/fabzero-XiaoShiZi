void ScreenSetT(){
//  String(SetT).toCharArray(SetT,4);
  delay(50);
//  u8g2.setFont(u8g2_font_unifont_t_chinese2);  // use chinese2 for all the glyphs of "你好世界" Try "小獅子"
  u8g2.setFontDirection(0);
  u8g2.clearBuffer();
//BoxBackGround 
  u8g2.setDrawColor(1);
  u8g2.drawBox(0,4,9,12);
  u8g2.setFontMode(0);
  u8g2.setDrawColor(0);
  u8g2.drawStr(1,15,SetT);
  u8g2.setCursor(1,15);
  u8g2.print(SetT);
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setCursor(9, 15);
  u8g2.print((String)SetE+" Min");  //TE Min
  u8g2.setCursor(1, 40);
  u8g2.print((String)"START");
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
  u8g2.print("Select -");
  u8g2.setCursor(39, 81);
  u8g2.print("-");
  u8g2.setCursor(43, 80);
  u8g2.print("-");
  u8g2.setCursor(43, 81);
  u8g2.print("-");
  u8g2.setCursor(1, 105);
  u8g2.print("小獅子一");
  u8g2.sendBuffer();
}
