int in1 =2;
int in2 =3;
int in3=5;
int in4=6;
char reading;
void setup() {
  
 
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
 
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
 Serial.begin(9600);

}

void loop() {
  
  if(Serial.available()>0) {
    
reading=Serial.read();
switch(reading){
case 'F': digitalWrite(in1,1);
          digitalWrite(in3,1);
          digitalWrite(in2,0);
          digitalWrite(in4,0);
break;
case 'B':digitalWrite(in1,0);
          digitalWrite(in3,0);
          digitalWrite(in2,1);
          digitalWrite(in4,1);
break;
case 'R':digitalWrite(in1,1);
          digitalWrite(in3,0);
          digitalWrite(in2,0);
          digitalWrite(in4,0);
break;
case 'L':digitalWrite(in1,0);
          digitalWrite(in3,1);
          digitalWrite(in2,0);
          digitalWrite(in4,0);
          
 break;
 
case 'S':

          digitalWrite(in1,0);
          digitalWrite(in3,0);
          digitalWrite(in2,0);
          digitalWrite(in4,0);
          

break;

}
}
}
