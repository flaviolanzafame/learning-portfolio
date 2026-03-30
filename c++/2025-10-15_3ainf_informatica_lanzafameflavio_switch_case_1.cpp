#include <iostream>
using namespace std;
int main() {
	int voto;
	cout<<"Inserisci il voto."<<endl;
	cin>>voto;
	switch(voto) {
	case 1:
		cout<<"Scarsissimo."<<endl;
		break;
	case 2:
		cout<<"Scarso."<<endl;
		break;
	case 3:
		cout<<"Pessimo."<<endl;
		break;
	case 4:
		cout<<"Insufficiente."<<endl;
		break;
	case 5:
		cout<<"Mediocre."<<endl;
		break;
	case 6:
		cout<<"Sufficiente."<<endl;
		break;
	case 7:
        cout<<"Discreto."<<endl;
        break;
    case 8:
        cout<<"Buono."<<endl;
        break;
    case 9:
        cout<<"Distinto."<<endl;
        break;
    case 10:
        cout<<"Ottimo."<<endl;
        break;
    default:
        cout<<"Voto inesistente."<<endl;
        break;
	}
	return 0;
}