#define buttonPin 8
#define led1Pin 12
#define potPin A5
#define led2Pin 11
bool button;
int pot;
int led;
void setup(){
 pinMode(led1Pin,OUTPUT);
 pinMode(led2Pin,OUTPUT);
 pinMode(buttonPin,INPUT);
 pinMode(potPin,INPUT);
}
void loop(){
 button = digitalRead(buttonPin);
 if(button  == 0){
 digitalWrite(led1Pin,HIGH);
 }else{
 digitalWrite(led1Pin,LOW);
 }
 
 pot = analogRead(potPin);
 led = map(pot,0,1023,0,255);
 analogWrite(led2Pin,led);
 
 delay(200);
}
