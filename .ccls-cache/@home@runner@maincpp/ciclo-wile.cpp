#include <iostream>

using namespace std;

int main ()
{

    //  while(true) {
  //   char respuesta ;
  // cout << "Deseas continuar?"<< endl;
  // cout << "Deseas continuar?" << edl; 
  // cin >> respuesta;
  //if(respuesta == 'y') {
        cout << "bye bye ";
        break;
      }
  //};

  do {
      char respuesta;
      cout << "deseas continuar?" << endl;
      cin >> respuesta; 
        if(respuesta == 'y') {
        cout << "Bye bye";
        break;
    }
  } while(true);
}