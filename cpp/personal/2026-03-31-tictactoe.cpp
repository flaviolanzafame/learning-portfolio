#include <iostream>
using namespace std;

int main() {
	string tris[3][3] = { {" "}, {" "}, {" "}}, player1, player2;
	int x, y;
	bool end = false, errore = false;
	bool played[3][3] = {{false}, {false}, {false}};
	cout<<"Player 1 (O): ";
	cin>>player1;
	cout<<"Player 2 (X): ";
	cin>>player2;

	do {
		do {
			cout<<endl<<"\t"<<tris[0][0]<<" | "<< tris[0][1] << " | "<< tris[0][2]<<endl;;
			cout<<"\t---------\n";
			cout<<"\t"<<tris[1][0]<<" | "<< tris[1][1] << " | "<< tris[1][2]<<endl;
			cout<<"\t---------\n";
			cout<<"\t"<<tris[2][0]<<" | "<< tris[2][1] << " | "<< tris[2][2]<<endl<<endl;

			cout<<"E' il turno di "<<player1<<". Inserisci coordinate: ";
			cin>>x>>y;

			if (played[x-1][y-1]) {
				cout<<"Errore, posto gia' occupato.";
				errore = true;
			} else {
				tris[x-1][y-1] = "O";
			}
		} while (errore!=false);
		do {
			cout<<endl<<"\t"<<tris[0][0]<<" | "<< tris[0][1] << " | "<< tris[0][2]<<endl;;
			cout<<"\t---------\n";
			cout<<"\t"<<tris[1][0]<<" | "<< tris[1][1] << " | "<< tris[1][2]<<endl;
			cout<<"\t---------\n";
			cout<<"\t"<<tris[2][0]<<" | "<< tris[2][1] << " | "<< tris[2][2]<<endl<<endl;

			cout<<"E' il turno di "<<player2<<". Inserisci coordinate: ";
			cin>>x>>y;

			if (played[x-1][y-1]) {
				cout<<"Errore, posto gia' occupato.";
				errore = true;
			} else   {
				tris[x-1][y-1] = "X";
			}
		} while (errore!=false);
	} while(end!=true);

	return 0;
}

