#include <iostream>
using namespace std;

int main(){
    char A[1];
    cout<<"enter alphabet";
    cin>>A;
    switch(A)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': {cout<<"it is a vowel";break;}
        default:{cout<<"consonant";break;}
    }
return 0;
}