#include <iostream>
using namespace std;
int main() {
	int number;
	bool isPrime=true;
	cout<<"Inserisci un numero intero positivo: ";
	if(!(cin>>number)||(number<=0)) {
		cout<<"Errore: numero non valido.";
		return 1;
	}
	if(number==1)
		isPrime=false;
	else {
		for(int divisor=2; (divisor*divisor<=number) && isPrime; divisor++) {
			if(number%divisor==0) {
				isPrime=false;
			}
		}
	}
	cout<<"\nIl numero "<<number;
	if(isPrime)
		cout<<" e' primo.";
	else
		cout<<" non e' primo.";

	return 0;
}