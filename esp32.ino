// ESP32 Code: Print "Hello World" to Serial Monitor and Blink Built-in LED

const int ledPin = 2;  // Pin number for the built-in LED on ESP32

void setup() {
  // Set the built-in LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Begin Serial communication at 115200 baud rate
  Serial.begin(115200);
}

void loop() {
  // Print "Hello World" to Serial Monitor
  Serial.println("Hello World");
  
  // Blink the built-in LED
  digitalWrite(ledPin, HIGH);   // Turn on the LED
  delay(1000);                   // Wait for 1 second
  digitalWrite(ledPin, LOW);    // Turn off the LED
  delay(1000);                   // Wait for 1 second
}
