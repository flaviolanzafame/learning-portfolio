#include <iostream>
using namespace std;
int main() {
    int number;
    cout<<"Inserisci un numero intero: "; 
    if(!(cin>>number)) {
        cout<<"\nErrore: numero non valido.";
        return 1;
    }
    cout<<"\nTabellina del "<<number<<"\n";
    for(int multiplier=0; multiplier<=10; multiplier++) {
        cout<<number<<" * "<<multiplier<<" = "<<number*multiplier<<endl;
    }
    return 0;
}