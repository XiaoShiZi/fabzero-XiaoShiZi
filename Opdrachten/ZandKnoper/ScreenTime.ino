void ScreenTime(){
  TimerLooptNog=TimerEnd-millis();
  if (TimerLooptNog<=800ul){
    Serial.println("Timesup");
    PlayTune();
//    PlayTune();
    TimerStarted=false;
    /*
    Screen=1;
    Screen1();
    */
    
  }
  else  {
//  Serial.println((String)millis());
//  Serial.println((String)TimerLooptNog+" TimerLooptNog");
  unsigned long TimeMin=(TimerLooptNog/60000);
  //unsigned long TimeMin=TimeMin%60;
  Serial.println((String)TimerLooptNog);
  Serial.println((String)"TimeMin = "+TimeMin);
  unsigned long TimeSec=(TimerLooptNog/(1000))%60;
  Serial.println((String)"TimerLooptNog "+TimerLooptNog+" TimeMin "+TimeMin+":"+TimeSec);
  if (TimeMin<=9)
    LeadTimeMin="0";
  else 
  LeadTimeMin="";
  if (TimeSec<=9)
    LeadTimeSec="0";
  else 
  LeadTimeSec="";
  Serial.println((String)TimeMin);
  Serial.println((String)LeadTimeMin+TimeMin+":"+LeadTimeSec+TimeSec);
  u8g2.setFontDirection(0);
  u8g2.clearBuffer();
  u8g2.setFontMode(0);
  u8g2.setDrawColor(1);
  u8g2.setCursor(1, 40);
  u8g2.print((String)LeadTimeMin+TimeMin+":"+LeadTimeSec+TimeSec);  //Test if leading Zero
//  u8g2.setCursor(24, 40);
//  u8g2.print((String)LeadTimeSec+TimeSec);  //Test if leading Zero
  u8g2.setCursor(1, 65);
  u8g2.print("Snooze");
  u8g2.setCursor(49, 62);
  u8g2.print(".");
  u8g2.setCursor(50, 62);
  u8g2.print(".");
  u8g2.setCursor(49, 63);
  u8g2.print(".");
  u8g2.setCursor(50, 63);
  u8g2.print(".");
  u8g2.setCursor(1, 80);
  u8g2.print("Stop-");
  u8g2.setCursor(30, 81);
  u8g2.print("-");
  u8g2.setCursor(34, 80);
  u8g2.print("-");
  u8g2.setCursor(34, 81);
  u8g2.print("-");
  u8g2.setCursor(1, 105);
  u8g2.print("小獅子一");
  u8g2.sendBuffer();
  }
}
