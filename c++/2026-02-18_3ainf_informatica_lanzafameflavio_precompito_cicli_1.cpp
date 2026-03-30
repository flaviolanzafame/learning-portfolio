#include <iostream>
using namespace std;
int main() {
    int N, somma=0;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>N) || (N<=0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    for (int i=0; i<=N; i++) {
        somma+=i;
    }
    cout<<"\nLa somma dei numeri da 1 a "<<N<<" è: "<<somma;
    return 0;
}