#include "caesar.h"
#include "rsa.h"
#include <iostream>

using namespace std;



int main(){

ceasar ccenc;
Rsa rsaenc;


cout << "Encryption and decryption program.";
cout << "\nChoose the encryption alogirthm you want to use: ";

ccenc.ccencrypt();
rsaenc.getRsa();

}

