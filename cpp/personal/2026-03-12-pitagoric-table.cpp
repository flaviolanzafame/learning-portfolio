// Description: Pitagoric table

#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
T readInput(T min, T max) {
    T value;
    while (true) {
        if (!(cin>>value) || value < min || value > max) {
            cout<<"Errore. Riprova: ";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }
    return value;
}

int main() {
    int rows, columns;
    cout<<"Insert rows: "; 
    rows = readInput<int>(-1e9, 1e9);
    cout<<"Insert columns: "; 
    columns = readInput<int>(-1e9, 1e9);
    for (int row=1; row<=rows; row++) {
        for (int column=1; column<=columns; column++) {
            cout<<setw(5)<<column*row;
        }
        cout<<endl;
    }
    return 0;
}