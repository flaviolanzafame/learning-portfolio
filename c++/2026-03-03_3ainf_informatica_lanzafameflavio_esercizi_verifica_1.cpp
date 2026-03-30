#include <iostream>
using namespace std;
int main() {
    int number, factorialNum=1;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>number) || (number<0)) {
        cout<<"Errore: numero non valido.";
        return 1;
    }
    cout<<endl<<number<<"! = ";
    if(number==0) {
        factorialNum=0;
    } else {
        for(int i=1; i<=number; i++) {
            factorialNum*=i;
        }
    }
    cout<<factorialNum;
    return 1;
}