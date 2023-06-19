//Pins for rotary switches
int load=A0;
int clockPulse=A1;
int dataOut=A2;
int r0=A3;
int r1=A4;
int r2=A5;
int previous_position[] = {-1,-1,-1}; //Previous position of rotary switches

//Pins for buttons
int n_r0=3;
int n_r1=8;
int n_r2=9;
int n_r3=2;
int n_c0=7;  
int n_c1=10;
int n_c2=4;
int n_c3=5;
int n_c4=6;

int previous_matrix[4][5]={
  {1,1,1,1,1},
  {1,1,1,1,1},
  {1,1,1,1,1},
  {1,1,1,1,1}
};

//Messages to send via serial port when buttons is pressed
const String messages[4][5]={
  {"", "", "", "", ""},
  {"PANForward=", "PANJog_up=", "", "", ""},
  {"PANJog_left=", "PANJog_right=", "", "", ""},
  {"PANBackward=", "PANJog_down=", "", "", ""}
};

uint16_t value;

void setup(){
  pinMode(load, OUTPUT);
  pinMode(clockPulse, OUTPUT);
  pinMode(dataOut, INPUT);
  pinMode(r2, INPUT);
  pinMode(r1, INPUT);
  pinMode(r0, INPUT);
  
  pinMode(n_r0, INPUT);
  pinMode(n_r1, INPUT);
  pinMode(n_r2, INPUT);
  pinMode(n_r3, INPUT);
  pinMode(n_c0, INPUT_PULLUP);
  pinMode(n_c1, INPUT_PULLUP);
  pinMode(n_c2, INPUT_PULLUP);
  pinMode(n_c3, INPUT_PULLUP);
  pinMode(n_c4, INPUT_PULLUP); 
  
  Serial.begin(115200);
}

void loop(){
  
    pinMode(r2, OUTPUT);
    digitalWrite(r2, 0);
    readF(2);
   

   pinMode(r2, INPUT);
    pinMode(r1, OUTPUT);
    digitalWrite(r2, 1);
    digitalWrite(r1, 0);
    readF(1);
    pinMode(r1, INPUT);
    pinMode(r0, OUTPUT);
    digitalWrite(r1, 1);
    digitalWrite(r0, 0);
    readF(0);
    pinMode(r0, INPUT);
    digitalWrite(r0, 1);

    for(int i = 0; i < 4; i++){
       selectButton(i);
       delay(50);
    }
}

void selectButton(int row){
  
  switch(row){
    case 0:
      pinMode(n_r0, OUTPUT);
      digitalWrite(n_r0, LOW);
      readButton(0);
      pinMode(n_r0, INPUT);
      break;
    case 1:
      pinMode(n_r1, OUTPUT);
      digitalWrite(n_r1, LOW);
      readButton(1);
      pinMode(n_r1, INPUT);
      break;
    case 2:
      pinMode(n_r2, OUTPUT);
      digitalWrite(n_r2, LOW);
      readButton(2);
      pinMode(n_r2, INPUT);
      break;
    case 3:
      pinMode(n_r3, OUTPUT);
      digitalWrite(n_r3, LOW);
      readButton(3);
      pinMode(n_r3, INPUT);
      break;
  }
}

void readButton(int row){
    int read_n_c0 = digitalRead(n_c0);
    if(read_n_c0!=previous_matrix[row][0]){
      Serial.println(messages[row][0]+previous_matrix[row][0]);
      previous_matrix[row][0]=read_n_c0;
    }
    int read_n_c1 = digitalRead(n_c1);
    if(read_n_c1!=previous_matrix[row][1]){
      Serial.println(messages[row][1]+previous_matrix[row][1]);
      previous_matrix[row][1]=read_n_c1;
    }
    int read_n_c2 = digitalRead(n_c2);
    if(read_n_c2!=previous_matrix[row][2]){
      Serial.println(messages[row][2]+previous_matrix[row][2]);
      previous_matrix[row][2]=read_n_c2;
    }
    int read_n_c3 = digitalRead(n_c3);
    if(read_n_c3!=previous_matrix[row][3]){
      Serial.println(messages[row][3]+previous_matrix[row][3]);
      previous_matrix[row][3]=read_n_c3;
    }
   int read_n_c4 = digitalRead(n_c4);
    if(read_n_c4!=previous_matrix[row][4]){
      Serial.println(messages[row][4]+previous_matrix[row][4]);
      previous_matrix[row][4]=read_n_c4;
    }
}

void readF(int sw){
    uint16_t dataIn=0;
    int position=-1;
    digitalWrite(clockPulse, 0);
    digitalWrite(load, 0);
    delay(1);
    digitalWrite(clockPulse, 0);
  
    delay(1);
    digitalWrite(clockPulse, 1);
    delay(1);
    digitalWrite(load, 1);
    
    delay(1);
   
    for(int j=15; j>=0; j--){
      digitalWrite(clockPulse, 1);
      delay(1);
      value=digitalRead(dataOut);
      if(value){
        int a=(1 << j);
        
        dataIn=dataIn | a;
      } 
      else{
           position=j;
      }
     
       digitalWrite(clockPulse, 0); 
       delay(1);
    }
 // Serial.println(dataIn, BIN);
    if(previous_position[sw]==-1)
      previous_position[sw]=position;
    
    if(previous_position[sw] != position){
      if(sw == 1){
        if(previous_position[sw] > position){
          Serial.println("PANJog_rate_next=1");
        }else{
          Serial.println("PANJog_rate_previous=1"); 
        }
      }else if(sw == 2){
        if(previous_position[sw] > position){
          Serial.println("PANJog_feed_next=1");
        }else{
          Serial.println("PANJog_feed_previous=1"); 
        }
      }
      previous_position[sw] = position;
    }
    delay(1);

    digitalWrite(clockPulse, 1);
    
    delay(25);
}