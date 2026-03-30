#include <iostream>
using namespace std;
int main() {
    int N;
    double n, somma=0, media=0;
    cout<<"Quanti numeri vuoi inserire? ";
    if(!(cin>>N) || (N<=0)) {
        cout<<"Numero non valido. Riprova con un numero naturale maggiore di 0.";
        return 1;
    }
    cout<<"\nInserisci "<<N<<" numeri:\n";
    for(int i=1; i<=N; i++) {
        cout<<i<<"° numero: ";
        cin>>n;
        somma+=n;
    }
    media=somma/N;
    cout<<"\nLa media è: "<<media;
    return 0;
}