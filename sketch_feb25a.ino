#define BLYNK_PRINT Serial
//paste dari blynk
#define BLYNK_TEMPLATE_ID "TMPL6EG4qspjR"
#define BLYNK_TEMPLATE_NAME "techinacaa"
#define BLYNK_AUTH_TOKEN "mH4S-7CL2DYi1UOBqIQS1t70eFkf9bcX"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "mH4S-7CL2DYi1UOBqIQS1t70eFkf9bcX";//paste dari blynk
char ssid[] = "LAB ELIN";//Nama Wifi
char pass[] = "as9739882";//password wifi
int D1 = 21;
int value;

BLYNK_WRITE(V0) {
// Fungsi ini dipanggil ketika tombol Blynk ditekan
value = param.asInt(); // Membaca nilai tombol (0 atau 1)
Serial.println(value);
}

void setup() {
Serial.begin(115200);
Blynk.begin(auth, ssid, pass);
pinMode(D1, OUTPUT); // Atur pin D1 sebagai output
}

void loop() {
Blynk.run();
digitalWrite(D1, value);
}
// Mengendalikan lampu LED sesuai dengan nilai tombol