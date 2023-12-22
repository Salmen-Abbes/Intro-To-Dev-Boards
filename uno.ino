// Arduino Uno Code: Print "Hello World" to Serial Monitor and Blink Built-in LED

void setup() {
  // Set the built-in LED pin (pin 13) as an output
  pinMode(13, OUTPUT);
  
  // Begin Serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Print "Hello World" to Serial Monitor
  Serial.println("Hello World");
  
  // Blink the built-in LED
  digitalWrite(13, HIGH);   // Turn on the LED
  delay(1000);              // Wait for 1 second
  digitalWrite(13, LOW);    // Turn off the LED
  delay(1000);              // Wait for 1 second
}
