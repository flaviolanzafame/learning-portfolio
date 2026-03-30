#include <iostream>
using namespace std;
int main() {
    int num, editedNum, digits=0;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>num) || (num<=0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    editedNum=num;
    while(editedNum>0) {
        editedNum/=10;
        digits++;
    }
    cout<<"\nIl numero "<<num<<" e' composto da: "<<digits<<" cifre.";
    return 0;
}