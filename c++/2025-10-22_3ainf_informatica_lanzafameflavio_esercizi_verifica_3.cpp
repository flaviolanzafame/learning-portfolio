#include <iostream>
using namespace std;
int main() {
    int numero;
    float numV;
    cout<<"Inserisci un numero intero."<<endl;
    cin>>numero;
    numV=numero%2;
    cout<<"Il numero è ";
    if(numV==0) {
        cout<<"pari";
    } else {
        cout<<"dispari";
    }
    if(numero>0) {
        cout<<" e positivo.";
    } else if(numero<0) {
        cout<<" e negativo.";
    } else {
        cout<<".";
    } return 0;
}