#include <iostream>
using namespace std;
int main() {
    int numero;
    cout<<"Inserisci un numero intero."<<endl;
    cin>>numero;
    if(numero>0) {
        cout<<"Il numero è positivo";
    } else if(numero<0) {
        cout<<"Il numero è negativo.";
    } else {
        cout<<"Il numero è zero.";
    } return 0;
}