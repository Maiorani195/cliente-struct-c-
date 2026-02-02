#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Cliente {
   string nome;
    string endereco;
    string cep;
    string telefone;
    double orcamento;
};

int main () {
Cliente cliente1;
int opcao;

while ((true)){
cout << "========= Sistema de Cadastro de Clientes ========= \n";
cout << "Digite 1 para cadastrar um novo cliente ou 0 para sair: ";
cin >> opcao;

if (cin.fail()) { // Se o usuário digitou uma letra em vez de número
    cin.clear();  // 1. Reseta o estado de erro do cin
    cin.ignore(1000, '\n'); // 2. Joga fora tudo o que foi digitado de errado
    cout << "Erro: Digite apenas numeros (0 ou 1)!\n";
    continue; // Volta para o início do while
}

if (opcao == 0) {
    cout << "Finalizando o sistema ....  \n";
    break;
}
 if (opcao == 1) {
    

cin.ignore(); // Limpar o buffer do teclado









    cout << " === Cadastro do Cliente ===\n";

cout<< "Digite o nome completo : ";
getline(std::cin, cliente1.nome);


cout<< "Digite o endereco : ";
getline(std::cin, cliente1.endereco);

cout<< "Digite o cep :";
getline( std::cin, cliente1.cep);

cout << "Digite o telefone : ";
getline(std::cin, cliente1.telefone);

cout << "Digite o orcamento : ";
cin >> cliente1.orcamento;

cin.ignore(); // Limpar o buffer do teclado

 

ofstream arquivo_saida;
arquivo_saida.open ("clientes.csv", ios::app);

if (arquivo_saida.is_open ()) {
    arquivo_saida << "nome : " << cliente1.nome << ';';
    arquivo_saida << "endereco : " << cliente1.endereco << ';';
    arquivo_saida <<  "cep : " << cliente1.cep << ';';
    arquivo_saida << "telefone : " << cliente1.telefone << ';';
    arquivo_saida << "orcamento : " << cliente1.orcamento << ';';
    arquivo_saida << "==========================\n";

arquivo_saida.close();

cout << " Cliente cadastrado com sucesso!\n";

}else{
    cout << " Erro ao abrir o arquivo txt.\n";
}








cout << " === Dados do Cliente ===\n";
cout << "==========================\n";
cout << "nome : " << cliente1.nome <<"\n";
cout << "endereco : " << cliente1.endereco << "\n";
cout << "cep : " << cliente1.cep << "\n";
cout <<  "telefone :  " << cliente1.telefone << "\n";
cout << "orcamento : " << cliente1.orcamento << "\n";
cout << "==========================\n";

}
}//while



return 0;
}//main
    