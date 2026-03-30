#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N;
    bool primo;
    cout<<"Inserisci un numero naturale uguale o superiore a 2: ";
    if(!(cin>>N) || N<2) {
        cout<<"Errore. Riprova con un numero naturale uguale o superiore a 2.";
        return 1;
    }
    cout<<"\nI numeri primi compresi tra 2 e "<<N<<" sono: ";
    for(int n=2; n<=N; n++) {
        primo=true;
        for(int i=2; i<=sqrt(n); i++) {
            if(n%i==0) {
                primo=false;
                break;
            }
        }
        if (primo==true) {
            cout<<n<<" ";
        }
    } 
    return 0;
}