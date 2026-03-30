#include <iostream>
using namespace std;
int main() {
    int opz;
    cout<<"Inserisci il numero della tua scelta:"<<endl<<"1. Caffè - 1.20 €"<<endl<<"2. Cappuccino - 1.50 €"<<endl<<"3. Cornetto - 1.00 €"<<endl<<"4. Succo di frutta - 1.80 €"<<endl;
    cin>>opz;
    switch(opz) {
        case 1:
        cout<<"Caffè - 1.20 €";
        break;
        case 2:
        cout<<"Cappuccino - 1.50 €";
        break;
        case 3:
        cout<<"Cornetto - 1.00 €";
        break;
        case 4:
        cout<<"Succo di frutta - 1.80 €";
        break;
        default:
        cout<<"Errore! Opzione inesistente.";
        break;
    } return 0;
}