#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

int led_1 = 2;
int led_2 = 3;
int led_3 = 4;
int led_4 = 5;
int led_5 = 6;

bool ledsCompleto = false;

void setup() {
  lcd.init();
  lcd.backlight();
  
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
}

void loop() {
  if (!ledsCompleto) {
    controleLEDs();
    ledsCompleto = true;
  } else {
    Telemetria();
  }
  delay(100);
}

void Telemetria() {
  int velocidade = random(0, 201);
  int rpm = random(500, 8000);
  float tempPneus = random(20, 101);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("V: ");
  lcd.print(velocidade);
  lcd.print("km/h");

  lcd.setCursor(0, 1);
  lcd.print("RPM: ");
  lcd.print(rpm);
  lcd.print(" T: ");
  lcd.print(tempPneus);
  lcd.print("C");

  delay(1000);
}

void controleLEDs() {
  digitalWrite(led_1, HIGH);
  delay(1000);
  digitalWrite(led_2, HIGH);
  delay(1000);
  digitalWrite(led_3, HIGH);
  delay(1000);
  digitalWrite(led_4, HIGH);
  delay(1000);
  digitalWrite(led_5, HIGH);
  delay(1000);
  digitalWrite(led_5, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, LOW);
  delay(1000);
}