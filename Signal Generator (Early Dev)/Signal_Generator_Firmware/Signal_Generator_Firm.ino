void setup()
{
  Serial.begin(9600);   // initialize serial communication at 9600 bits per second:
}

void loop() // the loop routine runs over and over again forever:
{
  float dataRead_0 = analogRead(A0);   // read the input on analog pin 0:
  dataRead_0 = (dataRead_0/1024.0)*5;
  String dataToSend_0 = String(dataRead_0);
  Serial.println(dataToSend_0);  // print out the value you read:
  delay(300);        // delay in between reads for stability

  float dataRead_1 = analogRead(A1);   // read the input on analog pin 0:
  dataRead_1 = (dataRead_1/1024.0)*5;
  String dataToSend_1 = String(dataRead_1);
  Serial.println(dataToSend_1);  // print out the value you read:
  delay(300);        // delay in between reads for stability

  float dataRead_2 = analogRead(A2);   // read the input on analog pin 0:
  dataRead_2 = (dataRead_2/1024.0)*5;
  String dataToSend_2 = String(dataRead_2);
  Serial.println(dataToSend_2);  // print out the value you read:
  delay(300);        // delay in between reads for stability

  float dataRead_3 = analogRead(A3);   // read the input on analog pin 0:
  dataRead_3 = (dataRead_3/1024.0)*5;
  String dataToSend_3 = String(dataRead_3);
  Serial.println(dataToSend_3);  // print out the value you read:
  delay(300);        // delay in between reads for stability

  float dataRead_4 = analogRead(A4);   // read the input on analog pin 0:
  dataRead_4 = (dataRead_4/1024.0)*5;
  String dataToSend_4 = String(dataRead_4);
  Serial.println(dataToSend_4);  // print out the value you read:
  delay(300);        // delay in between reads for stability
  
}
