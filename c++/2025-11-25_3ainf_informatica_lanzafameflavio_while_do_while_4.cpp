#include <iostream>
using namespace std;
int main() {
    int N_nums, N, N_max, N_min;
    cout<<"Quanti numeri interi vuoi inserire? ";
    if(!(cin>>N_nums)) {
        cout<<"Input non valido, riprova.";
        return 1;
    }
    cout<<"\nInserisci i numeri interi: \n";
    if(!(cin>>N)) {
        cout<<"Input non valido, riprova.";
        return 1;
    }
    N_max=N;
    N_min=N;
    N_nums--;
    while(N_nums!=0) {
        if(!(cin>>N)) {
            cout<<"Input non valido, riprova.";
            return 1;
        }
        N_nums--;
        if(N>N_max) {
            N_max=N;
        } else if(N<N_min) {
            N_min=N;
        }
    }
    cout<<"Il valore massimo è "<<N_max<<", quello minimo "<<N_min<<".";
    return 0;
}