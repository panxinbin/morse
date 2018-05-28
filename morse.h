#ifndef MORSE_H
#define MORSE_H
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

#endif
