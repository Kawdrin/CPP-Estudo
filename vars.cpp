#include <iostream>

using namespace std;

int main(){
  // Tipo e Nome;
  // Tipo e Nome = Valor;

  int vidas = 3;  // 10, 25, 30, 1000
  char letra = 'a';  // Uma letra = "B" ou "C"
  double decimal = 2.4999999999999; // 2.499999999999999
  float decimais =  2.4999999999999; // 2.5
  bool start = true; // True ou False
  string nome = "Kawan"; //"Kawan"

  cout << "Digite um número de vidas: ";
  cin >> vidas;
  cout << "Digite uma letra: ";
  cin >> letra;
  cout << "Digite um valor real: ";
  cin >> decimal;

  vidas = 177;

  cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimais << "\n" << start << "\n" << nome << "\n";

  return 0;
}
