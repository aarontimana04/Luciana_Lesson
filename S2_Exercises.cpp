// Mostrar tabla de multiplicar
// 1. Enunciado:
// Pide un número y muestra su tabla de multiplicar del 1 al 12.
// Usa un bucle for.






// Calcular factorial de un número
// 2. Enunciado:
// El usuario ingresa un número n, el programa calcula n! (factorial).
// Usa bucle for o while.

// input -> 4
// factorial(4) = 4x3x2x1
//                1x2x3x4

  // factorial(4) = 4x3x2x1
  //                1x2x3x4
  int input1 = 5;
  int resultado = 1;
  for(int i = 1; i<=input1; i++){
    resultado = resultado*i;
    cout<<"!"<<i<<":"<<resultado<<endl;
  }

  cout<<endl; // salto de linea

  
  int k = 1;
  int resultado2 = 1;
  int input2 = 6;
  while(k<=input2){
    resultado2 = resultado2*k;
    cout<<"!"<<k<<":"<<resultado2<<endl;
    k++;
  }

