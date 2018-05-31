#include <iostream>
#include <string>
#include "morse.h"
void helper() {
    std::cout << "Morse v0.2 - Translate strings to/from morse code" << std::endl;
    std::cout << "--encode | Encode a ascii string" << std::endl;
    std::cout << "--decode | Decode a CW string" << std::endl;
    std::cout << "--file   | Use morse with a file" << std::endl;
    std::cout << "--help   | Show this helper" << std::endl;
    std::cout << "--about  | About this tool" << std::endl;
}
int main(int argc, char *argv[]) {
    if(argc < 2) {
        helper();
        return 1;
    }
    std::string uinput, output;

    if(std::string(argv[1]) == "--encode") {
        std::cout << "\nInsert a text: ";
        std::getline(std::cin, uinput);
        morse encoder(uinput);
        output = encoder.ascii_to_morse();
        std::cout << "Encoded value: ";
        std::cout << output << std::endl;
    }
    else if(std::string(argv[1]) == "--decode") {
        std::cout << "\nInsert a Morse Code: ";
        std::getline(std::cin, uinput);
        morse decoder(uinput);
        output = decoder.morse_to_ascii();
        std::cout << "Decoded value: ";
        std::cout << output << std::endl;
    }
    else if(std::string(argv[1]) == "--file") {
        std::string fin, fout;

        //Get the source
        std::cout << "Insert the path of a file(Absolute or Relative): ";
        std::getline(std::cin, fin);
        //Get the destination
        std::cout << "Insert the destination file(Absolute or Relative): ";
        std::getline(std::cin, fout);
        //Pass the two objects
        morse f(fin, fout);
        std::cout << "[1] - Encoding" << std::endl;
        std::cout << "[2] - Decoding" << std::endl;
        std::cin >> uinput;

        if(std::stoi(uinput) == 1)
            f.file_converter(1);
        else if(std::stoi(uinput) == 2)
            f.file_converter(2);
        else
            std::cerr << "Not supported" << std::endl;
    }
    else if(std::string(argv[1]) == "--help") {
        helper();
    }
    else if(std::string(argv[1]) == "--about") {
        std::cout << "Morse Code Translator v0.2" << std::endl;
        std::cout << "Created by Marco 'icebit' Cetica (c) 2018" << std::endl;
        std::cout << "For any help use: " << std::string(argv[0])  << " --help" << std::endl;
    }
    else
        std::cout << "Choose something from the list!" << std::endl;
    return 0;
}
