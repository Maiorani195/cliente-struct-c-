#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using  namespace std;

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
    vector<Cliente> lista_geral;

while (true) {
cout<<"====Sistema C++ =====\n";
cout<< " 1 Cadastrar novo cliente \n";
cout<< "2 Ler relatorio de clientes \n";
cout << "0 para sair\n";
cin >> opcao;

if (cin.fail()) {
    cin.clear();cin.ignore(1000, '\n');
    cout<< "Erro: digite apenas numeros por favor!\n"; 
    continue;
}

if (opcao == 0){
break;
}
if (opcao == 1 ) {
cin.ignore();
cout<< "nome :"; getline(cin, cliente1.nome);
cout << "telefone :"; getline(cin, cliente1.telefone);
cout<< " endereco :"; getline(cin, cliente1.endereco);
cout << " cep :";  getline(cin, cliente1.cep);
cout << " orcamento : "; cin>> cliente1.orcamento;



ofstream arquivo;
arquivo.open("clientes.csv",ios::app);
if (arquivo.is_open()){

    arquivo<< cliente1.nome <<';'
           << cliente1.telefone <<';'
             << cliente1.endereco <<';'
              <<cliente1.cep << ';'
             << cliente1.orcamento << '\n';
arquivo.close();
cout<< "Sucesso , salvo no HD ";
}
}

else if(opcao==2){
cout << "lendo os arquivos";

ifstream arquivo_leitura;//variavel para leitura
arquivo_leitura.open("clientes.csv");

if (arquivo_leitura.is_open()){   
string nome , telefone , valor_texto , endereco , cep;
Cliente cliente_temporario;// colocamos uma variavel para auxiliar no transporte de informaçoes.
 while (getline(arquivo_leitura, nome, ';')){

getline(arquivo_leitura, telefone, ';');
getline(arquivo_leitura, endereco, ';');
getline(arquivo_leitura, cep,  ';' );
getline(arquivo_leitura, valor_texto );
//Ao inves de darmos cout , vamos guardar na struct temporaria 
cliente_temporario.nome =nome;
cliente_temporario.telefone = telefone;
cliente_temporario.endereco = endereco;
cliente_temporario.cep = cep;

try{
    cliente_temporario.orcamento = stod(valor_texto);
} catch(...){
    cliente_temporario.orcamento= 0.0;
}
lista_geral.push_back(cliente_temporario);

 }


}
arquivo_leitura.close();//fechando arquivo de leitura (variavel)


cout<< "Clientes carregados na memoria";

for ( int i= 0; i< lista_geral.size(); i++){
cout<< "ID" <<i << "|"
<<lista_geral[i].nome << "|"
<< "R$" << lista_geral[i].orcamento <<"\n";
}


}
else{
cout<< "Erro: arquivo nao encontrado";
}
}


return 0;
}

