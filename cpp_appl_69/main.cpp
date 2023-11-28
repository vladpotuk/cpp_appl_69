#include "cezar.h"
#include <iostream>

int main() {
    int key;
    std::cout << "Enter the Caesar Cipher key: ";
    std::cin >> key;

    CaesarCipher cipher(key);

    std::string inputText;
    std::cout << "Enter the text to encrypt: ";
    std::cin.ignore();  
    std::getline(std::cin, inputText);

    std::string encryptedText = cipher.encrypt(inputText);
    std::string decryptedText = cipher.decrypt(encryptedText);

    std::cout << "Original Text: " << inputText << std::endl;
    std::cout << "Encrypted Text: " << encryptedText << std::endl;
    std::cout << "Decrypted Text: " << decryptedText << std::endl;

    return 0;
}
