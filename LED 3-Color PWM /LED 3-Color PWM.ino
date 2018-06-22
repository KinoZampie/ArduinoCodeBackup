int lightUp = 0;
int lightDown = 1023;
int mode = 1;
int red = 9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  analogWrite(red,lightDown);
//  Serial.begin(9600);
}

void loop() {
//  Serial.print("LightDown: ");
//  Serial.print(lightDown);
//  Serial.print("\tLightUp: ");
//  Serial.print(lightUp);
//  Serial.print("\tMode: ");
//  Serial.print(mode);
//  Serial.print("\n");
  
  if (mode == 6){
    analogWrite(blue,lightDown/4);
    lightDown = lightDown-1;
    if(lightDown == 0){
      lightDown =1023;
      mode = 1;
    }
  }

    if (mode == 5){
    analogWrite(red,lightUp/4);
    lightUp = lightUp+1;
    if(lightUp == 1023){
      lightUp = 0;
      mode = mode + 1;
    }
  }

  if (mode == 4){
    analogWrite(green,lightDown/4);
    lightDown = lightDown-1;
    if(lightDown == 0){
      lightDown =1023;
      mode = mode + 1;
    }
  }
  
    if (mode == 3){
    analogWrite(blue,lightUp/4);
    lightUp = lightUp+1;
    if(lightUp == 1023){
      lightUp = 0;
      mode = mode + 1;
    }
  }
  
  if (mode == 2){
    analogWrite(red,lightDown/4);
    lightDown = lightDown-1;
    if(lightDown == 0){
      lightDown =1023;
      mode = mode + 1;
    }
  }


    if (mode == 1){
    analogWrite(green,lightUp/4);
    lightUp = lightUp+1;
    if(lightUp == 1023){
      lightUp = 0;
      mode = 2;
    }
  }
  delay(1);
//  analogWrite(9,lightUp);
//  lightUp = lightUp+1;
//  if(lightUp == 1023){
//    lightUp = 0;
//  };
//  delay(1);
}
