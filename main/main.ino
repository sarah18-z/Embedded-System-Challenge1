//pinout
#define boutton 3
#define vert 4
#define orange 5
#define rouge 6

//variables
int stat=0;
int old=0;
int bouttonstat=0;


// functions
void bouttonpressed();
void ledswitcher();

void setup() {
  // put your setup code here, to run once:
  pinMode(boutton, INPUT_PULLUP);
  pinMode(vert, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(rouge, OUTPUT);
  ////////
  digitalWrite(vert, LOW);
  digitalWrite(orange, LOW);
  digitalWrite(rouge, LOW); 
 

}

void loop() {
  // put your main code here, to run repeatedly:

  bouttonpressed();
  ledswitcher();
}
  
  
  
void bouttonpressed(){
  bouttonstat = digitalRead(boutton);
  if(bouttonstat == 1){
    delay(50);
    bouttonstat = digitalRead(boutton);
    if(bouttonstat == 0){
      stat = old + 1;
    }}
    else {
    delay(100);
  }
  }
void ledswitcher(){
   switch(stat){
      case 1:
      digitalWrite(rouge,LOW);
      digitalWrite(orange,LOW);
      digitalWrite(vert,HIGH); 
      old = stat;
      break;
      case 2:
      digitalWrite(rouge,LOW);
      digitalWrite(orange,HIGH);
      digitalWrite(vert,LOW); 
      old = stat;
      break;
      case 3:
      digitalWrite(rouge,HIGH);
      digitalWrite(orange,LOW);
      digitalWrite(vert,LOW); 
      old = stat;
      break;
      default:
      digitalWrite(rouge,LOW);
      digitalWrite(orange,LOW);
      digitalWrite(vert,HIGH);  
      old = 1;
      break;

    }
}
 