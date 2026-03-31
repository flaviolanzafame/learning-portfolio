// File:            2026-03-13_3ainf_informatica_lanzafameflavio_runningdistancetracker.cpp
// Author:          Flavio Lanzafame
// Date:            13/03/2026
// Description:     Running distance tracker
/* Consegna:        Creare un programma che permetta di registrare in un array i 31 giorni del mese di marzo,
                    che contengano i chilometri percorsi da un maratoneta ogni giorno. In output:
                    - totale distanza percorsa nel mese,
                    - media distanza percorsa da giorno 10 a 20,
                    - giorno in cui e' stat percorsa distanza maggiore,
                    - giorni in cui la distanza percorsa e' stata inferiore alla media,
                    Inoltre:
                    - modificare distanza percorsa giorno 13,
                    - modificare la distanza nei giorni in cui la e' minore di 1,
                    - visualizzare il totale delle modifiche.
*/

#include <iostream>
#include <iomanip>
using namespace std;

template <typename T> T validateInput(T min, T max);
void readDistances(int days, double dailyDistance[], string month);
double calculateTotalDistance(int days, double dailyDistance[]);
void calcBestDay(int days, double dailyDistance[], double &maxDistance, int &bestDay);
double sumInterval(double dailyDistance[], int start, int end);
double calculateAvg(double total, int numbers);
void printStats(string month, double totalDistance, double avgDistance10to20, int bestDay, double maxDistance);
void printDaysBelowVal(int days, double dailyDistance[], double value, string month);
void editDay(string month, double dailyDistance[], int &totalEdits, int value);
void editDaysBelowVal(int days, string month, double dailyDistance[], int &totalEdits, double value);

// Main function
int main() {
	const int DAYS=31; // March days
	const string MONTH="marzo";
	double dailyDistance[DAYS]; // daily running distances for March
	double totalDistance=0, totalDistance10to20=0, maxDistance=0;
	double avgDistance, avgDistance10to20; // average of total distance, average of distance run between 10-20 March
	int bestDay=0, totalEdits=0; // month day with max distance run, total edits made

	// Read inputs
	cout<<"------ Running Distance Tracker ------\n----------- Mese di "<<MONTH<<" -----------\n";
	readDistances(DAYS, dailyDistance, MONTH);

	// Calculations
	totalDistance = calculateTotalDistance(DAYS, dailyDistance);
	calcBestDay(DAYS, dailyDistance, maxDistance, bestDay); // Find max distance and best day
	totalDistance10to20 = sumInterval(dailyDistance, 10, 20); // Calculate sum of distance run from March 10 to 20
	avgDistance = calculateAvg(totalDistance, DAYS);
	avgDistance10to20 = calculateAvg(totalDistance10to20, 11);

	// Stats
	cout<<"\n------ Statistiche ------\n";
	printStats(MONTH, totalDistance, avgDistance10to20, bestDay, maxDistance);
	cout<<"\nMedia della distanza percorsa dal 10 al 20 marzo: "<<fixed<<setprecision(2)<<avgDistance10to20<<" km";
	cout<<"\n\nGiorni in cui la distanza percorsa e' stata minore della distanza media percorsa: ";
	printDaysBelowVal(DAYS, dailyDistance, avgDistance, MONTH); // Days which distance run is less than average distance

	// Edits
	cout<<"\n\n------ Modifiche ------\n";
	editDay(MONTH, dailyDistance, totalEdits, 13); // Edit day 13
	editDaysBelowVal(DAYS, MONTH, dailyDistance, totalEdits, 1); // Edit days which distance is below 1
	cout<<"\nTotale modifiche effettuate: "<<totalEdits;

	return 0;
}

// Read input and valid it
template <typename T>
T validateInput(T min, T max) {
	T value;
	while(true) {
		cin>>value;
		if((cin.fail()) || (value < min) || (value > max)) {
			cout<<"\tNumero non valido. Riprova: ";
			cin.clear();
			cin.ignore(1000, '\n');
		} else {
			break;
		}
	}
	return value;
}

// Read daily distances of the month
void readDistances(int days, double dailyDistance[], string month) {
	for(int day=0; day<days; day++) {
		cout<<" - "<<day+1<<" "<<month<<": km ";
		dailyDistance[day] = validateInput<double>(0, 1000);
	}
}

// Calculate total distance
double calculateTotalDistance(int days, double dailyDistance[]) {
	double totalDistance=0;
	for(int day=0; day<days; day++) {
		totalDistance+=dailyDistance[day];
	}
	return totalDistance;
}

// Find max distance and max distance day
void calcBestDay(int days, double dailyDistance[], double &maxDistance, int &bestDay) {
	for(int day=0; day<days; day++) {
		if(maxDistance<=dailyDistance[day]) {
			maxDistance=dailyDistance[day];
			bestDay=day+1;
		}
	}
}

// Calculate sum of an interval
double sumInterval(double dailyDistance[], int start, int end) {
	double sum = 0;
	for(int day=start-1; day<end; day++) {
		sum+=dailyDistance[day];
	}
	return sum;
}

// Calculate average
double calculateAvg(double total, int numbers) {
	double avg=total/numbers;
	return avg;
}

// Stats: total distance, run distance from March 10 to 20, best day
void printStats(string month, double totalDistance, double avgDistance10to20, int bestDay, double maxDistance) {
	cout<<"\nTotale distanza percorsa a "<<month<<": "<<totalDistance<<" km";
	cout<<"\nGiorno con maggiore distanza percorsa: "<<bestDay<<" "<<month<<" ("<<maxDistance<<" km)";
}

// Days which distance run is less than a value
void printDaysBelowVal(int days, double dailyDistance[], double value, string month) {
	for(int day=0; day<days; day++) {
		if(dailyDistance[day]<value) {
			cout<<"\n - "<<day+1<<" "<<month<<": "<<dailyDistance[day]<<" km";
		}
	}
}

// Edit a day
void editDay(string month, double dailyDistance[], int &totalEdits, int value) {
	cout<<"Modifica giorno "<<value<<" "<<month<<": km ";
	dailyDistance[value-1] = validateInput<double>(0, 1000);
	totalEdits++;
}

// Edit days which distance run is less than a value
void editDaysBelowVal(int days, string month, double dailyDistance[], int &totalEdits, double value) {
	cout<<endl;
	for(int day=0; day<days; day++) {
		if(dailyDistance[day]<value) {
			cout<<"Modifica giorno "<<day+1<<" "<<month<<": ";
			dailyDistance[day] = validateInput<double>(0, 1000);
			totalEdits++;
		}
	}
}