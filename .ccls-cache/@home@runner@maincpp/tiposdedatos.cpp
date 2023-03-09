#include<iostream>

using namespace std;

int main()
{
  short numerito = 1; //enteros 
  int numero = 123; //Enteros 
  long numerote= 123456789; //numerote
  float decpeque = 3.1416; //decimales
  double decGande = 12.3456; //decimales
  char letra = 'E'; //caracter 
  bool logico = true; //logico 

  cout << "La variable short es: " << numerito <<endl;
  cout << "La variable int es: " << numero << endl;
  cout << "La variable long es: " << numerote << endl;
  cout << "La variable float es: " << decPeque << endl;
  cout << "La variable double es: " << decGrande << endl;
  cout << "La variable char es: " << letra << endl;
  cout << "La variable bool es: " << logico << endl; 
  cout << "--------------------" << endl;

  cout << "Dame un nuevo valor para short: "; 
  cin >> numerito;
  cout << "La varible short es: " << numerito << endl;

  cout << "Dameun nuevo valor para char: "; 
  cin >> letra;
  cout << "La varible bool es: " << letra << endl;
}