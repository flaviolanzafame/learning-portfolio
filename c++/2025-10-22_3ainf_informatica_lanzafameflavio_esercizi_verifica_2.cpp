#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout<<"Inserisci il primo numero intero."<<endl;
    cin>>num1;
    cout<<"Inserisci il secondo numero intero."<<endl;
    cin>>num2;
    if(num1>num2) {
        cout<<"Il numero maggiore è "<<num1;
    } else if(num2>num1) {
        cout<<"Il numero maggiore è "<<num2;
    } else {
        cout<<"I numeri sono uguali.";
    }
}