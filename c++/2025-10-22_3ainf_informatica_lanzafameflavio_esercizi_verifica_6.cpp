#include <iostream>
using namespace std;
int main() {
    int numero;
    cout<<"Inserisci un numero intero da 1 a 7."<<endl;
    cin>>numero;
    switch(numero) {
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
    cout<<"Numero non valido!";
    break;
    } return 0;
}