#include <iostream>
using namespace std;
int main() {
    int eta;
    cout<<"Inserisci l'età."<<endl;
    cin>>eta;
    if(eta<13) {
        cout<<"Bambino";
    } else if(eta<18) {
        cout<<"Adolescente";
    } else if(eta<65) {
        cout<<"Adulto";
    } else {
        cout<<"Anziano";
    } return 0;
}