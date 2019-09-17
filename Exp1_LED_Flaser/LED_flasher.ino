void setup()
{
  //initialise the pins as output
  pinMode(13, OUTPUT);
}
// loop will run again and again forever
void loop()
{
  digitalWrite(13, HIGH);
  //turns the LED on
  delay(1000); // Wait for 1 second
  digitalWrite(13, LOW);
  //turns the LED off
  delay(1000); // Wait for 1 second
}