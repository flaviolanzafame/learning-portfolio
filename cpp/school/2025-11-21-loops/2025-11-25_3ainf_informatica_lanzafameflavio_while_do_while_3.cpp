#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Inserisci numeri interi.\n";
    while(N!=0) {
        if(!(cin>>N)) {
            cout<<"Input non valido, riprova.";
            return 1;
        }
        cout<<N<<endl;
    } return 0;
}