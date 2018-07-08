#include <DS3231.h>
#include <Wire.h>
 
DS3231 Clock;
 
 
byte year, month, date, DoW, hour, minute, second;
 
void setup() {
  // Se inicial la interfaz I2c
  Wire.begin();
  // Se inicia la Comunicación Serial
  Serial.begin(9600);
}
 
void loop() {
 
  delay(1000);
  //Se rescata la información
  Clock.getTime(year, month, date, DoW, hour, minute, second);
  //Se imprime
  Serial.print(date, DEC);
  Serial.print("/");
  Serial.print(month, DEC);
  Serial.print("/");
  Serial.print(year, DEC);
  Serial.print("  ");
  Serial.print(hour, DEC);
  Serial.print(":");
  Serial.print(minute, DEC);
  Serial.print(":");
  Serial.println(second, DEC);
}
