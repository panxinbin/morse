//
// Created by marco on 5/28/18.
//
#include "morse.h"

morse::morse(std::string var) {
    this->user_input = var;
}
morse::morse(std::string finput, std::string foutput) {
    this->finput = finput;
    this->foutput = foutput;
}
std::string morse::spacer(std::string toConvert) {
    std::string convertedString;
    for(auto x : toConvert) {
        convertedString += x;
        convertedString += ' ';
    }
    return convertedString;
}

std::string morse::lower(std::string toConvert) {
    for(auto &c : toConvert)
        c = tolower(c);
    return toConvert;
}
void morse::cat(std::string file) {
   std::ifstream out(file, std::ios::in);
   std::stringstream ss;
   ss << out.rdbuf();
   std::cout << ss.rdbuf() << std::endl;
}
std::string morse::morse_to_ascii() {
    cw alphabet;
    std::string output; //The result
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
    alphabet.code.push_back("--..--");//,
    alphabet.code.push_back("-..-.");// /
    alphabet.code.push_back(".-.-.-");//.
    alphabet.code.push_back("-.-.-.");//;
    alphabet.code.push_back("---...");//:
    alphabet.code.push_back("-.--.");//(
    alphabet.code.push_back("-.--.-");//)
    alphabet.code.push_back(".--.-.");//@
    alphabet.code.push_back("···-··-");//=
    alphabet.code.push_back(".----.");//'
    alphabet.code.push_back(".-.-.");//+
    alphabet.code.push_back("-....-");//-
    alphabet.code.push_back("..--.-");//_


    alphabet.word.push_back(",");
    alphabet.word.push_back("/");
    alphabet.word.push_back(".");
    alphabet.word.push_back(";");
    alphabet.word.push_back(":");
    alphabet.word.push_back("(");
    alphabet.word.push_back(")");
    alphabet.word.push_back("@");
    alphabet.word.push_back("=");
    alphabet.word.push_back("'");
    alphabet.word.push_back("+");
    alphabet.word.push_back("-");
    alphabet.word.push_back("_");

    std::istringstream iss(user_input);
    while(iss >> word) {
        for(int i = 0; i < alphabet.code.size(); ++i) {
            if(word == alphabet.code.at(i))
                output += alphabet.word.at(i);
        }
    }
    std::cout << '\n';
    return output;
}
std::string morse::ascii_to_morse() {
    //Add space between each character
    user_input = spacer(user_input);
    //minimize each character
    user_input = lower(user_input);
    cw alphabet;
    std::string output; //The result
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
    alphabet.code.push_back("--..--");//,
    alphabet.code.push_back("-..-.");// /
    alphabet.code.push_back(".-.-.-");//.
    alphabet.code.push_back("-.-.-.");//;
    alphabet.code.push_back("---...");//:
    alphabet.code.push_back("-.--.");//(
    alphabet.code.push_back("-.--.-");//)
    alphabet.code.push_back(".--.-.");//@
    alphabet.code.push_back("···-··-");//=
    alphabet.code.push_back(".----.");//'
    alphabet.code.push_back(".-.-.");//+
    alphabet.code.push_back("-....-");//-
    alphabet.code.push_back("..--.-");//_


    alphabet.word.push_back(",");
    alphabet.word.push_back("/");
    alphabet.word.push_back(".");
    alphabet.word.push_back(";");
    alphabet.word.push_back(":");
    alphabet.word.push_back("(");
    alphabet.word.push_back(")");
    alphabet.word.push_back("@");
    alphabet.word.push_back("=");
    alphabet.word.push_back("'");
    alphabet.word.push_back("+");
    alphabet.word.push_back("-");
    alphabet.word.push_back("_");

    std::istringstream iss(user_input);
    while(iss >> word) {
        for(int i = 0; i < alphabet.word.size(); ++i) {
            if(word == alphabet.word.at(i))
                output += alphabet.code.at(i);
        } output += ' ';
    }
    std::cout << "\n";
    return output;
}
void morse::file_converter(int operation) {
    std::string output;
    std::stringstream buffer;

    std::ifstream fin(finput, std::ios::in); //Open input file
    buffer << fin.rdbuf();//Put the content of the file into buffer
    this->user_input = buffer.str(); //Move the content of the buffer into user_input

    if(operation == 1) //The encoder
        output = ascii_to_morse();
    else if(operation == 2)//The decoder
        output = morse_to_ascii();
    else
        return;

    std::ofstream fout(foutput, std::ios::out); //Open output file
    fout << output; //Write the result(output) into fout stream
    //Close the two files
    fin.close();
    fout.close();
    //Print the result file
    std::cout << "New file content: ";
    //Print the result file
    cat(foutput);
}