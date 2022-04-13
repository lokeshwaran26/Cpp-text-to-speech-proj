#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    string words;
    cout << "Enter the text to speak:\n";
    getline(cin,words);
    string phrase = words;
    string command = "espeak -ven-us+f4 -s170  \""+phrase+"\""; //use the -v option to specifiy a voice.
    const char* charCommand = command.c_str();
    system(charCommand);


}
