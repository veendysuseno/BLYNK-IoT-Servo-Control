/* Program Kontrol Servo dengan Blynk */

#define BLYNK_PRINT Serial
#include &lt;ESP8266WiFi.h&gt;
#include &lt;BlynkSimpleEsp8266.h&gt;
#include &lt;Servo.h&gt;

char auth[] = "XXXX";       // masukkan kode autentikasi disini
char ssid[] = "Veendy-Suseno";    //nama wifi
char pass[] = "Admin12345";  //password

Servo servo; 
BLYNK_WRITE(V3){
servo.write(param.asInt());
}

void setup(){
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass);
    servo.attach(9);
}

void loop(){
    Blynk.run();
}
