const int ledPin = 9; 
const int potPin = 0;    // Analog input pin that the potentiometer is attached to
int potValue = 0;        // value read from the pot
int valPWM = 0;

void setup() {     
  Serial.begin(9600);
  // Initialise le Pin comme une sortie | Initialize the digital pin as an output with pinMode()
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  potValue = analogRead(potPin);            // Valeur du potentiomètre | Read the pot value
  valPWM = map(potValue, 0, 1023, 0, 254);  // Remise à l'échelle entre 0 et 254 
  analogWrite(ledPin, valPWM);              // Ecrit sur la sortie PWM la valeur remise à l'échelle | Scale to the PWM range
  Serial.println(valPWM);                   // Pour connaître la valeur envoyée à la sortie PWM  | Write the PWLM value
  delay(100);
}
