#include <iostream>
using namespace std;
int main() {
    int num, numEdited, digit, sum=0;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>num) || (num<=0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    numEdited=num;
    while(numEdited>0) {
        digit=numEdited%10;
        sum+=digit;
        numEdited/=10;
    }
    cout<<"\nLa somma delle cifre del numero "<<num<<" e': "<<sum;
    return 1;
}