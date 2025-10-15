// 2. Usar for dentro de una función tipo int.
#include <iostream>
#include <string>
#include <cstdlib> // para generar numeros aleatorios
#include <ctime> // time(nullprt)

using namespace std;

// FUNCIONES
// 1.FUNCIONES VOID
//void nombre_funcion(parametros){
//    cout<<
// }
// 2. FUNCIONES RETORNO
// tipo_dato nombre_funcion(parametros){
//    retorno a+b
// }
int sumar(int a, int b){
    return a+b;
}


void multiplicar(int val1, int val2) { // 4, 3
    for(int a=0; a<val1;a++){
        // a -> 0 y val1 -> 4
        for(int b=1; b<val2;b++){
            cout<<a*b<<" ";
            // 0x1 0x2
            // 1x1 1x2
            // 2x1 2x2
            // 3x1 3x2
        }
        cout<<endl;
    }
}

int ff(int n){ // suma los n primero numeros
    int acumulado = 0;
    // 1 2 3 4 5
    for(int iter = 1; iter<=n; iter++){
        acumulado = acumulado + iter;
        // iter1 -> acumulado = 1
        // iter2 -> acumulado = 3
        // iter3 -> acumulado = 6
        // iter4 -> acumulado = 10
        // iter5 -> acumulado = 15
    }
    
    return acumulado;
}

// 0x1  0x2 0x3 0x4 0x5
// 1x1
// 2x1
// 3x1
// 4x1
// ...
// 10x1


// Una función genera_y_muestra_matriz, que teniendo como parámetro una matriz de 10 x 15, complete la matriz de forma aleatoria con los cuatro tipos de factores como se puede apreciar en la Figura 1 y lo muestre

void generar_y_muestra_matriz(int filas, int columnas){
    srand(time(nullptr)); // semilla
    for(int iter1 = 1; iter1<=filas; iter1++){
        for(int iter2 = 1; iter2<=columnas; iter2++){
            int valor = 1 + rand() % 4;
            cout<<valor<<" "; // entre 1 y 4
            if(valor%2==0){
                cout<<"ES par";
            } else {
                cout<<"Es impar"
            }
        }
        cout<<endl;
        cout<<endl;
    }
}

int main(){
    multiplicar(4,3);
    // 1 2 3 4 5 = 15
    int total;

    total = ff(5);
    cout<<total;


    cout<<endl;
    generar_y_muestra_matriz(10,15);
    return 0;

    
}
