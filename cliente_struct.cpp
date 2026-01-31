#include <iostream>
#include <string>
struct Cliente {
   std::string nome;
    std::string endereco;
    std::string cep;
    std::string telefone;
    double orcamento;
};

int main () {
Cliente cliente1;
int opcao;

while ((true)){
std::cout << "========= Sistema de Cadastro de Clientes ========= \n";
std::cout << "Digite 1 para cadastrar um novo cliente ou 0 para sair: ";
std::cin >> opcao;

if (std::cin.fail()) { // Se o usuário digitou uma letra em vez de número
    std::cin.clear();  // 1. Reseta o estado de erro do cin
    std::cin.ignore(1000, '\n'); // 2. Joga fora tudo o que foi digitado de errado
    std::cout << "Erro: Digite apenas numeros (0 ou 1)!\n";
    continue; // Volta para o início do while
}

if (opcao == 0) {
    std::cout << "Finalizando o sistema ....  \n";
    break;
}
 if (opcao == 1) {
    

std::cin.ignore(); // Limpar o buffer do teclado









    std::cout << " === Cadastro do Cliente ===\n";

std::cout<< "Digite o nome completo : ";
getline(std::cin, cliente1.nome);


std::cout<< "Digite o endereco : ";
getline(std::cin, cliente1.endereco);

std::cout<< "Digite o cep :";
getline( std::cin, cliente1.cep);

std::cout << "Digite o telefone : ";
getline(std::cin, cliente1.telefone);

std::cout << "Digite o orcamento : ";
std::cin >> cliente1.orcamento;

std::cin.ignore(); // Limpar o buffer do teclado

 

std::cout << " === Dados do Cliente ===\n";
std::cout << "==========================\n";
std::cout << "nome : " << cliente1.nome <<"\n";
std::cout << "endereco : " << cliente1.endereco << "\n";
std::cout << "cep : " << cliente1.cep << "\n";
std::cout <<  "telefone :  " << cliente1.telefone << "\n";
std::cout << "orcamento : " << cliente1.orcamento << "\n";
std::cout << "==========================\n";

}
}//while



return 0;
}//main
