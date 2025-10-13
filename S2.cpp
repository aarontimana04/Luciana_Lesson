#include<iostream>
#include <string>

using namespace std;

int suma1(int a, int b){ 
  return a+b;
}

double suma3(double c, double d){
  return c+d;
}

void suma2(double a, double b){ 
  cout<<a+b;
}

int main(){
  // RESUMEN DE VARIABLES Y FUNCIONES
  
  //int num = 10; // numeros enteros
  //double num2 = 10.5; // numeros decimales
  //bool var = true; // true or false

  int resultado; // variable sin valor
  resultado = suma1(11,20); // suma1 devuelve un valor que debe ser almacenado

  cout<<resultado;
  cout<<" ";
  cout<<1+2+3+4+5+6;//...20

  suma2(30, 40);
  cout<<endl;

  // BUCLES
  // 1.FOR -> TIP: Se usa cuando se conoce la condición donde debemos detenernos
  //int n = 5;
  //int resultado2;
  // for(iterador; condicion; incremeto)
  for(int i = 0; i<5; i++){ // i++ -> i=i+1
    // i = 0 -> momento1
    // se evalua la condición: i<n
    // si se cunple, i aumenta en una unidad
    cout<<i;
    cout<<endl;
  }

  // 2. WHILE -> TIP: Se usa cuando no sabemos con exactitud cuando parar
  cout<<endl;
  int i = 5;
  while(i<10){
    cout<<i<<endl;
    i++;
  }

  cout<<endl;
  int k = 1;
  int resultado10 = 0;
  while(k<=10){
    // en la primera iteración
    // suma = 0
    // k = 1
    resultado10 = resultado10 + k; // suma ahora sera suma + k
    k = k + 1; // luego de haber sumado k a suma
               // actualizamos el valor de k
  }


  // yo quiero suma 1+2+3+4+5+6+7+8+9+10
  // nuestro iterador empieza en 1
  // entonces el resultado será la suma consecutiva de todos esos numeros
  // resultado = 0
  // resultado = 1
  // resultado = 3
  // resultado = 6

  cout<<resultado10<<endl;

  // 3. DO WHILE
  int p = 10;
  do{
  cout<<p<<endl;
    p++; // p = p + 1
  } while(p<4);

  // PUNTEROS
  // Conceptos basicos de punteros

  cout<<endl;
  int upc = 15; // xb234631sd
  double utec = 11.3;

  cout<<upc<<endl; // imprime el valor de 15
  cout<<&upc<<endl; // imprime dirección xb234631sd

  // el puntero señala a una variable y tiene la capacidad de obtener su valor

  int* ptr_upc = &upc;
  // int -> 10, 15, 100
  // int* -> x134basfj, x342nfdn
  // double* ptr_utec = &utec; // x10rtwiuf23
  
  cout<<upc<<endl; // imprime el valor 15
  cout<<ptr_upc<<endl; // imprime la direccion de la variable upc
  cout<<*ptr_upc<<endl; // imprime 15 
  cout<<&ptr_upc<<endl; // imprime la dirección de ptr_upc
  

  

  
  return 0;
}
