#include <iostream>
using namespace std;
int main() {
    int lato;
    cout<<"Inserisci il lato del quadrato: ";
    if(!(cin>>lato) || (lato<0)) {
        cout<<"Errore. Riprova con un numero naturale.";
        return 1;
    }
    if(lato==0)
        return 0;
    cout<<endl;
    for(int i=1; i<=lato; i++) {
        for(int j=1; j<=lato; j++) {
            cout<<"* ";
            if(j==lato) {
                cout<<endl;
            }
        }
    } return 0;
}