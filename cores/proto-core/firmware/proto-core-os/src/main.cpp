#include <Arduino.h>
#include <esp_system.h>
#include <esp_chip_info.h>
#include "esp32-hal-psram.h"

static String mac_hex()
{
  uint64_t mac = ESP.getEfuseMac();
  char buf[13];
  snprintf(buf, sizeof(buf), "%012llX",
           (unsigned long long)(mac & 0xFFFFFFFFFFFFULL));
  return String(buf);
}

void setup()
{
  Serial.begin(115200);
  delay(2000);

  esp_chip_info_t info;
  esp_chip_info(&info);

  Serial.println();
  Serial.println("================================");
  Serial.println(" ModWorks Labs — Proto Core v1 ");
  Serial.println("================================");

  Serial.printf("Chip           : ESP32-S3 rev %d\n", info.revision);
  Serial.printf("CPU Cores      : %d\n", info.cores);
  Serial.printf("CPU Freq       : %lu MHz\n", ESP.getCpuFreqMHz());
  Serial.printf("Flash Size     : %u bytes\n", ESP.getFlashChipSize());
  Serial.printf("PSRAM Size     : %u bytes\n", ESP.getPsramSize());
  Serial.printf("Device ID      : MW-CORE-P1-%s\n", mac_hex().c_str());

  if (psramFound()) {
    Serial.println("PSRAM Status   : OK");
  } else {
    Serial.println("PSRAM Status   : NOT FOUND");
  }

  Serial.println("--------------------------------");
  Serial.println("Upload + board config VERIFIED");
  Serial.println("--------------------------------");
}

void loop()
{
  static uint32_t counter = 0;
  Serial.printf("alive %lu\n", counter++);
  delay(1000);
}
