#include <iostream>
using namespace std;
int main() {
    int N, somma=0, conta=0;
    cout<<"Inserisci un numero intero: ";
    if(!(cin>>N)) {
        cout<<"Input non valido, riprova con un numero intero.";
    }
    while(conta<N) {
        conta++;
        somma+=conta;
    } 
    cout<<"\nLa somma dei numeri da 1 a "<<N<<" è "<<somma<<".";
    return 0;
}