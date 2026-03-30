#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Inserisci un numero intero: ";
    if(!(cin>>num)) {
        cout<<"Input non valido, inserisci un numero intero.";
        return 1;
    }
    cout<<"Il numero è ";
    if(num>0) {
        cout<<"positivo e ";
        if(num%2==0) {
            cout<<"pari.";
        } else {
            cout<<"dispari.";
        }
    } else if(num<0) {
        cout<<"negativo";
        if(num<-100) {
            cout<<" e molto piccolo.";
        } else {
            cout<<".";
        }
    } else {
        cout<<"zero.";
    } return 0;
}