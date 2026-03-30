#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, work;
    cout<<"Inserisci 3 numeri interi.";
    if(!(cin>>num1>>num2>>num3)) {
        cout<<"\nInput non valido, inserisci 3 numeri interi.";
    } return 1;
    if(num1>num2) {
        work=num1;
        num1=num2;
        num2=work;
    }
    if(num3<num1) {
        work=num2;
        num2=num1;
        num1=num3;
        num3=work;
    } else if(num3<num2) {
        work=num2;
        num2=num3;
        num3=work;
    }
    cout<<"\nI numeri in ordine sono: "<<num1<<" "<<num2<<" "<<num3;
    return 0;
}