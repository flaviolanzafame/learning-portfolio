#include <iostream>
using namespace std;
int main() {
    int N, somma=0;
    cout<<"Inserisci un numero: ";
    if(!(cin>>N) || (N<0)) {
        cout<<"Errore. Riprova con un numero naturale.";
        return 1;
    }
    for(int temp=N; temp>0; temp/=10) {
        somma+=temp%10;
    }
    cout<<"\nLa somma delle cifre del numero "<<N<<" è: "<<somma;
    return 0;
}