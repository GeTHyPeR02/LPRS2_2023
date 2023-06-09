int load=2;
int clockPulse=7;
int dataOut=4;

int value;

byte switchVar=0;

void setup(){
  pinMode(load, OUTPUT);
  pinMode(clockPulse, OUTPUT);
  pinMode(dataOut, INPUT);

  Serial.begin(9600);
}

void loop(){
    byte dataIn=0;
    digitalWrite(load, 1);
    delay(100);
    digitalWrite(load, 0);
    digitalWrite(clockPulse, 0);
    delay(100);
    digitalWrite(clockPulse, 1);

    for(int j=7; j>=0; j--){
      value=digitalRead(dataOut);
      Serial.print("Button position:");
      Serial.println(j);
      Serial.print("Button value:");
      Serial.println(value);
      if(value){
        int a=(1 << j);
        
        dataIn=dataIn | a;
      }     
    }
    digitalWrite(clockPulse, 0);
  
    Serial.print("dataIN Bin:");
    Serial.println(dataIn, BIN);
    Serial.println();
    delay(100);
    digitalWrite(clockPulse, 1);
    
    delay(2000);


  
}
