#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Program mulai!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  Serial.println("LED MENYALA");
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  Serial.println("LED MATI");
  delay(500);
}