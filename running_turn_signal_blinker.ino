/*
  Turn blinker running light
*/

//Turn signal preiod about 650ms (320+320ms)
#define DELAY_STEP 78
#define DELAY_LOOP (86-DELAY_STEP)

static char i;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for (i=1; i<=4; ++i) {
    digitalWrite(i, HIGH);
    pinMode(i, OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  delay(DELAY_LOOP);
  for (i=1; i<=4; ++i) {
    digitalWrite(i, LOW);
    delay(DELAY_STEP);
  }
  delay(DELAY_LOOP);
  for (i=1; i<=4; ++i) {
    digitalWrite(i, HIGH);
    delay(DELAY_STEP);
  }
}
