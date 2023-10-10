#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


class Dependente{
    string nome;
    int cliente_id;


    public:

    Dependente (string _nome, int cli_id ){
        nome = _nome;
        cliente_id = cli_id;

    }
    void setNome(string _nome){
        nome = _nome;
    }
    string getNome(){
        return this->nome;
    }
    void setClienteId(int cli_id){
        cliente_id = cli_id;
    }
    int getClienteId(){
        return cliente_id;
    }
   

};
int id = 0;

class Cliente
{
    string cpf, nome;
    vector<Dependente> listaDependente;


    public:
        Cliente (string _nome, string _cpf){
            nome = _nome;
            cpf = _cpf;
            id++;

        }
        void setCPF(string CPF)
        {
            cpf = CPF;
        }
        void setNome(string Nome)
        {
            nome = Nome;
        }
        string getCPF()
        {
            return cpf;
        }
        string getNome()
        {
            return nome;
        }

        int getId(){
            return id;
        }

        void addDependenteOnArray( Dependente dep){
            listaDependente.push_back(dep);
        }

        void listarDependentes(){
            for( auto dep : listaDependente){
                cout << "Nome: " << dep.getNome() <<endl;
                cout << "cliente id: " << dep.getClienteId() <<endl<<endl;
            }
          

        }
        
};
int main(){

    vector<Cliente> arrayClientes;

    Cliente cliente("manoel", "1111");

    
    Dependente dependente1("maria_manoel",cliente.getId());
    Dependente dependente2("joao_manoel",cliente.getId());

    cliente.addDependenteOnArray(dependente1);
    cliente.addDependenteOnArray(dependente2);

    arrayClientes.push_back(cliente);

    Cliente cliente2("ana", "222");    
    Dependente dependente3("maria_ana", cliente2.getId());
    Dependente dependente4("joao_ana",cliente2.getId());


    cliente2.addDependenteOnArray(dependente3);
    cliente2.addDependenteOnArray(dependente4);
    arrayClientes.push_back(cliente2);


    for(auto &cliente : arrayClientes){
        cout << " ---------------" <<endl;
        cout << cliente.getId()<<endl;
        cout << cliente.getNome()<<endl;
        cout << cliente.getCPF()<<endl;

        cout << endl << "--- Dependentes ---" << endl;
        cliente.listarDependentes();

    }

    return 0 ;
}