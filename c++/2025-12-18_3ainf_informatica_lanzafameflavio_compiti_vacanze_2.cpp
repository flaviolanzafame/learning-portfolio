#include <iostream>
using namespace std;
int main() {
    double importo, tot=0, incassi=0, MAX, MIN, top=0;
    cout<<"---- Controllo incassi giornalieri negozio ----\nInserisci l'importo di ogni incasso.\nPer interrompere, inserisci un numero negativo.\n\n";
    if(!(cin>>importo)) {
        cout<<"Importo non valido, riprova.";
        return 1;
    }
    if(importo<0) {
        cout<<"\nNon è stato inserito alcun importo.";
        return 1;
    }
    MAX=importo;
    MIN=importo;
    do {
        tot+=importo;
        incassi++;
        if(importo>MAX) {
            MAX=importo;
        } else if(importo<MIN) {
            MIN=importo;
        }
        if(importo>100) {
            top++;
        }
        if(!(cin>>importo)) {
            cout<<"Numero non valido, riprova.";
            return 1; 
        }
    } while(importo>=0);
    if(tot>=1000) {
        cout<<"\nGiornata molto positiva.";
    } else {
        cout<<"\nGiornata da migliorare.";
    }
    cout<<"\n\nSono stati inseriti "<<incassi<<" incassi.\n";
    cout<<"Incasso totale: "<<tot<<" €\n";
    cout<<"Incasso massimo: "<<MAX<<" €. Incasso minimo: "<<MIN<<" €\n";
    cout<<"Incassi superiori a 100 €: "<<top;
    return 0;
}