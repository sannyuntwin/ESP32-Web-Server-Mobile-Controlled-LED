#include <WiFi.h>

// 🔹 Change these to your WiFi
const char* ssid = "HS";
const char* password = "12345678";
WiFiServer server(80);

const int ledPin = 2; // GPIO 2 (usually built-in LED)

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  Serial.print("ESP32 IP address: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if (!client) return;

  String request = client.readStringUntil('\r');
  client.flush();

  if (request.indexOf("/ON") != -1) {
    digitalWrite(ledPin, HIGH);
  }
  if (request.indexOf("/OFF") != -1) {
    digitalWrite(ledPin, LOW);
  }

  // 🔹 Web page
  client.println("HTTP/1.1 200 OK");
  client.println("Content-type:text/html");
  client.println();
  client.println("<!DOCTYPE html><html>");
  client.println("<head><meta name='viewport' content='width=device-width, initial-scale=1'>");
  client.println("<h1>ESP32 LED Control</h1>");
  client.println("<p><a href='/ON'><button style='font-size:30px'>ON</button></a></p>");
  client.println("<p><a href='/OFF'><button style='font-size:30px'>OFF</button></a></p>");
  client.println("</html>");
  client.println();

  client.stop();
}
