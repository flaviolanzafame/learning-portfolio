#include <iostream>
using namespace std;
int main() {
    double prezzo, prezzoS;
    int eta, giorno;
    cout<<"Inserisci il prezzo del biglietto: ";
    cin>>prezzo;
    cout<<"Inserisci la tua età: ";
    cin>>eta;
    cout<<"Inserisci il giorno della settimana: ";
    cin>>giorno;
    if(eta<18) {
        prezzoS=prezzo-(prezzo*0.20);
    } else if(eta>=65) {
        prezzoS=prezzo-(prezzo*0.30);
    } else {
        prezzoS=prezzo;
    }
    if(giorno==7) {
        prezzoS=prezzoS-(prezzoS*0.10);
    }
    cout<<"\nPrezzo del biglietto: "<<prezzoS;
}