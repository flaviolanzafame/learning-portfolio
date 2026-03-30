#include <iostream>
using namespace std;
int main()
{
    float num1, num2, ris;
    char segno;
    bool val=false;
    cout<<"Inserisci il primo numero."<<endl;
    cin>>num1;
    cout<<"Inserisci il secondo numero."<<endl;
    cin>>num2;
    cout<<"Inserisci il segno d'operazione."<<endl;
    cin>>segno;
    switch(segno) {
        case '+':
        ris=num1+num2;
        val=true;
        break;
        case '-':
        ris=num1-num2;
        val=true;
        break;
        case '*':
        ris=num1*num2;
        val=true;
        break;
        case '/':
        ris=num1/num2;
        val=true;
        break;
        default:
        cout<<"Segno errato."<<endl;
        
    }
    if(val==true){
    cout<<"Il risultato vale "<<ris<<endl;
    } return 0;
}