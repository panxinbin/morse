# morse - [![Build Status](https://travis-ci.org/ice-bit/morse.svg?branch=master)](https://travis-ci.org/ice-bit/morse)
A Morse Code Translator written in C++

# Features
 - Encode text to morse code;  
 - Decode morse code to text;  
 - Encode/Decode from a file;  

# Morse As A Library
Morse can be used as a tool or as a library.  
There are three method available:  
- ``` std::string ascii_to_morse(); ```  
- ``` std::string morse_to_ascii(); ```  
- ``` void file_converter(int operation); ```  

Here's an example:  
**to plain text**  
```cpp
#include <iostream>
#include <string>
#include "morse.h"

using namespace std;

int main(void) {
	string toConvert = ".... . .-.. .-.. --- .-- --- .-. .-.. -..";
	string output;

	morse m(toConvert);
	output = m.morse_to_ascii();//It prints the converted value	
	cout << "The converted string is: " << output;

	return 0;
}
```
**to morse code**  
```cpp
#include <iostream>
#include <string>
#include "morse.h"

using namespace std;

int main(void) {
	string toConvert = "hello world";
	string output;

	morse m(toConvert);
	output = m.ascii_to_morse();//It prints the converted value
	cout << "The converted string is: " << output;

	return 0;
}
```
**using a file as a source**
```cpp
#include <iostrem>
#include <string>
#include "morse.h"


using namespace std;

int main(void) {
	string file_input, file_output;
	
	cout << "Insert the path of the source file: ";
	getline(cin, file_input);
	
	cout << "Insert the destination file: ";
	getline(cin, file_output);

	morse converter(file_input, file_output); //Pass the two files to the constructor

	//File converter method OVERRIDE the content of the file, use at your own risk
	f.file_converter(1); //1 Means encoding
	f.file_converter(2); //2 Means decoding

	return 0;
}
```  
*The file converter method OVERRIDE the content of the file, pay attention when you use it*
# Building
*morse* does not use any external library, in order to compile it you have to install [cmake](https://cmake.org/download).  
It should works on all operating systems.  
# Special character supported
| Char | Morse Code |
| :--: | :--------: |
| ,    | --..--     |
| /    | -..-.      |
| .    | .-.-.-     |
| ;    | -.-.-.     |
| :    | ---...     |
| (    | -.--.      |
| )    | -.--.-     |
| @    | .--.-.     |
| =    | ...-..-    |
| '    | .----.     |
| +    | .-.-.      |
| -    | -....-     |
| _    | ..--.-     |
