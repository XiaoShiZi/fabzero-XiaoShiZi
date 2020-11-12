void CheckButton() {
  // read the state of the switch/button:
  currentState = digitalRead(BUTTON_PIN);
  if(lastState == HIGH && currentState == LOW) {        // button is pressed
    pressedTime = millis();
    isPressing = true;
    isLongDetected = false;
    isShortDetected = false;
  }
  else if(lastState == LOW && currentState == HIGH) { // button is released
    isPressing = false;
    action=true;
    releasedTime = millis();
    long pressDuration = releasedTime - pressedTime;
    if( pressDuration < SHORT_PRESS_TIME ){
      isShortDetected = true;
    }
    if( pressDuration > LONG_PRESS_TIME ) {
      isLongDetected = true;
    }
  }
  lastState = currentState;
}
