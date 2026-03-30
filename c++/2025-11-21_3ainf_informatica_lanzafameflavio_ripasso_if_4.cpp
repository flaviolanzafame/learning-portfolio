#include <iostream>
using namespace std;
int main() {
    int voto1, voto2, voto3, ins=0;
    double media;
    cout<<"Inserisci 3 voti interi.\n";
    cin>>voto1>>voto2>>voto3;
    if(voto1<6) { ins++; }
    if(voto2<6) { ins++; }
    if(voto3<6) { ins++; }
    if(ins>=2) {
        cout<<"Studente respinto.";
    } else if(ins==1) {
        cout<<"Studente rimandato.";
    } else {
        media=(voto1+voto2+voto3)/3;
        cout<<"La media è "<<media<<". ";
        if(media>7.5) {
            cout<<"Ottimo lavoro!";
        } else {
            cout<<"Studente promosso.";
        }
    } return 0;
}