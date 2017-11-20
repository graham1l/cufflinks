#define LED_BUILTIN 1

long initTime;

// uncomment and rename to morse for "LEFT"
//char * morseL="HLHHHLHLHLLLLLLLHLLLLLLLHLHLHHHLHLLLLLLLHHHLLLLLLLLLLLLL";
// uncomment and rename to morse for "RIGHT"
char * morse="HLHHHLHLLLLLLLHLHLLLLLLLHHHLHHHLHLLLLLLLHLHLHLHLLLLLLLHHHLLLLLLLLLLLLL";

int morseLen;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
  initTime=millis();

  morseLen=strlen(morse);
}



void loop() {

    ledSet();
    delay(10);
}

void ledSet()
{
  long curr=millis()-initTime;
  int pos=(((long)(curr/250l)) % morseLen);
  if (morse[pos]=='H'){
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    digitalWrite(LED_BUILTIN, LOW);
  }
}
