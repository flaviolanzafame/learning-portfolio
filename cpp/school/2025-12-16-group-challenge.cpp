#include <iostream>
using namespace std;
int main () {
	int cont = 0;
	int som = 0;
	int n, max, min, par=0, disp=0;
	cout<<"Inserisci un numero"<<endl;
	cin>>n;
	som+=n;
	if (n==0) {
		return 0;
	}
	cont++;
	max=n;
	min=n;
	if (n % 2 == 0) {
		par++;
	} else if (n % 2 == 1) {
		disp++;
	}
	while (n!=0) {
		cin>>n;
		if (n == 0) {
			cont--;
		}
		cont++;
		som+=n;
		if(n > max) {
			max = n;
		}
		if (n != 0) {
			if (n < min) {
				min = n;
			}
		}

		if (n % 2 == 1) {
			disp++;
		}


	}
	if (som>100) {
		cout<<"\nLa somma è maggiore di 100";
	} else if(som<100) {
		cout<<"\nLa somma è minore di 100";

	}

	cout<<"\nNumero totale dei valori inseriti: "<<cont<<endl<<"Somma: "<<som<<endl<<"Valore massimo: "<<max<<endl<<"Valore minimo: "<<min<<endl<<"Numeri pari: "<<cont-disp<<"\nNumeri dispari: "<<disp<<endl;
	return 0;

}


