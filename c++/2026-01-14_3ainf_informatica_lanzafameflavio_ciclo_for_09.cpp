#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Inserisci un numero intero compreso tra -100 e 100: ";
    if(!(cin>>N)) {
        cout<<"Numero non valido. Riprova con un numero intero compreso tra -100 e 100.";
        return 1;
    }
    if((N==0) || (N<-100) || (N>100)) {
        cout<<"\nNon esistono multipli di "<<N<<" compresi tra 1 e 100.";
        return 0;
    }
    cout<<"\nI multipli di "<<N<<" compresi tra 1 a 100 sono: ";
    for(int i=1; i<=100; i++) {
        if(N%i==0) {
            cout<<i<<" ";
        }
    } return 0;
}