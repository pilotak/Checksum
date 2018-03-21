# Checksum
Checksum library for mbed

```cpp
#include "mbed.h"
#include "Checksum.h"

Checksum checksum;

int main() {
    uint8_t data[10];
    memset(data, 0xFF, sizeof(data));  // fill up with some data

    data[0] = 0;

    printf("xor: %u, maxim_crc8: %u, modbus_crc16: %u\n",
           checksum.get_xor(data, sizeof(data)),
           checksum.get_maxim(data, sizeof(data)),
           checksum.get_modbus(data, sizeof(data)));

    while (true);
}

```

