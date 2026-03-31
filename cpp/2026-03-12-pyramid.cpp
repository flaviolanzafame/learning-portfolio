#include <iostream>
using namespace std;
int main() {
	int base;
	cout<<"Inserisci la base della piramide: ";
	cin>>base;
	cout<<'\n';
	for(int riga=1; riga<=base; riga++) {
		for(int mattone=1; mattone<=riga; mattone++) {
			cout<<mattone<<" ";
		}
		cout<<endl;
	}
	return 0;
}