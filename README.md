# Smartphone Controlled LED using ESP32 📱💡

This project demonstrates how to control an LED wirelessly using an ESP32 development board and a smartphone over a Wi-Fi network. It's a perfect entry-level project for anyone interested in **Internet of Things (IoT)** and **Home Automation**.

## 🚀 Features
* **Wireless Control:** Turn LEDs on/off via a mobile app or web dashboard.
* **Low Latency:** Instant response between phone and hardware.
* **Scalable:** The same logic can be applied to control high-voltage home appliances using relays.

## 🛠️ Hardware Requirements
* **ESP32** Dev Kit V1
* **LED** (5mm)
* **Resistor** (220Ω)
* **Breadboard** & Jumper Wires

## 🔌 Circuit Connection
| ESP32 Pin | Component |
| :--- | :--- |
| GPIO 2 | LED Anode (+) |
| GND | LED Cathode (-) via Resistor |



## 💻 Software Setup
1. Install **Arduino IDE**.
2. Install the **ESP32 Board Manager**.
3. (Optional) Install the **Blynk Library** if using the Blynk app.
4. Clone this repository and upload the `.ino` file to your board.

## 📝 How to Use
1. Open the code in Arduino IDE.
2. Replace `YOUR_SSID` and `YOUR_PASSWORD` with your Wi-Fi credentials.
3. Upload the code.
4. Open the Serial Monitor to get the IP address (if using Web Server).
5. Open your mobile app/browser and start controlling!

## 📺 Video Tutorial
Check out the full build video on YouTube: [https://youtu.be/7LOTXO4Qqg0]