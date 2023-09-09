#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void){
    vector <string> alunos;
    vector <float> notas;
    string nome;
    int limiteAlunos;
    float nota;

    cout <<"Quantos alunos deseja informar: ";
    cin >> limiteAlunos;
    
    // não sei pq não funciona, para não danificar minha maquina e minha saúde, parei por aqui ...
    for(int i = 0; i < limiteAlunos; i++){
        cout << "Informe o nome do aluno : ";
        getline(cin, nome);
        alunos.push_back(nome);

        for(int j = 0; j < 2; j++){
            cout << "Informe a nota " << j + 1 << " do aluno " << i + 1 ;
            cin >> nota;
            notas.push_back(nota);
            cout << endl;
        }
        
    }


    cout << endl;
    cout << "Alunos: " << endl;
    cout << endl;

    
    for(auto it = alunos.begin(); it != alunos.end(); it++){
        cout << *it << endl;
    }

     
    for(auto it = notas.begin(); it != notas.end(); it++){
        cout << *it << endl;
    }

   
    return 0 ;
}