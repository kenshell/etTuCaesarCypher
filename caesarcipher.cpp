//Caesar cipher program:

#include <iostream>
#include <fstream>

using namespace std;

string ccencrypt(string text, int s){
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

int main(){
    string text = "MISSIONIMPOSSIBLE";
    int s = 4;
    cout << "Text: " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: "<< ccencrypt(text, s);
    return 0;
}