#include <iostream>
#include <string>

using namespace std;

// FUNCIONES

void suma(int* ptr_1, int* ptr_2){
    cout<<*(ptr_1) + *(ptr_2);
}

// FUNCION PRINCIPAL
int main(){
    // MEMORIA ESTATICA
    // VARIABLES
    int num = 10;
    char letra = 'H';
    string cadena = "Cadena";

    // PUNTEROS PARA LAS VARIABLES
    // & -> amperzant
    int* ptr_num = &num; // puntero te da la direccion de la varible a la que señala
    char* ptr_letra = &letra;
    string* ptr_cadena = &cadena;

    //cout<<ptr_num<<endl; // x66afn00 -> direccion de la variable que apunta ptr_num
    //cout<<*ptr_num<<endl; // 10 -> valor que almacena num
    //cout<<&ptr_num<<endl; // x5613x -> direccion del puntero

    // OPERACIONES
    // SUMA

    int numero1 = 15;
    int numero2 = 10;

    //int* ptr_1;
    //ptr_1 = &numero1;
    //int* ptr_2;
    //ptr_2 = &numero2; // int n = 10; // int* ptr = &n (x3456789wfe)

    // SUMAMOS
    //int suma = 0;
    //suma = *ptr_1 + *ptr_2;
    // suma = 15 + 10
    // suma = 25
    //cout<<suma<<endl;

    // MEMORIA DINAMICA
    //string* ptr_cadena = new string;
    //*ptr_cadena = "Hola, Como estas";


    int* ptr_numero = new int;
    *ptr_numero = 105;

    cout<<*ptr_numero<<endl;

    int* ptr_1 = new int;
    *ptr_1 = 3;

    int* ptr_2 = new int;
    *ptr_2 = 2;

    suma(ptr_1,ptr_2);

    delete ptr_1;
    delete ptr_2;


    return 0;
}
