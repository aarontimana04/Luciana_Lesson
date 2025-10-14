#include<iostream>
#include <string>

using namespace std;

void cantidad_pares(int limite){
  int cantidad = 0;
  for(int i = 1; i<= limite; i++){
    if(i%2 == 0){
      cantidad++;
    }
  }
  
  cout<<"Los valores pares entre 1 y "<<limite<<" es "<<cantidad<<endl;
}



int main(){ 
  // matrices
  int columnas = 4;
  int filas = 4;
  for(int i = 0; i<filas; i++){
    for(int j = 0; j<columnas; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }

  // EL PRIMER FOR:
  // i = 0 -> EL 2DO FOR SE EJECUTA
  // DENTRO DEL 2DO FOR PASAN COSAS
  // 
  // i = 0 -> [0,1,2,3]
  // i = 1 -> [0,1,2,3]
  // i = 2 -> [0,1,2,3]
  // i = 3 -> [0,1,2,3]
  cout<<endl;
  /*
  for(int iter1 = 1; iter1<=5;iter1++){
    for(int iter2 = 1; iter2<4; iter2++){
      cout<<iter1*2<<" ";
      // bajamos, ya no hay nada más
      // entonces salimos del for chiquito
    }
    // bajamos, ya no hay nada más
    // entonces salimos del for grande
  }
  */
  // iteraciones de for anidado
  // iter 1 = 1 -> for2 -> iter2 = 1,2,3
  // iter 1 = 2 -> for2 -> iter2 = 1,2,3

  // iter 1 -> 2 2 2      
  // iter 2 -> 4 4 4
  // iter 3 -> 6 6 6
  // iter 4 -> 8 8 8
  // iter 5 -> 10 10 10

  // input es n
  // voy a calcular los valores pares que hay entre 1 hasta n
  // ejemplo:  n -> 5
  // 1,2,3,4,5 -> la cantidad de numeros pares entre 1-5 es 2
  

/*
  for(iterador, condicion, incremento){
    se ejecuta todo lo que esta aqui
      esto esta entre llaves
  }

  for(int i = 0; i<3;i++){
    // 1era iteración -> i = 0
    // se cumple la condicion? sí
    cout<<i<<endl; // entonces se imprime
    // el iter aumenta en 1
    // ahora i = 1
    // 2da iteración -> i =1
  }

*/

  cantidad_pares(10);
  
  return 0;
}
