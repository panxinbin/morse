# morse
A Morse Code Translator written in C++

# Features
 - Encode text to morse code;  
 - Decode morse code to text;  

# Morse As A Library
Morse can be used as a tool or as a library to be used in other projects.  
For now there are two *api call*:  
- ``` std::string ascii_to_morse(); ```  
- ``` std::string morse_to_ascii(); ```  

Here's an example on how it works:  
**to plain text**  
```cpp
#include <iostream>
#include <string>
#include "morse.h"

using namespace std;

int main(void) {
	string toConvert = ".... . .-.. .-.. --- .-- --- .-. .-.. -..";

	morse m(toConvert);
	m.morse_to_ascii();//It prints the converted value	

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

	morse m(toConvert);
	m.ascii_to_morse();//It prints the converted value

	return 0;
}
```

# TODO
1. Make morse available as a library  
2. Add some new character  
3. Add spaces between morse codes and ascii values

# Compilation
*morse* does not use any external library, in order to compile it you have to install [cmake](https://cmake.org/download).  
It should works on all operating systems
