#include "morse.h"

morse::morse(std::string var) {
	this->user_input = var;
}

std::string morse::spacer(std::string toConvert) {
	std::string convertedString;
	for(auto x : toConvert) {
		convertedString += x;
		convertedString += ' ';
	}
	return convertedString;
}

void morse::morse_to_ascii() {
	cw alphabet;
	//Letters
	alphabet.code.push_back(".-");//A
	alphabet.code.push_back("-...");//B
	alphabet.code.push_back("-.-.");//C
	alphabet.code.push_back("-..");//D
	alphabet.code.push_back(".");//E
	alphabet.code.push_back("..-.");//F
	alphabet.code.push_back("--.");//G
	alphabet.code.push_back("....");//H
	alphabet.code.push_back("..");//I
	alphabet.code.push_back(".---");//J
	alphabet.code.push_back("-.-");//K
	alphabet.code.push_back(".-..");//L
	alphabet.code.push_back("--");//M
	alphabet.code.push_back("-.");//N
	alphabet.code.push_back("---");//O
	alphabet.code.push_back(".--.");//P
	alphabet.code.push_back("--.-");//Q
	alphabet.code.push_back(".-.");//R
	alphabet.code.push_back("...");//S
	alphabet.code.push_back("-");//T
	alphabet.code.push_back("..-");//U
	alphabet.code.push_back("...-");//V
	alphabet.code.push_back(".--");//W
	alphabet.code.push_back("-..-");//X
	alphabet.code.push_back("-.--");//Y
	alphabet.code.push_back("--..");//Z

	alphabet.word.push_back("a");
	alphabet.word.push_back("b");
	alphabet.word.push_back("c");
	alphabet.word.push_back("d");
	alphabet.word.push_back("e");
	alphabet.word.push_back("f");
	alphabet.word.push_back("g");
	alphabet.word.push_back("h");
	alphabet.word.push_back("i");
	alphabet.word.push_back("j");
	alphabet.word.push_back("k");
	alphabet.word.push_back("l");
	alphabet.word.push_back("m");
	alphabet.word.push_back("n");
	alphabet.word.push_back("o");
	alphabet.word.push_back("p");
	alphabet.word.push_back("q");
	alphabet.word.push_back("r");
	alphabet.word.push_back("s");
	alphabet.word.push_back("t");
	alphabet.word.push_back("u");
	alphabet.word.push_back("v");
	alphabet.word.push_back("w");
	alphabet.word.push_back("x");
	alphabet.word.push_back("y");
	alphabet.word.push_back("z");


	//Numbers
	alphabet.code.push_back(".----");//1
	alphabet.code.push_back("..---");//2
	alphabet.code.push_back("...--");//3
	alphabet.code.push_back("....-");//4
	alphabet.code.push_back(".....");//5
	alphabet.code.push_back("-....");//6
	alphabet.code.push_back("--...");//7
	alphabet.code.push_back("---..");//8
	alphabet.code.push_back("----.");//9
	alphabet.code.push_back("-----");//0

	alphabet.word.push_back("1");
	alphabet.word.push_back("2");
	alphabet.word.push_back("3");
	alphabet.word.push_back("4");
	alphabet.word.push_back("5");
	alphabet.word.push_back("6");
	alphabet.word.push_back("7");
	alphabet.word.push_back("8");
	alphabet.word.push_back("9");
	alphabet.word.push_back("0");

	//Specials
	alphabet.code.push_back("  ");//Space

	alphabet.word.push_back(" ");

	std::istringstream iss(user_input);
	std::cout << "Decoded value: ";//Comment this if you use it as a library
	while(iss >> word) {
		for(int i = 0; i < alphabet.code.size(); ++i) {
			if(word == alphabet.code.at(i)) {
				std::cout << alphabet.word.at(i);
			}
		}
	}
	std::cout << "\n";
}
void morse::ascii_to_morse() {
	//Add space between each character
	user_input = spacer(user_input);	
	cw alphabet;
	//Letters
	alphabet.code.push_back(".-");//A
	alphabet.code.push_back("-...");//B
	alphabet.code.push_back("-.-.");//C
	alphabet.code.push_back("-..");//D
	alphabet.code.push_back(".");//E
	alphabet.code.push_back("..-.");//F
	alphabet.code.push_back("--.");//G
	alphabet.code.push_back("....");//H
	alphabet.code.push_back("..");//I
	alphabet.code.push_back(".---");//J
	alphabet.code.push_back("-.-");//K
	alphabet.code.push_back(".-..");//L
	alphabet.code.push_back("--");//M
	alphabet.code.push_back("-.");//N
	alphabet.code.push_back("---");//O
	alphabet.code.push_back(".--.");//P
	alphabet.code.push_back("--.-");//Q
	alphabet.code.push_back(".-.");//R
	alphabet.code.push_back("...");//S
	alphabet.code.push_back("-");//T
	alphabet.code.push_back("..-");//U
	alphabet.code.push_back("...-");//V
	alphabet.code.push_back(".--");//W
	alphabet.code.push_back("-..-");//X
	alphabet.code.push_back("-.--");//Y
	alphabet.code.push_back("--..");//Z

	alphabet.word.push_back("a");
	alphabet.word.push_back("b");
	alphabet.word.push_back("c");
	alphabet.word.push_back("d");
	alphabet.word.push_back("e");
	alphabet.word.push_back("f");
	alphabet.word.push_back("g");
	alphabet.word.push_back("h");
	alphabet.word.push_back("i");
	alphabet.word.push_back("j");
	alphabet.word.push_back("k");
	alphabet.word.push_back("l");
	alphabet.word.push_back("m");
	alphabet.word.push_back("n");
	alphabet.word.push_back("o");
	alphabet.word.push_back("p");
	alphabet.word.push_back("q");
	alphabet.word.push_back("r");
	alphabet.word.push_back("s");
	alphabet.word.push_back("t");
	alphabet.word.push_back("u");
	alphabet.word.push_back("v");
	alphabet.word.push_back("w");
	alphabet.word.push_back("x");
	alphabet.word.push_back("y");
	alphabet.word.push_back("z");


	//Numbers
	alphabet.code.push_back(".----");//1
	alphabet.code.push_back("..---");//2
	alphabet.code.push_back("...--");//3
	alphabet.code.push_back("....-");//4
	alphabet.code.push_back(".....");//5
	alphabet.code.push_back("-....");//6
	alphabet.code.push_back("--...");//7
	alphabet.code.push_back("---..");//8
	alphabet.code.push_back("----.");//9
	alphabet.code.push_back("-----");//0

	alphabet.word.push_back("1");
	alphabet.word.push_back("2");
	alphabet.word.push_back("3");
	alphabet.word.push_back("4");
	alphabet.word.push_back("5");
	alphabet.word.push_back("6");
	alphabet.word.push_back("7");
	alphabet.word.push_back("8");
	alphabet.word.push_back("9");
	alphabet.word.push_back("0");

	//Specials
	alphabet.code.push_back("  ");//Space

	alphabet.word.push_back(" ");

	std::istringstream iss(user_input);
	std::cout << "Encoded value: ";//Comment this if you use it as a library
	while(iss >> word) {
		for(int i = 0; i < alphabet.word.size(); ++i) {
			if(word == alphabet.word.at(i)) {
				std::cout << alphabet.code.at(i);
			}
		} std::cout << " ";
	}
	std::cout << "\n";
}
