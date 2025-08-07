
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "index.h"

const char* ssid = "kontrol lampu";
const char* password = "12345678";
IPAddress ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

ESP8266WebServer server(80);


const int pinLed = LED_BUILTIN;
const int motor = 3;

void HOMEPAGE() {
  String page = FPSTR(MAIN_PAGE);
  server.send(200, "text/html", page);
}
void ABOUT() {
  server.send(200, "text/plain", "ini hanya gabut");
}
void onled() {
  String page = FPSTR(MAIN_PAGE);
  digitalWrite(pinLed,LOW);
  server.send(200, "text/html", page);
}
void offled(){
  String page = FPSTR(MAIN_PAGE);
  digitalWrite(pinLed,HIGH);
  server.send(200, "text/html", page);
}
void ondinamo() {
  String page = FPSTR(MAIN_PAGE);
  digitalWrite(motor,HIGH);
  server.send(200, "text/html", page);
}
void offdinamo(){
  String page = FPSTR(MAIN_PAGE);
  digitalWrite(motor,LOW);
  server.send(200, "text/html", page);
}
void setup() {
  // put your setup code here, to run once:
pinMode(pinLed,OUTPUT);
pinMode(motor,OUTPUT);

Serial.begin(115200);
delay(10);
//mengatur WiFi
Serial.println();
Serial.print("sedang proses...");

WiFi.mode(WIFI_AP);
WiFi.softAPConfig(ip,gateway,subnet);
WiFi.softAP(ssid, password);
//start server
server.begin();
Serial.println("server dijalankan");
//menampilkan ip
Serial.println(WiFi.softAPIP());

server.on("/" , HOMEPAGE);
server.on("/about" , ABOUT);
server.on("/on", onled);
server.on("/off", offled);
server.on("/dinamo.on", ondinamo);
server.on("/dinamo.off", offdinamo);

server.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
server.handleClient();
}
