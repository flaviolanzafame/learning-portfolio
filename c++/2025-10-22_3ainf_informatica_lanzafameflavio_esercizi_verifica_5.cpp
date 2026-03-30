#include <iostream>
using namespace std;
int main() {
    double prezzo, prezzoS;
    int codiceS;
    cout<<"Inserisci il prezzo."<<endl;
    cin>>prezzo;
    cout<<"Inserisci il codice sconto"<<endl;
    cin>>codiceS;
    if(codiceS==1) {
        prezzoS=prezzo-(prezzo*0.10);
        cout<<"Il prezzo scontato è: "<<prezzoS;
    } else if(codiceS==2) {
        prezzoS=prezzo-(prezzo*0.20);
        cout<<"Il prezzo scontato è: "<<prezzoS;
    } else {
        cout<<"Nessuno sconto applicato.";
    }
    return 0;
}