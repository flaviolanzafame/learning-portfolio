#include <iostream>
using namespace std;
int main () {
    int eta;
    string ans;
    cout<<"Quanti anni hai? ";
    if(!(cin>>eta) || (eta<0) || (eta>130)) {
        cout<<"Età non valida, riprova.";
    } else if(eta>=18) {
        cout<<"Hai la patente? (Sì/No) ";
        cin>>ans;
        if (ans=="Sì") {
            cout<<"\nPuoi guidare.";
        } else {
            cout<<"\nSei maggiorenne ma non puoi guidare.";
        }
    } else {
        cout<<"\nNon puoi guidare.";
    } return 0;
}