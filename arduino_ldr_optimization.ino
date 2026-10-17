const int ledPin = 9;
const int ldrPin = A0;

int brightness = 50;
int step = 20;

void setup() {
  Serial.begin(9600);
}

void loop() {

  analogWrite(ledPin, brightness);
  delay(200);
  int current = analogRead(ldrPin);

  int testBrightness = brightness + step;

  if (testBrightness > 255) testBrightness = 255;
  if (testBrightness < 0) testBrightness = 0;

  analogWrite(ledPin, testBrightness);
  delay(200);
  int test = analogRead(ldrPin);

  if (test > current) {
    brightness = testBrightness;
  } else {
    step = -step;
  }

  Serial.print("Brightness: ");
  Serial.print(brightness);
  Serial.print("  Light: ");
  Serial.println(analogRead(ldrPin));

  delay(300);
}
