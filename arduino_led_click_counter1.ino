// C++ code

//
int reading =0 ;
int counter =0;
const int red =9;
const int yellow =10;
const int green =11;
const int button = 8;

void setup()
  
{ Serial.begin(9600); 
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  reading=digitalRead(8);
  if(reading==HIGH){
    counter++;
  switch(counter){
    case 1:
    digitalWrite(red,HIGH);
    break;
    case 2:
    digitalWrite(yellow,HIGH);
    break;
    case 3:
    digitalWrite(green,HIGH);
    break;
    default:
    for(int i=9 ; i<=11 ;i++){
      digitalWrite(i,LOW);}
      counter=0;
    break;
  }}
  delay(100);
    
 Serial.println(counter);
}