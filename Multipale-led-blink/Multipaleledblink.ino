int leds[] = {13,12,11,10,9,8,7,6,5,4};  // difine the leds pin

/* 
A function that will gradually turn on the Led 
and another that will gradully turn off the Led  */
void Led_fading(int led_no); //  function Prototype/Declartion


void setup() //start void setup function
{
  for(int i = 0; i < 10; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}//end void setup function


void loop()//start void loop function
{ 
  //Each LED turns on for 1 second and off for 1 second for 2 times
  for(int j = 1; j <= 2; j++)
  {
    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], HIGH);
    }

    delay(1000);

    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], LOW);
    }

    delay(1000);
  }


  //Every LED is No.
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(leds[i], HIGH);
  }


  //The LEDs are turning off individually
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(leds[i], LOW);
    delay(200);
  }


  //Each LED lights up one by one from the back
  for(int i = 9; i >= 0 ; i--)
  {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }


  //Each LED turns on for 100 milisecond and off for 100 milisecond for 10 times
  for(int j = 1; j <= 10; j++)
  {
    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], HIGH);
    }

    delay(100);

    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], LOW);
    }

    delay(100);
  }


  //Each LED is gradually turning on and off.
  for(int i = 0; i < 10; i++)
  {
    Led_fading(leds[i]);// function call
    delay(2);
  }


  //Each LED will turn on and off one by one Rapidly.
  for(int j = 1; j <= 5; j++)
  {
    //Every LED is No.
    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], HIGH);
    }

    //The LEDs are turning off individually
    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], LOW);
      delay(20);
    }

    //Each LED lights up one by one from the back
    for(int i = 9; i >= 0 ; i--)
    {
      digitalWrite(leds[i], HIGH);
      delay(20);
    }
  }
 
}//end void loop function


void Led_fading(int led_no) // function Definition
{
 
  // Fade in
  for(int i = 0; i <= 1000; i++)
  {
    digitalWrite(led_no, HIGH);
    delayMicroseconds(i);
    digitalWrite(led_no, LOW);
    delayMicroseconds(1000 - i);
  }

  // Fade out
  for(int i = 1000; i >= 0; i--)
  {
    digitalWrite(led_no, HIGH);
    delayMicroseconds(i);
    digitalWrite(led_no, LOW);
    delayMicroseconds(1000 - i);
  }
}