// ACD_KEY constants
int LEFT = 0;
int UP = 1;
int DOWN = 2;
int RIGHT = 3;
int ENTER = 4;

//ADKeyboard Module with init val for button
int adc_key_val[5] = {50, 200, 400, 600, 800 };
int NUM_KEYS = 5;
int adc_key_in;
int key = -1;
int oldkey = -1;
int adckeyAnalog = 2;
int tempKey;

// Convert ADC value to key number
int get_key(unsigned int input)
{
  int k;
  for (k = 0; k < NUM_KEYS; k++)
  {
    if (input < adc_key_val[k])
    {
      return k;
    }
  }
  if (k >= NUM_KEYS)k = -1;  // No valid key pressed

  return k;
}

void read_keys() {
  adc_key_in = analogRead(adckeyAnalog);    // read the value from the sensor
  key = get_key(adc_key_in);  // convert into key press

  if (key != oldkey)   // if keypress is detected
  {
    delay(50);  // wait for debounce time
    adc_key_in = analogRead(adckeyAnalog);    // read the value from the sensor
    key = get_key(adc_key_in);    // convert into key press
    if (key != oldkey)
    {
      oldkey = key;
      if (key >= 0) {
        switch (key)
        {
          case 0: 
            tempKey = LEFT;
            break;
          case 1: 
            tempKey = UP;
            break;
          case 2: 
            tempKey = DOWN;
            break;
          case 3: 
            tempKey = RIGHT;
            break;
          case 4: 
            tempKey = ENTER;
            break;
        }
      }
    }
  }
  delay(100);
}
