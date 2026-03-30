#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>number) || (number<=0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    if(number==1) {
        cout<<"\nNon c'e' alcun numero pari compreso tra 1 e 1.";
    } else {
        cout<<"\nI numeri pari compresi tra 1 e "<<N<<" sono: ";
        for(int evenNum=2; evenNum<=number; evenNum+=2) {
            cout<<evenNum<<" ";
        }
    }
    return 0;
}
