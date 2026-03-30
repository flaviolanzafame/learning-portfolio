#include <iostream>
using namespace std;
int main() {
    int opz;
    double i, iConv;
    cout<<"Inserisci il numero della tua scelta:"<<endl<<"1. Converti da Fahrenheit a Celsius"<<endl<<"2. Converti da Fahrenheit a Celsius"<<endl<<"3. Converti da metri a chilometri"<<endl<<"4. Converti da chilometri a metri"<<endl;
    cin>>opz;
    cout<<"Inserisci il valore da convertire."<<endl;
    cin>>i;
    switch(opz) {
        case 1:
        iConv=(i*(9/5))+32;
        break;
        case 2:
        iConv=(i-32)*(5/9);
        break;
        case 3:
        iConv=i/1000;
        break;
        case 4:
        iConv=i*1000;
        break;
        default:
        cout<<"Opzione inesistente.";
        break;
    }
    if((opz>=1)&&(opz<=4)) {
        cout<<"Il valore convertito vale: "<<iConv;
    } return 0;
}