#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int N_rnd, N_in, tent=0;
    cout<<"------ Indovina il numero ------\nInserisci un numero tra 1 e 100.\n\n";
    srand(time(NULL));
    N_rnd=(rand()%101)+1;
    do {
        if(!(cin>>N_in)) {
            cout<<"Input non valido, riprova.";
            return 1;
        }
        tent++;
        if(N_in<N_rnd) {
            cout<<"Numero troppo piccolo, riprova!\n\n";
        } else if(N_in>N_rnd) {
            cout<<"Numero troppo grande, riprova!\n\n";
        }
    } while(N_rnd!=N_in);
    if(tent==1) {
        cout<<"\nIl numero è "<<N_rnd<<"! Complimenti, hai indovinato al primo tentativo!";
    } else {
        cout<<"\nIl numero è "<<N_rnd<<"! Hai indovinato dopo "<<tent<<" tentativi.";
    }
    return 0;
}