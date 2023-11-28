#ifndef CEZAR_H
#define CEZAR_H

#include <string>

class CaesarCipher {
public:
    CaesarCipher(int key);
    std::string encrypt(const std::string& text);
    std::string decrypt(const std::string& text);

private:
    int key;
};

#endif 

