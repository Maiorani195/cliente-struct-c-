#include <iostream>
double Calculararea (double largura , double comprimento)
{
    return largura * comprimento;
}

int main () {
 double largura;
 std::cout << " Digite a largura da area :";
 std::cin >> largura;
 
 double comprimento;
 std::cout << "Digite o comprimento da area : ";
 std::cin>> comprimento;
    double area = Calculararea (largura , comprimento);
    std::cout << " A area total e de : " << area << " metros quadrados. " << std::endl;

    return 0;

}