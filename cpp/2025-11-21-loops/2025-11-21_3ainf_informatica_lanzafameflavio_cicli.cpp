#include <iostream>
using namespace std;
int main() {
    double acquisto, tot=0;
    cout<<"Inserisci il prezzo dell'articolo.\n";
    do {
        cin>>acquisto;
        tot+=acquisto;
    } while(acquisto!=0);
    cout<<"Totale: "<<tot<<" €";
    return 0;
}