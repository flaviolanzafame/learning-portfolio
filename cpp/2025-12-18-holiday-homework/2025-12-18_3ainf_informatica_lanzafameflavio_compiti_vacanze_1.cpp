#include <iostream>
using namespace std;
int main() {
	int N, somma=0, conta=0, MAX, MIN, PARI=0, DISP=0;
	cout<<"Inserisci dei numeri interi positivi.\nPer interrompere, inserisci \"0\".\n\n";
	if((!(cin>>N)) || (N<0)) {
		cout<<"\nNumero non valido, riprova.";
		return 1;
	}
	if(N==0) {
		cout<<"\nNon hai inserito alcun numero.";
		return 1;
	}
	MAX=N;
	MIN=N;
	do {
		somma+=N;
		conta++;
		if(N>MAX)
			MAX=N;
		else if(N<MIN)
			MIN=N;
		if(N%2==0)
			PARI++;
		else
			DISP++;
		if((!(cin>>N)) || (N<0)) {
			cout<<"Numero non valido, riprova.";
			return 1;
		}
	} while(N!=0);
	cout<<"\nSono stati inseriti "<<conta<<" numeri.\n";
	cout<<"La somma è "<<somma;
	if(somma>100)
		cout<<", ed è maggiore di 100.\n";
	else 
		cout<<", ed è minore di 100.\n";
	cout<<"Il valore massimo inserito è: "<<MAX<<". Il valore minimo: "<<MIN<<".\n";
	cout<<"Sono stati inseriti "<<PARI<<" numeri pari e "<<DISP<<" numeri dispari.";
	return 0;
}