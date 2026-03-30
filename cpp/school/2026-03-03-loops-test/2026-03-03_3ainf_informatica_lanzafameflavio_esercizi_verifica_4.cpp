#include <iostream>
using namespace std;
int main() {
    int num, numEdited, digit, numInvert=0;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>num) || (num<=0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    numEdited=num;
    while(numEdited>0) {
        digit=numEdited%10;
        numEdited/=10;
        numInvert=numInvert*10+digit;
    }
    cout<<"\nIl numero "<<num;
    if(num==numInvert) {
        cout<<" e' palindromo.";
    } else {
        cout<<" non e' palindromo.";
    }
    return 0;
}