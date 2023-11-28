#include "cezar.h"

CaesarCipher::CaesarCipher(int key) : key(key) {}

std::string CaesarCipher::encrypt(const std::string& text) {
    std::string result = text;

    for (char& c : result) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + key) % 26 + base;
        }
    }

    return result;
}

std::string CaesarCipher::decrypt(const std::string& text) {
    return encrypt(text);  
}
