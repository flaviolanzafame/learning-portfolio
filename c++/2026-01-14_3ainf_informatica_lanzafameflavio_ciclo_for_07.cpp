#include <iostream>
using namespace std;
int main() {
    int N, Nf=1;
    cout<<"------ Calcola fattoriale ------\nInserisci un numero naturale: ";
    if(!(cin>>N) || (N<0)) {
        cout<<"\nNumero non valido. Riprova con un numero naturale.";
        return 1;
    }
    for(int i=1; i<=N; i++) {
        Nf*=i;
    }
    cout<<endl<<N<<"! = "<<Nf;
    return 0;
}