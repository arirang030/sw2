//delay(1000) 켜짐, delay(100)씩 반복

#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int i = 0;
void loop(){
  while(i<11) {
    i += 1;
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
  while(1){} //infinite loop
}
  

int toggle_state(int toggle) {
  toggle += 1;
  toggle %= 2;
  return toggle;
}
