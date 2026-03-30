#include <iostream>
using namespace std;
int main() {
    int giorno;
    cout<<"Inserisci il numero corrispondente al giorno della settimana.\n";
    cin>>giorno;
    switch(giorno) {
        case 1:
        cout<<"Lunedì";
        break;
        case 2:
        cout<<"Martedì";
        break;
        case 3:
        cout<<"Mercoledì";
        break;
        case 4:
        cout<<"Giovedì";
        break;
        case 5:
        cout<<"Venerdì";
        break;
        case 6:
        cout<<"Sabato";
        break;
        case 7:
        cout<<"Domenica";
        break;
        default:
        cout<<"Opzione non valida.";
        break;
    } return 0;
}