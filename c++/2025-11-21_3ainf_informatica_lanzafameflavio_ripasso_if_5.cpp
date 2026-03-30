#include <iostream>
using namespace std;
int main() {
    string username, password;
    cout<<"------------ Login ------------\nInserire il nome utente: ";
    cin>>username;
    if(username=="admin") {
       cout<<"Inserire password: ";
       cin>>password;
       if(password=="1234") {
           cout<<"\nAccesso consentito.";
       } else {
           cout<<"\nPassword errata.";
       }
    } else {
        if(username=="ospite") {
            cout<<"\nAccesso limitato.";
        } else {
            cout<<"\nUtente inesistente.";
        }
    } return 0;
}