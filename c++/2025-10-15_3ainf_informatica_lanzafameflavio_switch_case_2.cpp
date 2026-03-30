#include <iostream>
using namespace std;
int main()
{
    int giorno;
    cout<<"Inserisci un giorno della settimana."<<endl;
    cin>>giorno;
    cout<<"Il giorno della settimana ";
    switch(giorno) {
        case 1:
            cout<<"è lunedì.";
            break;
        case 2:
            cout<<"è martedì.";
            break;
        case 3:
            cout<<"è mercoledì.";
            break;
        case 4:
            cout<<"è giovedì.";
            break;
        case 5:
            cout<<"è venerdì.";
            break;
        case 6:
            cout<<"è sabato.";
            break;
        case 7:
            cout<<"è domenica.";
            break;
        default:
            cout<<"non esiste.";
            break;
    }
    return 0;
}