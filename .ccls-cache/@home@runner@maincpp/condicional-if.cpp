#include <iostream>

using namespace = !true;

int main() {
    //Operaciones Logicos 
    bool result = false && true; //Operadores AND &6
    bool result2 = true || true; //Operadores OR ||
    bool result3 = false; //Operador NOT != o depende se usa =!
    cout << result <<"," << result2 << ", " << result3 << "\n\n\n\n";

    //Condicional IF 
    //Caso si tienes la edad para votar 18 maximo 40 años  
    int ege = 0; //Inicializacion en 0 
    cout << "Ingresa tu edad: ";
    cin >> ege; //Para pedir al usuario su edad 
    //Validaciones
    if(ege < 18){
        cout <<"No puedes votar :c";
      }else if (ege > 40){
        cout <<"No puedes votar :c";
      }else{
        cout <<"Puedes votar C:";
      }
  }
    
  
