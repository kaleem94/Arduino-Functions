int AnalogInput=A0; //put your Analog Input pin no here


void setup() {
  pinMode(AnalogInput,INPUT); //Initialise pin AnalogInput as input

  Serial.begin(9600); //Initialise serial communication at 9600 baud
}

int analogValue;
void loop() {
  analogValue=analogRead(AnalogInput);  //Read analog value from AnalogInput pin and save it to AnalogInput
  Serial.println(analogValue);  //pint the value on Serial 
}
