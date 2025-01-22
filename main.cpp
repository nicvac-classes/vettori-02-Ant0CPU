#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, i(0);
    string v;
    cout<<"Inserire il numero degli studenti"<<endl;
    cin>>N;

    vector<string>nome (N);
    vector<float>voto(N), ass(N);
    
    for (i=0; i<N; i++) {
        cout<<"Nome"<<endl;
        cin>>nome[i];
        
        cout<<"Voto"<<endl;
        cin>>voto[i];

        cout<<"Numero di assenze"<<endl;
        cin>>ass[i];
    }
    //Visualizzazione elementi

    cout<<"Nomi: ";
    for (i=0; i<N; i++) {
        cout<<""<<nome[i]<<"; ";
    }
    cout<<endl;
    

    cout<<"Voti: ";
    for (i=0; i<N; i++) {
        cout<<" +"<<voto[i]<<"; ";
    }
    cout<<endl;

    cout<<"Numero di assenze: "<<endl;
    for (i=0; i<N; i++) {
        cout<<""<<ass[i]<<"; ";
    }
    cout<<endl;

    //Visualizzazione i-esimo studente
    
    cout<<"Dammi il numero dello studente, io ti mostrerò nome, voto e assenze"<<endl;
    cin>>i;
    cout<<"Studente numero "<<i+1<<";"<<endl;
    cout<<"Nome: "<<nome[i]<<";"<<endl;
    cout<<"Voto: "<<voto[i]<<";"<<endl;
    cout<<"Numero di assenze: "<<ass[i]<<";"<<endl;

    //Visualizzazione dal nome dello studente

    cout<<"Dammi il nome dello studente, io ti mostrerò voto e assenze"<<endl;
    cin>>v;

    i=0;
    while (v!=nome[i]) {
        i=i+1;
    }

    cout<<"Voto: "<<voto[i]<<";"<<endl;
    cout<<"Numero di assenze: "<<ass[i]<<";"<<endl;
}