#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Usuario
{
    string cpf, nome, endereco, telefone;

public:
    // Usuario(string CPF,string Nome,string Endereco,string Telefone){
    //     cpf = CPF;
    //     nome = Nome;
    //     endereco = Endereco;
    //     telefone = Telefone;
    // }
    void setCPF(string CPF)
    {
        cpf = CPF;
    }
    void setNome(string Nome)
    {
        nome = Nome;
    }
    void setEndereco(string Endereco)
    {
        endereco = Endereco;
    }
    void setTelefone(string Telefone)
    {
        telefone = Telefone;
    }
    string getCPF()
    {
        return cpf;
    }
    string getNome()
    {
        return nome;
    }
    string getEndereco()
    {
        return endereco;
    }
    string getTelefone()
    {
        return telefone;
    }
};

class Funcionario : public Usuario
{
};
class Cliente : public Usuario
{
    string habilitacao;

public:
    void setHabilitacao(string hablit)
    {
        habilitacao = hablit;
    }
    string getHabilitacao()
    {
        return habilitacao;
    }
};

class Date
{
    int dia, mes, ano;
};
class Aluguel
{
    int id;
    Cliente *cliente;
    Funcionario *funcionario;
    Date dataInicio;
    Date dataTermino;
    Date dataDevolucao;
    float desconto, adicional;
};

vector<Usuario> arrayUsers;
vector<Cliente> arrayClient;
vector<Funcionario> arrayFuncio;

int MenuGeral()
{
    int escolha;

    do
    {
        cout << " 1 - Gerenciar Usuário" << endl;
        cout << " 2 - Gerenciar Fucionário" << endl;
        cout << " 3 - Gerenciar Cliente" << endl;
        cout << " Sua escolha: ";
        cin >> escolha;
        cin.ignore();
    } while (escolha < 0 || escolha > 3);
}

void addUsuarioOnFile(Usuario user)
{
    ofstream outuser;
    outuser.open("users.txt", ios_base::app);
    if (outuser.is_open())
    {
        outuser << user.getNome() << endl;
        outuser << user.getCPF() << endl;
        outuser << user.getTelefone() << endl;
        outuser << user.getEndereco() << endl;
        outuser << " " << endl;
        outuser.close();
    }
    else
    {
        cout << "Error ao abrir o arquivo" << endl;
    }
}
void addFuncOnFile(Funcionario func)
{
    ofstream outFuncionario;
    outFuncionario.open("funcionarios.txt", ios_base::app);
    if (outFuncionario.is_open())
    {
        outFuncionario << func.getNome() << endl;
        outFuncionario << func.getCPF() << endl;
        outFuncionario << func.getTelefone() << endl;
        outFuncionario << func.getEndereco() << endl;
        outFuncionario << " " << endl;

        outFuncionario.close();
    }
    else
    {
        cout << "Error ao abrir o arquivo" << endl;
    }
}

void addClientOnFile(Cliente cliente)
{
    ofstream outCliente;
    outCliente.open("clientes.txt", ios_base::app);
    if (outCliente.is_open())
    {
        outCliente << cliente.getNome() << endl;
        outCliente << cliente.getHabilitacao() << endl;
        outCliente << cliente.getCPF() << endl;
        outCliente << cliente.getTelefone() << endl;
        outCliente << cliente.getEndereco() << endl;
        outCliente << " " << endl;

        outCliente.close();
    }
    else
    {
        cout << "Error ao abrir o arquivo" << endl;
    }
}

void resgataDadosFuncionario()
{
    Funcionario func;
    ifstream arquivo_saida;
    arquivo_saida.open("funcionarios.txt", ios_base::in);

    if (arquivo_saida.is_open())
    {
        string linha1, linha2, linha3, linha4;
        while (arquivo_saida.eof() == false)
        {
            getline(arquivo_saida, linha1);
            getline(arquivo_saida, linha2);
            getline(arquivo_saida, linha3);
            getline(arquivo_saida, linha4);

            func.setNome(linha1);
            func.setCPF(linha2);
            func.setEndereco(linha3);
            func.setTelefone(linha4);

            arrayFuncio.push_back(func);
        }
        arquivo_saida.close();
    }
    else
    {
        cout << "Error ao abrir o arquivo" << endl;
    }
}
void GerenciaFuncionario()
{
    int escolha;

    Funcionario func;
    string cpf, nome, endereco, telefone, habilit;

    do
    {
        cout << endl
             << " 1 - Adicionar Funcionario" << endl;
        cout << " 2 - Listar Funcionario" << endl;
        cout << " 3 - Buscar Funcionario(CPF)" << endl;
        cout << " 4 - Alterar Funcionario" << endl;
        cout << " 5 - Excluir Funcionario" << endl;
        cout << " 0 - Sair" << endl;
        cout << " Sua escolha: ";
        cin >> escolha;
        cin.ignore();
    } while (escolha < 0 || escolha > 5);

    switch (escolha)
    {
    case 1:
        system("clear");

        cout << "Informe o nome: ";
        getline(cin, nome);

        func.setNome(nome);

        cout << "Informe o CPF: ";
        getline(cin, cpf);

        func.setCPF(cpf);

        cout << "Informe o endereco: ";
        getline(cin, endereco);

        func.setEndereco(endereco);

        cout << "Informe o telefone: ";
        getline(cin, telefone);

        func.setTelefone(telefone);

        arrayFuncio.push_back(func);

        addFuncOnFile(func);
        break;

    case 2:

        system("clear");
        cout << "--- Lista de Usuario ---" << endl;

        for (auto &func : arrayFuncio)
        {
            cout << func.getNome() << endl;
            cout << func.getCPF() << endl;
            cout << func.getTelefone() << endl;
            cout << func.getEndereco() << endl
                 << endl;
        }
        break;
    default:
        break;
    }
}
void GerenciaUsuario()
{
    int escolha;

    Usuario user;
    string cpf, nome, endereco, telefone;

    do
    {
        cout << endl
             << " 1 - Adicionar Usuário" << endl;
        cout << " 2 - Listar Usuário" << endl;
        cout << " 3 - Buscar Usuário(CPF)" << endl;
        cout << " 4 - Alterar Usuário(CPF)" << endl;
        cout << " 5 - Excluir Usuário" << endl;
        cout << " 0 - Sair" << endl;
        cout << " Sua escolha: ";
        cin >> escolha;
        cin.ignore();
    } while (escolha < 0 || escolha > 5);

    switch (escolha)
    {
    case 1:
        system("clear");

        cout << "Informe o nome: ";
        getline(cin, nome);

        user.setNome(nome);

        cout << "Informe o CPF: ";
        getline(cin, cpf);

        user.setCPF(cpf);

        cout << "Informe o endereco: ";
        getline(cin, endereco);

        user.setEndereco(endereco);

        cout << "Informe o telefone: ";
        getline(cin, telefone);

        user.setTelefone(telefone);
        arrayUsers.push_back(user);
        addUsuarioOnFile(user);
        break;

    case 2:

        system("clear");
        cout << "--- Lista de Usuario ---" << endl;

        for (auto &usuario : arrayUsers)
        {
            cout << usuario.getNome() << endl;
            cout << usuario.getCPF() << endl;
            cout << usuario.getTelefone() << endl;
            cout << usuario.getEndereco() << endl
                 << endl;
        }
        break;
    default:
        break;
    }
}
void GerenciaCliente()
{
    int escolha;

    Cliente user;
    string cpf, nome, endereco, telefone;

    do
    {
        cout << endl
             << " 1 - Adicionar Cliente" << endl;
        cout << " 2 - Listar Cliente" << endl;
        cout << " 3 - Buscar Cliente(CPF)" << endl;
        cout << " 4 - Alterar Cliente(CPF)" << endl;
        cout << " 5 - Excluir Cliente" << endl;
        cout << " 0 - Sair" << endl;
        cout << " Sua escolha: ";
        cin >> escolha;
        cin.ignore();
    } while (escolha < 0 || escolha > 5);

    switch (escolha)
    {
    case 1:
        system("clear");

        cout << "Informe o nome: ";
        getline(cin, nome);

        user.setNome(nome);

        cout << "Informe o CPF: ";
        getline(cin, cpf);

        user.setCPF(cpf);

        cout << "Informe o endereco: ";
        getline(cin, endereco);

        user.setEndereco(endereco);

        cout << "Informe o telefone: ";
        getline(cin, telefone);

        user.setTelefone(telefone);
        arrayUsers.push_back(user);
        addUsuarioOnFile(user);
        break;

    case 2:

        system("clear");
        cout << "--- Lista de Usuario ---" << endl;

        for (auto &usuario : arrayUsers)
        {
            cout << usuario.getNome() << endl;
            cout << usuario.getCPF() << endl;
            cout << usuario.getTelefone() << endl;
            cout << usuario.getEndereco() << endl
                 << endl;
        }
        break;
    default:
        break;
    }
}

int main()
{
    int escolha;

    resgataDadosFuncionario();
    do
    {
        escolha = MenuGeral();

        switch (escolha)
        {
        case 1:

            GerenciaUsuario();
            break;

        case 2:
            GerenciaFuncionario();
            break;
        case 3:
            GerenciaFuncionario();
            break;
        default:
            break;
        }

    } while (escolha != 0);

    return 0;
}