#include <iostream>
using namespace std;

int main() {
  
  cout << "Um INT tem " << sizeof(int) << " bytes" << endl; 
  cout << "Um DOUBLE tem " << sizeof(double) << " bytes" << endl;
  
  int x = 10, y = 30;
  int *px;
  int *py;
  px = &x;
  py = &y;
  cout << "#x: " << px << "#px: " << &px << endl;
  cout << "#y: " << py << "#py: "  << &py << endl;
  cout << "x: " << x << ", x: " << *px << endl;
  cout << *(px + 1) << endl;

  double v[] = {1,4,5,7,9,10};
  double *pv;
  pv = v; // pv = &v[0] - O nome de um array é o endereço de seu primeiro elemento
  int c =0;
  for(double i: v){
    cout << i << " , " << *(pv + c) << endl;
    c++;
  }
  
  void * pz; // ponteiro genérico não tem tipo definido, ou seja, armazena endereço de qualquer tipo
  int z = 50;
  pz = &z;
  //cout << *(pz) << endl; -  ERRO
  //float x = 3.4;
  //cout << (int)X;
  cout << *(int*)pz << endl;

  int* pi_z = (int *)pz; // (int *)pz converte o ponteiro void para inteiro para poder receber o valor de pz
  cout << *(pi_z) << endl;

  //  int* pi_z = (int *)pz; - esta linha
  //  cout << *(pi_z) << endl; - e esta
  //  cout << *(int*)pz << endl; = é a mesma coisa só desta linha, ou seja, as duas linhas acima(40 e 41) podem ser resumidas nesta
  
}