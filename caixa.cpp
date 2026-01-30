#include <iostream>
//Primeiro Loop com intencao de guardar na memoria , onde ocorre a entrada de dados.
int main() {
    double precos [4];
   for (int i = 0; i<4; i++) {
    std::cout << "Digite o preco do produto  " << (i+1) << ":";
    std::cin >> precos[i];
    

}
    for (int i = 0; i<4; i++) {
        std::cout << " Produto " << (i+1) << " : R$ " << precos[i] << std::endl;
    }

    return 0;
}