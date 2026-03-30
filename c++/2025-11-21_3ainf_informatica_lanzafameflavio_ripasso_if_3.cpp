#include <iostream>
using namespace std;
int main() {
    int eta;
    string ans;
    cout<<"--- Benvenuto al Parco Divertimenti!---\nInserisci la tua età: ";
    if(!(cin>>eta) || (eta<0) || (eta>130)) {
        cout<<"\nEtà non valida, riprova.";
        return 1;
    }
    if(eta<10) {
        cout<<"Sei accompagnato da un adulto? (Sì/No) ";
        cin>>ans;
        if(ans=="Sì") {
            cout<<"\nIngresso gratuito.";
        } else {
            cout<<"\nNon puoi entrare senza un adulto.";
        }
    } else {
        if(eta<18) {
            cout<<"\nBiglietto ridotto.";
        } else {
            cout<<"\nBiglietto intero.";
        }
    } return 0;
}