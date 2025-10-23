#include <iostream>
#include <string>
#include <vector>
using namespace std;


void llenar_vec(vector<int>& vec1){ // REFERENCIA &
    for(int i = 0; i < vec1.size(); i++){
        vec1[i] = i + 1;
    }
}

void llenar_vec2(vector<int>& vec1, int dim_vec){ // REFERENCIA &
    for(int i = 0; i < dim_vec; i++){
        vec1.push_back(i); // agregamos al final
    }
}

void print_vec(vector<int> vec1){
    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
}

void print_vec2(vector<string> vec1){
    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
}

int main(){

    // VECTORES (Coleccion de datos, similar a un array o lista)

    vector<int> vec_num = {11,40,30,10}; // creo un vector con 4 numeros
    
    vector<string> vec_strings(5); // reservo espacio para 5 strings
    //vec_strings[0] = "Hola";
    //vec_strings[1] = "Hola";
    //vec_strings[2] = "Hola";
    //vec_strings[3] = "Hola";
    //vec_strings[4] = "Hola";
    // Ventaja frente a lista[] o array[]
    // OPERACIONES:
    // vec_string = []
    // PUSH -> agrega un elemento al final del vector
    vec_strings.push_back("Peru"); // vec_strigs = ["Peru"]
    vec_strings.push_back("Argentina"); // vec_strings = ["Peru", "Argentina"]
    vec_strings.push_back("Chile"); // ["Peru", "Argentina", "Chile"]
    
    // POP -> elimina un elemento al final del vector

    vec_strings.pop_back(); // ["Peru", "Argentina"]
    // SIZE, EMPTY, CLEAR
    // SIZE -> Cuando quieres saber la dimension del vector
    vec_strings.size(); // imprime el valor de 5

    // EMPTY -> Te permite saber si tienes elemento en tu vector
    bool aws = vec_strings.empty(); // True o False

    // CLEAR -> Eliminar todos los elementos del vector
    vec_strings.clear(); // vec_strigns = []

    // EMPLACE

    // vec_strings[5] -> 0 <= indice <= 4
    // BEGIN
    // vector.begin() -> referencia al inicio del vector
    // END
    // vector.end() -> referencia al final del vector
    vec_strings.emplace(vec_strings.begin(),"Colombia");// emplace(indice, elemento)
    // [Colombia, Peru, Argentina]


    vector<int> vec1(5);
    cout<<vec1.size()<<endl;
    llenar_vec(vec1);
    print_vec(vec1);
    cout << endl;

    vector<int> vec2;  // Vector vacío -> []
    cout<<vec2.size()<<endl;
    llenar_vec2(vec2, 5); // [0,0,0,0,0]
    print_vec(vec2);
    cout << endl;
    

    print_vec2(vec_strings);
    return 0;
}
