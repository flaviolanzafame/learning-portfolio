// File: 2026-03-16_3ainf_informatica_lanzafameflavio_distanzaduepunti.cpp
// Autore: Flavio Lanzafame
// Classe: 3A INF
// Data: 12/03/2026 (A.S. 2025-2026)
// Descrizione: Creazione di una funzione che calcoli la distanza tra due punti in un piano cartesiano (geometria analitica)

#include <iostream>
#include <cmath>
using namespace std;

// calcola distanza tra due punti del piano cartesiano
double calcolaDistanza(int x1, int y1, int x2, int y2) {
	double distanzaAB = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))); // radice quadrata di ((x2 - x1)^2) + ((y2 - y1)^2)
	return distanzaAB;
}

// funzione principale
int main() {
	int xA, yA, xB, yB;
	double distanzaAB;
	cout<<"Inserisci le coordinate del primo punto:\nxA = ";
	cin>>xA;
	cout<<"yA = ";
	cin>>yA;
	cout<<"\nInserisci le coordinate del secondo punto:\nxB = ";
	cin>>xB;
	cout<<"yB = ";
	cin>>yB;
	distanzaAB = calcolaDistanza(xA, yA, xB, yB);
	cout<<"\nLa distanza tra i punti A("<<xA<<"; "<<yA<<") e B("<<xB<<"; "<<yB<<") e': "<<distanzaAB;
	return 0;
}