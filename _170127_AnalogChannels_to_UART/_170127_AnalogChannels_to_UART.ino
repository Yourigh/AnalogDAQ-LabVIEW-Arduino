
int ledPin = 13;      // select the pin for the LED

int val = 0;  // variable to store the value coming from the sensor
bool ledstate = false;
int ADCs[] = {A0, A1, A2, A3, A4, A5, A6, A7};
char head[8][4] = {"A0:", "A1:", 
                  "A2:", "A3:", 
                  "A4:", "A5:", 
                  "A6:", "A7:"};
int i=0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin (9600);
}

void loop() {

  val = analogRead(ADCs[i]);
  Serial.print (head[i]);
  Serial.print (val);  
  Serial.print ("*");
  if (i != 7) {
    i++;
  }else{
    i = 0;
  }
    
  // toggle LED
  digitalWrite(ledPin, ledstate);
  ledstate = not ledstate;
  //delay(500);
}
