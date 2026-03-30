#include <iostream>
using namespace std;
int main()
{
    int bag, vol, bagVal, volVal;
    cout<<"Inserisci il numero dei bagagli."<<endl;
    cin>>bag;
    cout<<"Inserisci il volume dei liquidi."<<endl;
    cin>>vol;
    if (bag<=2) {
        bagVal=true;
        } else {
            bagVal=false;
    }
    if (vol<=100) {
       volVal=true;
        } else {
            volVal=false;
    }
    if ((bagVal==true)&&(volVal==true)) {
        cout<<"Il controllo è stato superato."<<endl;
    } else {
        cout<<"Il controllo non è stato superato."<<endl;
    }
    if ((bagVal==false)) {
        cout<<"Sono consentiti massimo 2 bagagli."<<endl;
        }
    if (volVal==false) {
        cout<<"Sono consentiti massimo 100 mL."<<endl;
    }
    return 0;
}