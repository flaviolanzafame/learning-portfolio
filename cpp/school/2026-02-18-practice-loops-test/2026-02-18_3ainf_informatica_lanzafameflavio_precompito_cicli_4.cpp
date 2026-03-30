#include <iostream>
using namespace std;
int main() {
    int N, N_inv=0, N_temp, cifra;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>N) || (N<=0)) {
        cout<<"\nErrore: numero non valido.";
        return 1;
    }
    N_temp=N;
    while(N_temp>0) {
        cifra=N_temp%10;
        N_inv=N_inv*10+cifra;
        N_temp/=10;
    }
    cout<<"\nIl numero "<<N<<" invertito e': "<<N_inv;
    return 0;
}