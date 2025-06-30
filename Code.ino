// C++ code
//
const int pb = 3;
int state = 1;
int led[] = {6,7,8,9,10,11,12,13};
void setup()
{
    

  for(int i = 0; i <= 7; i++){
  pinMode(led[i],OUTPUT);
  }
  Serial.begin(9600);
}


void on_off(int i){
  while(state == 0){
    digitalWrite(led[i],LOW);
    digitalRead(pb);
    if(digitalRead(pb)== HIGH) {
      state = state + 1;}
    }
}

void loop()
{
  for(int i = 0; i <= 7; i++){
     if(digitalRead(pb)== HIGH) {
    state = state + 1;
       delay(500);
    if (state == 2) 
      state = 0;
    break;
  }
    on_off(i);
digitalWrite(led[i], HIGH);
delay(300); // Wait for 1000 millisecond(s
digitalWrite(led[i], LOW);
  }
  Serial.println(state);
}
















