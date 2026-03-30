#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Inserisci un numero intero positivo: ";
    if(!(cin>>N) || N<0) {
        cout<<"Input non valido, riprova con un numero intero positivo.";
    }
    do {
        cout<<N<<endl;
        N--;
    } while(N!=0);
    return 0;
}