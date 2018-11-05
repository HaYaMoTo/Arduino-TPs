const int potPin = 0;    // Analog input pin that the potentiometer is attached to
int potValue = 0;        // value read from the pot

void setup() {     
  Serial.begin(9600);
  // Initialise le Pin comme une sortie | Initialize the digital pin as an output with pinMode()
}

void loop() {
  potValue = analogRead(potPin);            // Valeur du potentiomètre | Read the pot value
  Serial.println(potValue);                   // Pour connaître la valeur envoyée à la sortie PWM  | Write the PWLM value
  delay(100);
}
