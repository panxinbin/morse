//
// Created by marco on 5/28/18.
//
/* TODO:
 * Make morse available as a library
 * Add some new character
 * Add spaces between morse codes and ascii values
 */
#ifndef MORSE_MORSE_H
#define MORSE_MORSE_H
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class morse {

public:
    morse(std::string var);
    void morse_to_ascii();
    void ascii_to_morse();

private:
    struct MorseCode_t {
        std::vector<std::string> code;
        std::vector<std::string> word;
    };
    typedef struct MorseCode_t cw;
    std::string word;//The user input, splitted
    std::string user_input;
    std::string spacer(std::string toConvert);

};
#endif //MORSE_MORSE_H
