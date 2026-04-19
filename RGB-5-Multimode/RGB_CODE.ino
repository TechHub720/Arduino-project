int RGB_leds[5][3]= {                                                                                        
//        0         1        2                                                                                        
/*0*/   {/*R*/13, /*B*/12, /*G*/11},  // 1st RGB LED                                                                                        
/*1*/   {/*R*/10, /*B*/9, /*G*/8},    // 2nd RGB LED                                                                                        
/*2*/   {/*R*/7, /*B*/6, /*G*/5},     // 3rd RGB LED                                                                                        
/*3*/   {/*R*/4, /*B*/3, /*G*/2},     // 4rd RGB LED                                                                                        
/*4*/   {/*R*/A0, /*B*/A1, /*G*/A2}  // 5rd RGB LED                                                                                        
};                                                                   
                                                                   
// difine leds pin                                                                                        
void setup()                                                                                        
{                                                                   
  for(int i = 0; i < 5; i++)                                                                                        
  {                                                                   
    for(int j = 0; j < 3; j++)                                                                                        
    {                                                                   
      pinMode(RGB_leds[i][j], OUTPUT);                                                                                        
    }                                                                   
  }                                                                   
}                                                                   
                                                                   
void loop()                                                                                        
{                                                                    
  rgb_pwm(2, 0);                                                                                        
  rgb_pwm(2, 1);                                                                                        
  rgb_pwm(2, 2);                                                                                        
  cycle(150, 2);                                                                                        
  for(int i = 1; i <= 3; i++)                                                                                        
  {                                                                   
    pingpongled(i, 0); // RED                                                                                        
    pingpongled(i, 2); // GREEN                                                                                        
    pingpongled(i, 1); // BLUE                                                                                        
  }                                                                   
                                                                   
  for(int i = 1; i <= 5; i++)                                                                                        
  {                                                                   
    pingpongled(1, 0); // RED                                                                                        
    pingpongled(1, 2); // GREEN                                                                                        
    pingpongled(1, 1); // BLUE                                                                                        
  }                                                                   
  R_G_HIGH(1000);                                                                                        
  R_B_HIGH(1000);                                                                                        
  G_B_HIGH(1000);                                                                                        
  R_G_B_HIGH(1000);                                                                                        
                                                                   
                                                                   
                                                                     
}                                                                   
                                                                   
                                                                   
void rgb_pwm(int repeat, int colour)                                                                                        
{                                                                    
  int step = 5;                                                                                        
  for(int i = 1; i <= repeat; i++)                                                                                        
  {                                                                   
    //Fade in                                                                                         
    for(int j = 0; j <= 1000; j += step)                                                                                        
    {                                                                   
      // Code to turn on the RGB LED                                                                                        
      digitalWrite(RGB_leds[0][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[1][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[2][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[3][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[4][colour], HIGH);                                                                                        
                                                                   
      delayMicroseconds(j);                                                                                        
                                                                     
      // Code to turn off the RGB LED                                                                                        
      digitalWrite(RGB_leds[0][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[1][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[2][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[3][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[4][colour], LOW);                                                                                        
                                                                   
      delayMicroseconds(1000 - j);                                                                                        
                                                                   
      delayMicroseconds(100);                                                                                        
    }                                                                   
                                                                   
    //Fade OUT                                                                                         
    for(int j = 1000; j >= 0; j -= step)                                                                                        
    {                                                                   
      // Code to turn on the RGB LED                                                                                        
      digitalWrite(RGB_leds[0][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[1][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[2][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[3][colour], HIGH);                                                                                        
      digitalWrite(RGB_leds[4][colour], HIGH);                                                                                        
                                                                                               
      delayMicroseconds(j);                                                                                        
                                                                     
      // Code to turn off the RGB LED                                                                                        
      digitalWrite(RGB_leds[0][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[1][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[2][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[3][colour], LOW);                                                                                        
      digitalWrite(RGB_leds[4][colour], LOW);                                                                                        
                                                                   
      delayMicroseconds(1000 - j);                                                                                        
                                                                   
      delayMicroseconds(100);                                                                                        
    }                                                                   
                                                                   
  }                                                                   
}                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
void R_G_HIGH(int time)                                                                                        
{                                                                   
  // Code to turn on the "RED"  RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][0], HIGH);                                                                                        
                                                                       
  // Code to turn on the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][2], HIGH);                                                                                        
                                                                   
  delay(time);                                                                                        
                                                                   
  // Code to turn off the "RED"  RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], LOW);                                                                                        
  digitalWrite(RGB_leds[1][0], LOW);                                                                                        
  digitalWrite(RGB_leds[2][0], LOW);                                                                                        
  digitalWrite(RGB_leds[3][0], LOW);                                                                                        
  digitalWrite(RGB_leds[4][0], LOW);                                                                                        
                                                                       
  // Code to turn off the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], LOW);                                                                                        
  digitalWrite(RGB_leds[1][2], LOW);                                                                                        
  digitalWrite(RGB_leds[2][2], LOW);                                                                                        
  digitalWrite(RGB_leds[3][2], LOW);                                                                                        
  digitalWrite(RGB_leds[4][2], LOW);                                                                                        
}                                                                   
                                                                   
void R_B_HIGH(int time)                                                                                        
{                                                                   
  // Code to turn on the "RED" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][0], HIGH);                                                                                        
                                                                       
  // Code to turn on the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][1], HIGH);                                                                                        
                                                                   
  delay(time);                                                                                        
                                                                   
  // Code to turn off the "RED" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], LOW);                                                                                        
  digitalWrite(RGB_leds[1][0], LOW);                                                                                        
  digitalWrite(RGB_leds[2][0], LOW);                                                                                        
  digitalWrite(RGB_leds[3][0], LOW);                                                                                        
  digitalWrite(RGB_leds[4][0], LOW);                                                                                        
                                                                       
  // Code to turn off the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], LOW);                                                                                        
  digitalWrite(RGB_leds[1][1], LOW);                                                                                        
  digitalWrite(RGB_leds[2][1], LOW);                                                                                        
  digitalWrite(RGB_leds[3][1], LOW);                                                                                        
  digitalWrite(RGB_leds[4][1], LOW);                                                                                        
                                                                   
}                                                                   
                                                                   
void G_B_HIGH(int time)                                                                                        
{                                                                   
  // Code to turn on the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][2], HIGH);                                                                                        
                                                                   
  // Code to turn on the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][1], HIGH);                                                                                        
                                                                   
  delay(time);                                                                                        
                                                                   
  // Code to turn off the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], LOW);                                                                                        
  digitalWrite(RGB_leds[1][2], LOW);                                                                                        
  digitalWrite(RGB_leds[2][2], LOW);                                                                                        
  digitalWrite(RGB_leds[3][2], LOW);                                                                                        
  digitalWrite(RGB_leds[4][2], LOW);                                                                                        
                                                                   
  // Code to turn off the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], LOW);                                                                                        
  digitalWrite(RGB_leds[1][1], LOW);                                                                                        
  digitalWrite(RGB_leds[2][1], LOW);                                                                                        
  digitalWrite(RGB_leds[3][1], LOW);                                                                                        
  digitalWrite(RGB_leds[4][1], LOW);                                                                                        
}                                                                   
                                                                   
void R_G_B_HIGH(int time)                                                                                        
{                                                                   
                                                                    
  // Code to turn on the "RED" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][0], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][0], HIGH);                                                                                        
  // Code to turn on the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][2], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][2], HIGH);                                                                                        
  // Code to turn on the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[1][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[2][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[3][1], HIGH);                                                                                        
  digitalWrite(RGB_leds[4][1], HIGH);                                                                                        
                                                                     
  delay(time);                                                                                        
                                                                   
  // Code to turn off the "RED" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][0], LOW);                                                                                        
  digitalWrite(RGB_leds[1][0], LOW);                                                                                        
  digitalWrite(RGB_leds[2][0], LOW);                                                                                        
  digitalWrite(RGB_leds[3][0], LOW);                                                                                        
  digitalWrite(RGB_leds[4][0], LOW);                                                                                        
  // Code to turn off the "GREEN" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][2], LOW);                                                                                        
  digitalWrite(RGB_leds[1][2], LOW);                                                                                        
  digitalWrite(RGB_leds[2][2], LOW);                                                                                        
  digitalWrite(RGB_leds[3][2], LOW);                                                                                        
  digitalWrite(RGB_leds[4][2], LOW);                                                                                        
  // Code to turn off the "BLUE" RGB LED                                                                                        
  digitalWrite(RGB_leds[0][1], LOW);                                                                                        
  digitalWrite(RGB_leds[1][1], LOW);                                                                                        
  digitalWrite(RGB_leds[2][1], LOW);                                                                                        
  digitalWrite(RGB_leds[3][1], LOW);                                                                                        
  digitalWrite(RGB_leds[4][1], LOW);                                                                                        
                                                                       
}                                                                   
                                                                   
void pingpongled(int repeat, int colour)                                                                                        
{                                                                   
  for(int i = 1; i <= repeat; i++)                                                                                        
  {                                                                   
    for(int j = 0; j < 5; j++)                                                                                        
    {                                                                   
      digitalWrite(RGB_leds[j][colour], HIGH);                                                                                        
      delay(100);                                                                                        
    }                                                                   
    for(int k = 4; k >= 0; k--)                                                                                        
    {                                                                   
      digitalWrite(RGB_leds[k][colour], LOW);                                                                                        
      delay(100);                                                                                        
    }                                                                   
  }                                                                   
}                                                                   
                                                                   
void cycle(int time, int repeat)                                                                                        
{                                                                   
  for(int i =0; i <= repeat; i++)                                                                                        
  {                                                                   
    // Code to turn on the "RED" channel of each RGB LED                                                                                        
    digitalWrite(RGB_leds[0][0], HIGH);                                                                                        
    digitalWrite(RGB_leds[1][0], HIGH);                                                                                        
    digitalWrite(RGB_leds[2][0], HIGH);                                                                                        
    digitalWrite(RGB_leds[3][0], HIGH);                                                                                        
    digitalWrite(RGB_leds[4][0], HIGH);                                                                                        
    delay(time);                                                                                        
    //                                                                                         
    // Code to turn off the "RED" channel of each RGB LED                                                                                        
    digitalWrite(RGB_leds[0][0], LOW);                                                                                        
    digitalWrite(RGB_leds[1][0], LOW);                                                                                        
    digitalWrite(RGB_leds[2][0], LOW);                                                                                        
    digitalWrite(RGB_leds[3][0], LOW);                                                                                        
    digitalWrite(RGB_leds[4][0], LOW);                                                                                        
                                                                   
    delay(5);                                                                                        
                                                                   
    // Code to turn on the "GREEN" channel of each RGB LED                                                                                        
    digitalWrite(RGB_leds[0][2], HIGH);                                                                                        
    digitalWrite(RGB_leds[1][2], HIGH);                                                                                        
    digitalWrite(RGB_leds[2][2], HIGH);                                                                                        
    digitalWrite(RGB_leds[3][2], HIGH);                                                                                        
    digitalWrite(RGB_leds[4][2], HIGH);
    delay(time);
    //
    // Code to turn off the "GREEN" channel of each RGB LED
    digitalWrite(RGB_leds[0][2], LOW);
    digitalWrite(RGB_leds[1][2], LOW);
    digitalWrite(RGB_leds[2][2], LOW);
    digitalWrite(RGB_leds[3][2], LOW);
    digitalWrite(RGB_leds[4][2], LOW);
  
    delay(5);

    // Code to turn on the "BLUE" channel of each RGB LED
    digitalWrite(RGB_leds[0][1], HIGH);
    digitalWrite(RGB_leds[1][1], HIGH);
    digitalWrite(RGB_leds[2][1], HIGH);
    digitalWrite(RGB_leds[3][1], HIGH);
    digitalWrite(RGB_leds[4][1], HIGH);
    delay(time);
    //
    // Code to turn off the "BLUE" channel of each RGB LED
    digitalWrite(RGB_leds[0][1], LOW); 
    digitalWrite(RGB_leds[1][1], LOW); 
    digitalWrite(RGB_leds[2][1], LOW); 
    digitalWrite(RGB_leds[3][1], LOW); 
    digitalWrite(RGB_leds[4][1], LOW); 
     
    delay(5); 
  } 
}
