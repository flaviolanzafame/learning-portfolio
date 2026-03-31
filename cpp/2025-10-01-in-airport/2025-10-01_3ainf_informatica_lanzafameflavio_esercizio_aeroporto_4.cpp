#include <iostream>
using namespace std;
int main()
{
    int bagagli, nKids;
    string classe;
    cout<<"Inserisci la classe del biglietto."<<endl;
    cin>>classe;
    cout<<"Inserisci il numero di bagagli."<<endl;
    cin>>bagagli;
    cout<<"Inserisci il numero dei bambini."<<endl;
    cin>>nKids;
    cout<<"È stata assegnata la priorità d'imbarco: ";
    if (classe=="B") {
        cout<<"PRIORITY 1."<<endl;
    } else if (nKids>=1) {
        cout<<"PRIORITY 2."<<endl;
    } else if (bagagli==0) {
        cout<<"PRIORITY 3."<<endl;
    } else {
        cout<<"Standard."<<endl;
    }
    return 0;
}