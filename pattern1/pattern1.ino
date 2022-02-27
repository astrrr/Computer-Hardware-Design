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
  Serial.begin(9600);
}

void loop() {
  for(int j=0; j<8;j++){
    digitalWrite(pin_col[j],HIGH);
    for(int i=1;i<255;i++){ 
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
    for(int i=255;i>1;i--){ 
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
    delay(500);
  }
}
  
