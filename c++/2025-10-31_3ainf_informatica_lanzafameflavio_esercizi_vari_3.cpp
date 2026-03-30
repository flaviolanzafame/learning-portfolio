#include <iostream>
using namespace std;
int main() {
    char patente;
    cout<<"Inserisci la categoria di patente per visualizzare i veicoli possibili da guidare: ";
    cin>>patente;
    switch(patente) {
        case 'A':
        cout<<"\nMotocicli";
        break;
        case 'B':
        cout<<"\nAutomobili";
        break;
        case 'C':
        cout<<"\nAutocarri";
        break;
        case 'D':
        cout<<"\nAutobus";
        break;
        default:
        cout<<"\nCategoria non valida.";
        break;
    } return 0;
}