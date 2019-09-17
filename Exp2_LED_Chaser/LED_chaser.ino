void setup()       //initialise the pins as output
{
  for(int i=10;i<14;i++)
  {
    pinMode(i,OUTPUT);
  }
  
 void loop()   //loop will go on forever
 {
   for(int i=10;i<14;i++)
   {
     ALO();
     if(i!=13)
     {
       digitalWrite(i,HIGH);     //turns the lED on
       digialWrite(i+1,HIGH);
       delay(1000);              //wait for 1 second
     }
     else
     {
       digitalWrite(i,HIGH);
       digitalWrite(i-3,HIGH);
       delay(1000);
       ALO();
     }
   }
   void ALO(void)       //function to turn off all the LEDs
   {
     for(int i=0;i<14;i++)
     {
       digitalWrite(i,LOW);
     }
   }