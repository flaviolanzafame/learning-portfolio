#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int nodes=0, edges=0;

	do {
		cout<<"Inserisci il numero di nodi: ";
		cin>>nodes;
	} while(nodes<0 || nodes>10);
	if (nodes == 0) {
		cout<<"Non e' presente alcun nodo.";
		return 0;
	} else {
		int graph[nodes][nodes] = {0};
		int degress[nodes] = {0};

		cout<<"\n=== Inserisci adiacenza tra i vertici (0 o 1) ===\n";
        
		for(int row = 0; row < nodes; row++) {
			for(int column = 0; column < nodes; column++) {
				cout<<"Adiacenza tra i vertici "<<row+1<<" e "<<column+1<<": ";
				if(row==column) {
					graph[row][column]=0;
					cout<<"0\n";
				} else if(row > column) {
					graph[row][column] = graph[column][row];
					cout<<graph[column][row]<<endl;
				} else {
					do {
						cin>>graph[row][column];
					} while((graph[row][column] != 0) && (graph[row][column] != 1));
				}
			}
		}
		cout<<"\n=== Matrice di adiacenza ===\n";
		for(int row = 0; row < nodes; row++) {
			for(int column = 0; column < nodes; column++) {
				cout<<setw(3)<<graph[row][column];
			}
			cout<<endl;
		}

		for(int row = 0; row < nodes; row++) {
			for(int column = 0; column < nodes; column++) {
				if(graph[row][column] == 1) {
					degress[row]++;
					edges++;
				}
			}
		}

		cout<<"\n=== Gradi dei vertici ===\n";
		for(int row = 0; row < nodes; row++) {
			cout<<"deg("<<row+1<<") = "<<degress[row]<<endl;
		}

		edges/=2;
		cout<<"\nTotale numero archi: "<<edges;

		for(int row = 0; row < nodes; row++) {
			if (degress[row] != nodes-1) {
				cout<<"\nIl grafo non e' completo";
				return 0;
			}
		}

		cout<<"\nIl grafo e' completo.";
	}
	return 0;
}