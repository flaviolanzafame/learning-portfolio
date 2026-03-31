#include <iostream>
using namespace std;
int main() {
    int N;
    double n, somma=0, media=0;
    cout<<"-------- Calcola media --------\nQuanti numeri vuoi inserire? ";
    if(!(cin>>N) || (N<0)) {
        cout<<"\nNumero non valido. Riprova.";
        return 1;
    }
    if(N==0)
        return 0;
    cout<<endl;
    for(int i=1; i<=N; i++) {
        cout<<i<<"° numero: ";
        if(!(cin>>n)) {
            cout<<"\nNumero non valido. Riprova.";
            return 1;
        }
        somma+=n;
    }
    media=somma/N;
    cout<<"\nLa media è: "<<media;
    return 0;
}