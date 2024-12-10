//RSA encrypt/decrypt

#ifndef RSA_HPP
#include <iostream>
#include <math.h>

using namespace std;

//find GCD

class Rsa{
public:
int GCD();
int getRsa();
int a;
int h;


int GCD(int a, int h){
    int temp;
    while(1){
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
//for RSA
 //2 random prime numbers
    }
}

int getRsa(){
    double p = 3;
    double q = 7;
    double n  = p*q;
    double count;
    double totient = (p-1)*(q-1);
    
    //public key
    double RSAenc=2;
    //check co-prime, RSAenc > q-1
    while(RSAenc<totient){
        count = GCD(RSAenc, totient);
        if(count==1)
            break;
            else
            RSAenc++;
            
        }
        //private key, RSAdec = decrypt
        double RSAdec;
        //k can be anything
        double k = 2;
        RSAdec = (1 + (k*totient))/RSAenc;
        double msg = 12;
        double c = pow(msg,RSAenc);
        double m = pow(c, RSAdec);
        c = fmod(c, n);
        m = fmod(m,n);
        
        cout << "Message data: " << msg;
        cout <<"\np = " << p;
        cout <<"\nq = " << q;
        cout << "\nn = pq = " << n;
        cout << "\ntotient = " <<totient;
        cout << "\nRSAenc = " << RSAenc;
        cout << "\nRSAdec = " <<RSAdec;
        cout << "\nEncrypted data: " <<c;
        cout << "\nOriginal message: " <<m;
 
 }
};
#endif
