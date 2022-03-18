void setup()
{
  Serial.begin(9600);   // initialize serial communication at 9600 bits per second:
}

void loop() // the loop routine runs over and over again forever:
{
  float dataRead = analogRead(A0);   // read the input on analog pin 0:
  dataRead = (dataRead/1024.0)*5;
  String dataToSend = String(dataRead);
  Serial.println(dataToSend);  // print out the value you read:
  delay(300);        // delay in between reads for stability
}
