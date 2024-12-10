//Caesar cipher program:
#ifndef CAESAR_HPP
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class caesar{
    public:
    string text;
    int s;

 

string ccencrypt(string text, int s){
       //for caeasar cipher:
    string text = "MISSIONIMPOSSIBLE";
    int s = 4;
    cout << "Text: " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: "<< ccencrypt(text, s);
    return 0;
    string result = "";
    
    //traverse text
    for (int i = 0; i < text.length(); i++) {
        //apply transformation to each character, encrypt uppercase letter
        if(isupper(text[i]))
        result += char(int(text[i] + s - 65) % 26 + 65);
        //encrypt lowercase letter
        else
        result += char(int(text[i] + s - 97) % 26 + 97);
    }
    
    //return result string
    return result;
}

};
#endif
