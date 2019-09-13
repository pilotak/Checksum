/*
MIT License

Copyright (c) 2018 Pavel Slama

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef CHECKSUM_H
#define CHECKSUM_H

#include "mbed.h"

class Checksum {
  public:
    Checksum();
    uint16_t get_modbus(const char * data, size_t len);
    bool is_valid_modbus(const char * data, size_t len);
    char get_xor(const char * data, size_t len);
    bool is_valid_xor(const char * data, size_t len);
    char get_maxim(const char * data, size_t len);
    bool is_valid_maxim(const char * data, size_t len);
    char get_twos_compl(const char * data, size_t len);
    bool is_valid_twos_compl(const char * data, size_t len);

  private:
    uint32_t _crc32;
};

#endif  // CHECKSUM_H
