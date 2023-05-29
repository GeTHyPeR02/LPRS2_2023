// Define the button pins connected to the first row
const int buttonPins[] = {2, 3, 4, 5};
int buttonState[4];
int buttonStatePrev[4];
String mess[2][4]={{"PANJog_up=0", "PANJog_down=0", "PANJog_left=0", "PANJog_right=0"},
                   {"PANJog_up=1", "PANJog_down=1", "PANJog_left=1", "PANJog_right=1"}};

void setup() {
  Serial.begin(115200); // Initialize serial communication for printing

  // Set button pins as inputs
  for (int i = 0; i < sizeof(buttonPins) / sizeof(buttonPins[0]); i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  for(int i=0; i<4; i++){
    buttonState[i]=0;
    buttonStatePrev[i]=0;
  }
}

void loop() {

  
  // Read the state of each button
  for (int i = 0; i <4; i++) {
        if(digitalRead(buttonPins[i])==LOW)
           buttonState[i]=1;
        else
           buttonState[i]=0;
   
        if(buttonState[i]!=buttonStatePrev[i])
        {
          Serial.println(mess[buttonState[i]][i]);
          buttonStatePrev[i]=buttonState[i];
        
    }
  }
  
  delay(250); // Add a small delay to debounce the buttons
}
