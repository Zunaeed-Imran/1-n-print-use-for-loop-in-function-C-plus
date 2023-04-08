#include <iostream>
using namespace std;
void num(int a){
  for (int i = 0; i < a; i++){
    cout << i << " ";
  } 
}
int main () {
  int n;
  cout << "enter a number: ";
  cin >> n;

  num(n);  
  return 0;
}