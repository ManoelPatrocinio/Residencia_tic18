#include <iostream>
#include <string>

using namespace std;
/*
    Exercício 4: Criando outro programa básico
        Crie um arquivo chamado meuprog2.cpp contendo um programa que peça ao
        usuário 2 números inteiros, A e B, e mostre na tela a soma, subtração, multiplicação,
        divisão e resto da divisão desses números.

*/

/*
Exercício 4: 

int main(void){
    string nome_do_usuário ;
    int numero1, numero2;

    cout << "Olá, Bem-vindo ao Result Operation " << endl;
    cout << "Vamos começar ... " << endl;
    cout << endl;

    cout << "Informe um número inteiro, ou sejá, sem ponto ou vingulas: ";
    cin >> numero1;

    cout << "Agora informe outro número inteiro: ";
    cin >> numero2;
    cout << endl;

    cout << "O resultado das 5 operações  usando os números " << numero1 << " e " << numero2 << " são:" << endl;
    cout << endl;

    cout << "   Soma: " << numero1 + numero2 << endl;
    cout << "   Subtração: " << numero1 - numero2 << endl;
    cout << "   Multiplicação: " << numero1 * numero2 << endl;
    cout << "   Divisão: " << numero1 / numero2 << endl;
    cout << "   Resto: " << numero1 % numero2 << endl;


    return 0;
}
*/


// Exercício 5: 


int main(void){
    string nome_do_usuário ;
    float numero1, numero2, re;

    cout << "Olá, Bem-vindo ao Result Operation " << endl;
    cout << "Vamos começar ... " << endl;
    cout << endl;

    cout << "Informe um número inteiro, ou sejá, sem ponto ou vingulas: ";
    cin >> numero1;

    cout << "Agora informe outro número inteiro: ";
    cin >> numero2;
    cout << endl;

    cout << "O resultado das 5 operações  usando os números " << numero1 << " e " << numero2 << " são:" << endl;
    cout << endl;
    re = numero1 + numero2; 
    cout << "   Soma: " << re << endl;
    cout << "   Subtração: " << numero1 - numero2 << endl;
    cout << "   Multiplicação: " << numero1 * numero2 << endl;
    cout << "   Divisão: " << numero1 / numero2 << endl;

    return 0;
}

