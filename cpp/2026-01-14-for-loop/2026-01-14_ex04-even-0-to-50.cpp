#include <iostream>
using namespace std;
int main() {
    cout<<"Numeri pari compresi tra 0 e 50: \n";
    for(int i=0; i<=50; i++) {
        if(i%2==0) {
            cout<<i<<" ";
        }
    } return 0;
}