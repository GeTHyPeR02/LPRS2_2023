int load=2;
int clockPulse=3;
int dataOut=4;
int r2=7;
int r1=6;
int r0=5;
int previous_position[] = {0,0,0};
int n_r0=8;
int n_r1=9;
int n_r2=10;
int n_r3=11;
int n_c0=A0; 
int n_c1=A1;
int n_c2=A2;
int n_c3=A3;
int n_c4=A4;

uint16_t value;



byte switchVar=0;

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
  
  Serial.begin(9600);
}

void loop(){
   /* pinMode(r2, OUTPUT);
    digitalWrite(r2, 0);
    readF(2);
   // delay(1000);
    pinMode(r2, INPUT);
    pinMode(r1, OUTPUT);
    digitalWrite(r2, 1);
    digitalWrite(r1, 0);
    readF(1);
   // delay(1000);
    pinMode(r1, INPUT);
    pinMode(r0, OUTPUT);
    digitalWrite(r1, 1);
    digitalWrite(r0, 0);
   // readF(0);
   // delay(1000);
    pinMode(r2, OUTPUT);
    digitalWrite(r0, 1);*/

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
    if(!read_n_c0){
      Serial.print("Red:");
      Serial.print(row);
      Serial.println("     Kolona:0");
    }
    int read_n_c1 = digitalRead(n_c1);
    if(!read_n_c1){
      Serial.print("Red:");
      Serial.print(row);
      Serial.println("     Kolona:1");
    }
    int read_n_c2 = digitalRead(n_c2);
    if(!read_n_c2){
      Serial.print("Red:");
      Serial.print(row);
      Serial.println("     Kolona:2");
    }
    int read_n_c3 = digitalRead(n_c3);
    if(!read_n_c3){
      Serial.print("Red:");
      Serial.print(row);
      Serial.println("     Kolona:3");
    }
   int read_n_c4 = digitalRead(n_c4);
    if(!read_n_c4){
      Serial.print("Red:");
      Serial.print(row);
      Serial.println("     Kolona:4");
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
     // Serial.print("Button position:");
     // Serial.println(j);
     // Serial.print("Button value:");
     // Serial.println(value);
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
 

    if(previous_position[sw] != position){
      if(sw == 1){
        if(previous_position[sw] < position){
          Serial.println("PANJog_rate_next=1");
        }else{
          Serial.println("PANJog_rate_previous=1"); 
        }
      }else if(sw == 2){
        if(previous_position[sw] < position){
          Serial.println("PANJog_feed_next=1");
        }else{
          Serial.println("PANJog_feed_previous=1"); 
        }
      }
      previous_position[sw] = position;
    }
    delay(1);
    digitalWrite(clockPulse, 1);
    
    delay(100);

}
