#include <iostream>
using namespace std;
int main()
{
    int eta;
    string nome, cognome, validita, accompag;
    cout<<"Inserire il nome." <<endl;
    cin >> nome;
    cout<<"Inserire il cognome." <<endl;
    cin >> cognome;
    cout<<"Inserire l'età." <<endl;
    cin>>eta;
    cout<<"Il documento è valido?"<<endl;
    cin>>validita;
    if (validita=="Sì") {
        cout<<"Il documento è valido."<<endl;
    } else {
        cout<<"Il documento non è valido." <<endl;
        cout<<"Il check-in non può essere completato."<<endl;
        exit;
    }
    if (eta<18) {
        cout<<"Il passeggiero è accompagnato da un adulto?"<<endl;
        cin>>accompag;
    } 
    if (accompag=="Sì")
    {
        cout<<"Il check-in è stato completato."<<endl<<"Le è stato assegnato il posto 12A e il gate B5.";
        } else {
            cout<<"Il check-in non può essere completato."<<endl;
            exit;
        }
return 0;
}