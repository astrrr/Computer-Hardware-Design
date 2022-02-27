int row1 = 13;
int row2 = 12;
int row3 = 11;
int row4 = 10;
int row5 = 9;
int row6 = 8;
int row7 = 7;
int row8 = 6;

int col1 = 22;
int col2 = 24;
int col3 = 26;
int col4 = 28;
int col5 = 30;
int col6 = 32;
int col7 = 34;
int col8 = 36;

int pin_col[] = {col1, col2, col3, col4, col5, col6, col7, col8};
int col_out[] = {0, 0, 0, 0, 0, 0, 0, 0};
//int col_out[8]



void pattern1(){
    //select all LED
    int col_out[] = {0, 0, 0, 0, 0, 0, 0, 0};
    digitalWrite(col1,col_out[0]);
    digitalWrite(col2,col_out[1]);
    digitalWrite(col3,col_out[2]);
    digitalWrite(col4,col_out[3]);
    digitalWrite(col5,col_out[4]);
    digitalWrite(col6,col_out[5]);
    digitalWrite(col7,col_out[6]);
    digitalWrite(col8,col_out[7]);
    
    
    for(float i=0;i<255;i+=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(20);
    }
    for(int i=255;i>0;i-=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(20);
    }  
}

void pattern2(){

 //Serial.println("press button switch ");
    //state 1
    int col_out[] = {0, 1, 1, 1, 1, 1, 1, 1};
    digitalWrite(col1,col_out[0]);
    digitalWrite(col2,col_out[1]);
    digitalWrite(col3,col_out[2]);
    digitalWrite(col4,col_out[3]);
    digitalWrite(col5,col_out[4]);
    digitalWrite(col6,col_out[5]);
    digitalWrite(col7,col_out[6]);
    digitalWrite(col8,col_out[7]);
    
    
    for(float i=0;i<255;i+=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    }
    for(int i=255;i>0;i-=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    } 

    //state 2
     int col_out2[] = {1, 0, 1, 1, 1, 1, 1, 1};
    digitalWrite(col1,col_out2[0]);
    digitalWrite(col2,col_out2[1]);
    digitalWrite(col3,col_out2[2]);
    digitalWrite(col4,col_out2[3]);
    digitalWrite(col5,col_out2[4]);
    digitalWrite(col6,col_out2[5]);
    digitalWrite(col7,col_out2[6]);
    digitalWrite(col8,col_out2[7]);
    
    
    for(float i=0;i<255;i+=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    }
    for(int i=255;i>0;i-=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    }  

    //state 3
     int col_out3[] = {1, 1, 0, 1, 1, 1, 1, 1};
    digitalWrite(col1,col_out3[0]);
    digitalWrite(col2,col_out3[1]);
    digitalWrite(col3,col_out3[2]);
    digitalWrite(col4,col_out3[3]);
    digitalWrite(col5,col_out3[4]);
    digitalWrite(col6,col_out3[5]);
    digitalWrite(col7,col_out3[6]);
    digitalWrite(col8,col_out3[7]);
    
    
    for(float i=0;i<255;i+=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    }
    for(int i=255;i>0;i-=2.55){ 
      analogWrite(row1,i);
      analogWrite(row2,i);
      analogWrite(row3,i);
      analogWrite(row4,i);
      analogWrite(row5,i);
      analogWrite(row6,i);
      analogWrite(row7,i);
      analogWrite(row8,i);
      delay(1000);
    }  
    delay(100);

    
}


void setup() {
  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
  pinMode(row4, OUTPUT);
  pinMode(row5, OUTPUT);
  pinMode(row6, OUTPUT);
  pinMode(row7, OUTPUT);
  pinMode(row8, OUTPUT);

  pinMode(col1, OUTPUT);
  pinMode(col2, OUTPUT);
  pinMode(col3, OUTPUT);
  pinMode(col4, OUTPUT);
  pinMode(col5, OUTPUT);
  pinMode(col6, OUTPUT);
  pinMode(col7, OUTPUT);
  pinMode(col8, OUTPUT);

  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), pattern2, RISING);
  
  Serial.begin(9600);
}

void loop() {
    //select all col
    
    
    pattern1();
    delay(500);
  
}
  
