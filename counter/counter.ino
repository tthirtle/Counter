/*
 * Counter Program
 */
 
/*
 * Declare Sensors
 */
 
const int counterSensorPIN = 3;
// const int counterSwitchPIN = 5;
// const int resetButtonPIN = 7;

/*
 * Global Varibles
 */
 int counter = 0;
 int blocked = 0;
 int lastState = 0;
 int counting = 0;
 
/*
 * Activate 1 Sheeld Library
 */
 #include <OneSheeld.h>
 #define CUSTOM_SETTINGS
 #define INCLUDE_TERMINAL_SHIELD

void reset()
{
      Serial.println(counter);
      counter = 0;
}
  
void setup() {
 /*
  * change sensor to have built in pull up resistor
  */  
    pinMode(counterSensorPIN,INPUT_PULLUP);
    // Change switch to have a built in pull up resistor
   // pinMode(counterSwitchPIN,INPUT_PULLUP);
  // put your setup code here, to run once:
  // Serial.begin(9600);
  OneSheeld.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the switch
  // counting = digitalRead(counterSwitchPIN);
  // if switch is off reset counter to 0.
  // if (counting == 0)
    // {
    //   reset();
    // } 
    //if switch is on then turn on the counter
  // if (counting == 1)
  // {
    //read sensor value and place it into blocked varible
    blocked = digitalRead(counterSensorPIN);
    if (blocked == 1) //is sensor blocked
      {
      if (lastState == 0) //was there a change since the last state was read (sensor just got blocked)
        {
          counter = counter + 1;
          Terminal.println(counter);
        }
      }
  // }
}
