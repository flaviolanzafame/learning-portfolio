#include <iostream>
using namespace std;
int main() {
	int students;
	cout<<"Inserisci il numero degli studenti: ";
	if(!(cin>>students)||(students<0)) {
		cout<<"Errore: numero non valido.";
	}
	string names[students+1];
	int points[students+1];
	for(int infoStudents=1; infoStudents<=students; infoStudents++) {
		cout<<"\nStudente n. "<<infoStudents<<"\nNome: ";
		if(!(cin>>names[infoStudents])) {
			cout<<"Errore: nome non valido.";
		}
		cout<<"Punteggio: ";
		if(!(cin>>points[infoStudents])||(points[infoStudents]<0)) {
			cout<<"Errore: numero non valido.";
		}
	}
	for(int outStudents=1; outStudents<=students; outStudents++) {
	    cout<<"\nNome: "<<names[outStudents]<<" - Punteggio: "<<points[outStudents];
	}
	cout<<"\n\nInserisci un punteggio di riferimento: ";
	int referPoints;
	cin>>referPoints;
	cout<<"\nStudenti che l'hanno superato: ";
	for(int isBigger=1; isBigger<=students; isBigger++) {
	    if(points[isBigger]>referPoints) {
	        cout<<names[isBigger]<<", ";
	    }
	}
	return 0;
}