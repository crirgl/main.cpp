#include <iostream>

using namespace std;

int main(){
  int numbers[] = {
1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
21, 22,23, 24, 25, 26, 27, 28, 29, 30,
31, 32, 33, 34, 35, 36, 37, 38, 38, 40,
41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
100};

int Limite =sizeof(numbers)/sizeof(numbers[0]);
  for(int i = 0; i < Limite ; i++){
    if(numbers[i]%2==0){
      cout<< numbers[i] << endl;
    }
  }
}