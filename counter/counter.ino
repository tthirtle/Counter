/*
 * Counter Program
 */
 
/*
 * Declare Sensors
 */
 
const int counterSensorPIN = 3;
const int counterSwitchPIN = 5;
const int resetButtonPIN = 7;

/*
 * Global Varibles
 */
 int counter = 0;
 int blocked = 0;
 int lastState = 0;
 int counting = 0;
 /*
  * change sensor to have built in pull up resistor
  */
  pinMode(counterSensorPIN,INPUT_PULLUP);
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // is switch for 
//read sensor value and place it into blocked varible
blocked = digitalRead(counterSensorPIN);
if (blocked == 1) //is sensor blocked
  {
    if (lastState == 0) //was there a change since the last state was read (sensor just got blocked)
    {
      counter = counter + 1;
      Serial
    }
  }
}
