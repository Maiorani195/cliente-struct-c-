 #include <iostream>

 void MostrarMenu() {
    std::cout << "\n==========================\n";
   
    std::cout << " Bem vindo ao sistema de vendas !\n";
   
    std::cout << "==========================\n";    
   
    std::cout << " Digite o valor do produto (ou digite 2 para sair do sistema de vendas) \n";
    
    std::cout << "==========================\n";
   
   
}












void ProcessarPagamento(double ValorPagar){
     int opcao;
    std::cout << "-------- Formas de Pagamento --------" << std::endl;
    
    
    std::cout <<  " 1. A vista no Dinheiro ou Pix ( A vista tem 10% de desconto) "<< std::endl;
    std::cout <<  "--------------------------------------" << std::endl;
    
    std::cout <<  " 2. Cartao de Credito ( Parcelado em ate 3x sem juros)" << std::endl;
    std::cout <<  "--------------------------------------" << std::endl;
    
    std::cout << " Escolha a forma de pagamento: ";
    
    std::cin>> opcao;

if(opcao ==1) {
double ValorcomDesconto = ValorPagar * 0.90;
std::cout << " O valor a pagar com desconto e de : " << ValorcomDesconto << std::endl;  

} else if (opcao ==2) {
    int parcelas;
    std::cout << " Quantas parcelas ( ate 3x sem juros) ? ";
    std::cin >> parcelas; 

double ValorParcelado = ValorPagar / parcelas;
std::cout << " O valor de cada parcela e de : " << ValorParcelado << std::endl;

} else {
    std::cout << " Opcao invalida. Por favor, selecione uma opcao valida. " << std::endl;   



}
}












double ValorProdutoFinal (double valor){

    if (valor <100.0) {
    return valor; // Sem desconto se for menor que 100 R$
    
} else {  
    return valor * 0.80; // 20% de desconto se a compra foir maior ou igual a 100R$)

}

} 
int main () {
    double preco;


    while(true) {
        MostrarMenu();
        std::cin>> preco;


        if (preco == 2)
        { std::cout << " Saindo do sistema de vendas. Obrigado por usar o nosso servico !" << std::endl; 
            break;
        }
    double ValorFinal = ValorProdutoFinal (preco);
    std::cout << " O valor final do produto a se pagar e de : " <<ValorFinal << std::endl;
     
   std::cout << "==========================\n";
    

    if (ValorFinal < preco) {
        std::cout << " Voce recebeu um desconto de 20% na sua compra! " << std::endl;


    }

ProcessarPagamento (ValorFinal);

}
return 0;
}




