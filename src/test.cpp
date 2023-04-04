#include <Arduino.h>
#include <SSD1306Wire.h>

SSD1306Wire afficheur(0x3c, SDA, SCL, GEOMETRY_128_64);

void setup() {
    Serial.begin(115200);
    Serial.println("Bien joué point faible trop fort !");
    afficheur.init();
    afficheur.setFont(ArialMT_Plain_24);
    afficheur.flipScreenVertically();
    afficheur.drawString(0, 0, "Théo le mec");
    afficheur.drawString(0, 32, " trop musclé");
    afficheur.display();

}

void loop() {
    Serial.println("Bien joué point faible trop fort !");
    delay(1000);
}

