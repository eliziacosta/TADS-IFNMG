#include <iostream>
using namespace std;
int main() {
    int voto;
    int cont_muito_insatisfeito = 0;
    int cont_excelente = 0;
    int total_votos = 0;
    int soma_votos = 0;
        cout<<"Digite o nível da sua satisfação"<<endl
	    <<"[1] Muito insatisfeito"<<endl
	    <<"[2] Insatisfeito"<<endl
	    <<"[3] Mediano"<<endl
	    <<"[4] Bom"<<endl
	    <<"[5] Excelente"<<endl;
        cin >> voto;
    while (true) {
    

        if (voto < 1 || voto > 5) {
            break; 
        }

     
        total_votos++;
        soma_votos += voto;

        if (voto == 1) {
            cont_muito_insatisfeito++;
        } else if (voto == 5) {
            cont_excelente++;
        }
    }

    
    cout << "Total de votos 'muito insatisfeito': " << cont_muito_insatisfeito <<endl;
    cout << "Total de votos 'excelente': " << cont_excelente << endl;

    if (total_votos > 0) {
        double media = static_cast<double>(soma_votos) / total_votos;
        cout << "Média dos votos: " << media <<endl;
    } else {
       cout << "Nenhum voto foi registrado." << endl;
    }

    return 0;
}

