#include <iostream>
#include <string>
#include <vector>

using namespace std;

// FUNCIONES

void suma(int* ptr_1, int* ptr_2){
    cout<<*(ptr_1) + *(ptr_2);
}

void llenar_lista(int* lista, int cantidad){
    for(int i = 0; i<cantidad; i++){
        lista[i] = i+5;
        // *(lista + i) = i + 5;
    }
}

void mostrar_lista(int* lista, int cantidad){
    for(int i = 0; i<cantidad; i++){
        cout<<lista[i]<<" ";
        //cout<<*(lista + i);
    }
}

void llenar_vec(vector<int>& vec1){  // ✓ REFERENCIA &
    for(int i = 0; i<vec1.size();i++){
        vec1[i] = i+1;
    }
}

void llenar_vec2(vector<int>& vec1){  // ✓ REFERENCIA &
    for(int i = 0; i<vec1.size();i++){
        vec1.push_back(i);
    }
}

// begin y end
void llenar_vec3(vector<int>& vec1){  // ✓ REFERENCIA &
    for(int i = 0; i < vec1.size(); i++){  // ✓ NO MODIFICAR MIENTRAS RECORRES
        vec1[i] = 10 + i;
    }
}

void print_vec(vector<int> vec1){
    for(int i = 0; i<vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }
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

    //cout<<*ptr_numero<<endl;

    int* ptr_1 = new int;
    *ptr_1 = 3;

    int* ptr_2 = new int;
    *ptr_2 = 2;

    //suma(ptr_1,ptr_2);
    //cout<<endl;

    delete ptr_1;
    delete ptr_2;

    // ARRAYS
    int lista1[] = {1,2,3,4};
    //cout<<lista1[2]<<endl; // lista[indice del valor al que queremos acceder]

    int* ptr_lista = new int[4]; // ptr_lista = x1234560
    *(ptr_lista + 0) = 10; // [10]
    *(ptr_lista + 1) = 20; // [10,20]
    *(ptr_lista + 2) = 40; // [10,20,40]
    *(ptr_lista + 3) = 30; // [10,20,40,30]
    
    //cout<<ptr_lista[3]<<endl; // 30

    // 1ERA FORMA
    int* ptr_lista2 = new int[20]; // reservamos espacio para 20 valores, indices:(0,19)

    for(int i = 0; i<20; i++){
        *(ptr_lista2 + i) = i*10;
        // [0,10,20,30,40,...,190]
    }

    cout<< *(ptr_lista2 + 0)<<" ";
    cout<< *(ptr_lista2 + 1)<<" ";
    cout<< *(ptr_lista2 + 2)<<" ";
    cout<< *(ptr_lista2 + 3)<<" ";
    cout<< *(ptr_lista2 + 4)<<" ";

    cout<<endl;
    
    for(int i=0; i<20; i++){
        cout<<*(ptr_lista2 + i)<<" ";
    }

    delete [] ptr_lista2;

    cout<<endl;

    // 2DA FORMA ARRAYS
    cout<<"Segunda forma"<<endl;
    int* lista_edad = new int[10];
    llenar_lista(lista_edad, 10);


    mostrar_lista(lista_edad, 10);

    delete [] lista_edad;


    /*
    void leer_datos(int * edades ,int N)
{    for(int i=0;i<N;i++) //el índice empieza en 0
	{  cout<<"Ingrese Edad " << i+1 <<" : ";
	   cin>>edades[i]; //ingreso de datos
	}
}

void imprimir_datos(int * edades ,int N)
{    for(int i=0;i<N;i++) 
	  cout<< edades[i]<<' '; 	
     cout<<endl;
}


    */

    return 0;
}
