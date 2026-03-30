#include <iostream>
using namespace std;
int main() {
    double N, base, esp, pot=1;
    cout<<"---- Calcola potenza ----\nInserisci la base: "; 
    if(!(cin>>base)) {
        cout<<"\nErrore. Riprova.";
        return 1;
    }
    cout<<"Inserisci l'esponente: "; 
    if(!(cin>>esp)) {
        cout<<"\nErrore. Riprova.";
        return 1;
    }
    for(int i=1; i<=esp; i++) {
        pot*=base;
    }
    cout<<endl<<base<<"^"<<esp<<" = "<<pot;
    return 0;
}