#include <iostream>
using namespace std;
int main() {
    int numberToCheck, sumDivisors=0;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>numberToCheck) || (numberToCheck<=0)) {
        cout<<"\nErrore: numero non valido.";
        return 1;
    }
    for(int divisor=1; divisor<numberToCheck; divisor++) {
        if(numberToCheck%divisor==0) {
            sumDivisors+=divisor;
        }
    }
    cout<<"\nLa somma dei divisori di "<<numberToCheck<<" e' "<<sumDivisors<<".\n";
    if(numberToCheck==sumDivisors) {
        cout<<"Il numero e' perfetto.";
    } else {
        cout<<"Il numero non e' perfetto.";
    }
    return 0;
}