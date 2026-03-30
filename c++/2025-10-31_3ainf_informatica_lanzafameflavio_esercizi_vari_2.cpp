#include <iostream>
using namespace std;
int main() {
    double T;
    cout<<"Inserisci la temperatura: ";
    cin>>T;
    cout<<"\nStato dell'acqua: ";
    if(T<=0) {
        cout<<"solido (ghiaccio).";
    } else if(T<100) {
        cout<<"liquido.";
    } else {
        cout<<"gassoso (vapore).";
    } return 0;
}