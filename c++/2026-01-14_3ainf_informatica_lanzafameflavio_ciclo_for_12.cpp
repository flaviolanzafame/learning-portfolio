#include <iostream>
using namespace std;
int main() {
    int base;
    cout<<"Inserisci la base e l'altezza del triangolo: ";
    if(!(cin>>base) || (base<0)) {
        cout<<"\nErrore. Riprova con numero naturale.";
        return 1;
    }
    if(base==0)
        return 0;
    cout<<endl;
    for(int altezza=1; altezza<=base; altezza++) {
        for(int ast=1; ast<=altezza; ast++) {
            cout<<"* ";
            if(ast==altezza) {
                cout<<endl;
            }
        }
    } return 0;
}