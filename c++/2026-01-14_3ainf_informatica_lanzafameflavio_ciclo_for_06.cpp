#include <iostream>
using namespace std;
int main() {
    int N, sommaP=0, sommaD=0;
    cout<<"Inserisci un numero naturale uguale o superiore a 1: ";
    if(!(cin>>N) || (N<=0)) {
        cout<<"\nNumero non valido. Riprova con un numero naturale uguale o superiore a 1.";
        return 1;
    }
    for(int i=1; i<=N; i++) {
        if(i%2==0) {
            sommaP+=i;
        } else {
            sommaD+=i;
        }
    } 
    cout<<"\nLa somma dei numeri pari da 1 a "<<N<<" è: "<<sommaP<<endl;
    cout<<"La somma dei numeri dispari da 1 a "<<N<<" è: "<<sommaD;
    return 0;
}