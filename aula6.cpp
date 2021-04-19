#include <iostream>

using namespace std;

int vida, muni; // Variáveis Globais

int main(){

  // Operadores Matemáticos: + - / * % ()

  int n1, n2; // Variáveis Locais
  vida = 10;
  muni = 100;
  n1 = 5;
  n2 = 9;

  cout << "Soma: " << vida+muni+n1+n2 << "\n";
  cout << "Subtrair: " << (vida+muni+n1)-n2 << "\n";
  cout << "Multiplicação: " << (vida+muni+n1)*n2 << "\n";
  cout << "Divisão: " << (vida+muni+n1)/n2 << "\n";
  cout << "Resto: " << (vida+muni+n1)%n2;
  return 0;
}
