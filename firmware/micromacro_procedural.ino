#include <Keyboard.h>

#define colCount 2
#define rowCount 4
#define debounceDelay 50

const int cols[colCount] = {21, 20};
const int rows[rowCount] = {7, 6, 5, 3};
const char* keys[colCount][rowCount] = {
  {"Key 1","Key 2","Key 3","Key 4"},
  {"Key 5","Key 6","Key 7","Key 8"}
};

bool keyStateLast[colCount][rowCount];
bool keyState[colCount][rowCount];
int keyDebounce[colCount][rowCount];

void setup() {
  
  //Rows are outputs, default to HIGH 
  for (int i = 0; i < rowCount; i++) {
    pinMode(rows[i], OUTPUT);
    digitalWrite(rows[i], HIGH);
  }
  
  //Cols are inputs, pulled high internally
  for (int i = 0; i < colCount; i++) {
    pinMode(cols[i], INPUT_PULLUP);
  }

  //initialize state and debounce arrays
  for (int r = 0; r < rowCount; r++) {
    for (int c = 0; c < colCount; c++) {
      keyStateLast[c][r] = false;
      keyState[c][r] = false;
      keyDebounce[c][r] = 0;
    }
  }
}


void loop() {
  // switch each row LOW
  for (int r = 0; r < rowCount; r++) {
    digitalWrite(rows[r], LOW);
    
    //and see if any cols go low.
    for (int c = 0; c < colCount; c++) {
        bool keyPress = !digitalRead(cols[c]);

        // if the keypress is different than the stored 
        // reading, start a debounce timer
        if (keyPress != keyStateLast[c][r]) {
          keyDebounce[c][r] = millis();
        }

        // if enough time has elapsed, read the button again
        if ((millis() - keyDebounce[c][r]) > debounceDelay) {

          // if the current state of the button matches the previous state
          // it is considered a legitimate press
          if (keyPress == keyStateLast[c][r]) {

            // if the current pin state is different than the stored state
            // store the new state
            if (keyPress != keyState[c][r]) {
              keyState[c][r] = keyPress;

              // if the state is going from high to low, send the message
              if (keyPress == true) {
                Keyboard.print(keys[c][r]);
              }
            }
          }
        }
        keyStateLast[c][r] = keyPress;
      }
    //then set the row back to HIGH.
    digitalWrite(rows[r], HIGH);
  }
    
}
