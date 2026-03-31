#include <iostream>
using namespace std;
int main() {
    int num, numV;
    cout<<"Inserisci un numero intero."<<endl;
    cin>>num;
    numV=num%2;
    cout<<"Il numero è ";
    if(numV==0) {
        cout<<"pari.";
    } else {
        cout<<"dispari.";
    } return 0;
}