//
// Created by marco on 5/28/18.
//
#ifndef MORSE_MORSE_H
#define MORSE_MORSE_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

class morse {
public:
    morse(std::string var);
    morse(std::string finput, std::string foutput);
    std::string morse_to_ascii();
    std::string ascii_to_morse();
    void file_converter(int operation);
    /* Operation = 1 -> ascii_to_morse
     * Operation = 2 -> morse_to_ascii */
private:
    struct MorseCode_t {
        std::vector<std::string> code;
        std::vector<std::string> word;
    };

    typedef struct MorseCode_t cw;
    std::string word;//The user input, splitted
    std::string user_input; //The user input, taken by the constructor
    std::string spacer(std::string toConvert);//used for separate each character
    std::string lower(std::string toConvert);//minimize each character
    void cat(std::string file); //Print the content of a file
    std::string finput; //Source file
    std::string foutput; //Destination file
};
#endif //MORSE_MORSE_H
