#include <iostream>
using namespace std;
int main ()
{
    bool isWeightValid=false, isHeightValid=false;
    float weight, height;
    cout<<"Inserisci il peso del bagaglio (kg): ";
    cin>>weight;
    cout<<"Inserisci l'altezza del bagaglio (cm): ";
    cin>>height;
    if(weight<=10) {
        isWeightValid=true;
    }
    if(height<=55) {
        isHeightValid=true;
    }
    /*controllo bagaglio*/
    if(isWeightValid&&isHeightValid) {
        cout<<"\nIl bagaglio e' stato accettato!";
       } else {
           cout<<"\nIl bagaglio e' stato rifiutato perche' supera";
       }
       if ((isWeightValid==false)&&(isHeightValid==false)) {
           cout<<" il peso e l'altezza massima.";
       } else if (isHeightValid==false) {
           cout<<" l'altezza massima."; 
       } else if (isWeightValid==false) {
           cout<<" il peso massimo."; 
       } return 0;
 }