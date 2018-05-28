#include <iostream>
#include <string>
#include "morse.h"
void helper() {
    std::cout << "Morse v0.1 - Translate strings to/from morse code" << std::endl;
    std::cout << "--encode | Encode a ascii string" << std::endl;
    std::cout << "--decode | Decode a CW string" << std::endl;
    std::cout << "--help   | Show this helper" << std::endl;
    std::cout << "--about  | Print infos" << std::endl;
}
int main(int argc, char *argv[]) {
    if(argc < 2) {
        helper();
        return 1;
    }
    std::string uinput;
    int choice;

    if(std::string(argv[1]) == "--encode") {
        std::cout << "\nInsert a text: ";
        std::getline(std::cin, uinput);
        morse encoder(uinput);
        encoder.ascii_to_morse();
    }
    else if(std::string(argv[1]) == "--decode") {
        std::cout << "\nInsert a Morse Code: ";
        std::getline(std::cin, uinput);
        morse decoder(uinput);
        decoder.morse_to_ascii();
    }
    else if(std::string(argv[1]) == "--help") {
        helper();
    }
    else if(std::string(argv[1]) == "--about") {
        std::cout << "Morse Code Translater v0.1" << std::endl;
        std::cout << "Created by Marco 'icebit' Cetica (c) 2018" << std::endl;
        std::cout << "For any help use: " << std::string(argv[0])  << " --help" << std::endl;
    }
    else
        std::cout << "Choose something from the list!" << std::endl;

    return 0;
}
