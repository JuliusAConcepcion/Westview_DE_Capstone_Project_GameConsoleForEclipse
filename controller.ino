const int LRpin = A0;
const int UDpin = A1;

const int B1pin = 2;
const int B2pin = 3;
const int B3pin = 4;
const int B4pin = 5;

int LR;
int UD;


int LR_nut;
int UD_nut;
const int dz = 10;


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(2,INPUT);

    LR_nut = analogRead(LRpin);
    UD_nut = analogRead(UDpin);
}


void loop() {
  // put your main code here, to run repeatedly:
    LR = analogRead(LRpin);
    UD = analogRead(UDpin);

    // Serial.println(digitalRead(10));
    

    if(digitalRead(B1pin) == 0){
      Serial.println("b1");
    }
    if(digitalRead(B2pin) == 0){
      Serial.println("b2");
    }
    if(digitalRead(B3pin) == 0){
      Serial.println("b3");
    }
    if(digitalRead(B4pin) == 0){
      Serial.println("b4");
    }
    
   
    if(UD>=UD_nut+dz){  //up
      Serial.println("up");
    }  
    else if(UD<=UD_nut-dz){   //down
      Serial.println("down");
    }
    else {
     
    }


     
    if(LR>=LR_nut+dz){  //left
       Serial.println("left");
    }  
    else if(LR<=LR_nut-dz){   //right
      Serial.println("right");
    }
    else{
      

    }


}