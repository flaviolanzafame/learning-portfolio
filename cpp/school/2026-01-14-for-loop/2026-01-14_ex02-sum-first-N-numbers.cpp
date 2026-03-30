#include <iostream>
using namespace std;
int main() {
    int N, somma=0;
    cout<<"Inserisci un numero naturale: ";
    if(!(cin>>N) || (N<0)) {
        cout<<"\nNumero non valido. Riprova con un numero naturale.";
        return 1;
    }
    for(int i=1; i<=N; i++) {
        somma+=i;
    }
    cout<<"\nLa somma dei numeri da 1 a "<<N<<" è: "<<somma;
    return 0;
}
