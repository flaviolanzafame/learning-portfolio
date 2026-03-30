#include <iostream>
using namespace std;
int main() {
    int N, primo=1, sec=1, terzo;
    cout<<"Quanti termini devono essere calcolati per la successione di Fibonacci? ";
    if(!(cin>>N) || (N<0)) {
        cout<<"Errore. Riprova con un numero naturale.";
        return 1;
    }
    if(N==0)
        return 0;
    cout<<"\nSuccessione di Fibonacci per "<<N<<" termini:\n0 "<<primo<<" "<<sec<<" ";
    for(int i=4; i<=N; i++) {
        terzo=primo+sec;
        primo=sec;
        sec=terzo;
        cout<<terzo<<" ";
    } return 0;
}