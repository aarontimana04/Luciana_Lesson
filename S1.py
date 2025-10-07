## Martes python
## Lunes C++

## TIPOS DE DATOS
## 10 | 10.5 | True and False | "Hola, Mundo!" , 'Hola, Mundo'

num = 100 ## tipo int
mochila = "cuaderno y laptop" ## tipo string
num2 = 18.5 ## tipo float
respuesta = True ## tipo booleano
respuesta2 = False ## tipo booleano

##print("Hola, Luciana")
print("") ## salto de linea
##print(mochila)

##print(f"Hola, Luciana {numero}")


## INPUTS AND OUTPUT
## Info de entrada se conoce como INPUTS
## Info que se imprime se conoce como OUTPUTS

## EJEMPLO 1
#nombre = input("ingrese su nombre: ") ## La consola imprime el mensaje y deja escribir una informacion
#print("Hola " + nombre) ## 1era forma (recomendable)
#print("")
#print("Hola ",nombre) ## 2da forma

## EJEMPLO 2

## Realizar un pseudo... que permita hallar el area y el perimetro de un rectangulo
## Datos: largo y ancho
## Calculos: area y perimetro
## Como lo haremos:
## 1. area: largo x ancho
## 2. perimetro: 2xlargo + 2xancho

## Pseudocodigo
## INICIO
##      Leer las variables: largo, ancho
##      area = largo x ancho
##      perimetro = 2xlargo + 2xancho
##      imprimir area, perimetro
## FIN

## CODIGO DEL EJEMPLO 2

## INICIO
##      Leer variables
#largo = int(input("Ingrese el largo: "))
#ancho = int(input("Ingrese el ancho: "))

##      Calculos de area y perimetro
#area = largo * ancho
#perimetro = (2*largo) + (2*ancho)

##      Imprimir area, perimetro
#print(area, perimetro) ## impresion simple
print("")
#print("El area es: ", area) ## impresion con formato
print("")
#print("El perimetro es: ", perimetro)
#print("Valores: " + str(area))

## FIN

## Funcion STR()
## El STR recibe un dato y lo convierte a una cadena, por ejemplo

num1 = 10 ## 10 es de tipo entero (INT)
num2 = str(num1) ## 10 ahora es de tipo cadena (STR o STRING)

var1 = 5
#print(var1*5) ## respuesta = 50
#print(str(var1)*5) ## str(var1) == str(5) == "5" 
                   ## 5 != "5"
                   ## 55555
#print("Hola"*7)

## OPERADORES
## + , - , * , ** , / , // , %

suma = 10 + 11 ## 21
resta = 20 - 10 ## 10
multiplicacion = 5*3 ## 15
potencia = 5**2 ## 25
division = 100/5 ## 20
division_entera = 9//2 ## intuicion = 4.5 -> 4
print(division_entera)
print("")
division_entera2 = 47//10 ## intuicion = 4.7 -> 4 se conoce como piso o floor
print(division_entera2)
print("")
modulo = 30%6 ## 1ero realiza una division = 5 -> el resultado que devuelve es el residuo = 0
print(modulo)
print("")
modulo2 = 150%4 ## 1ero la div = 47 -> 150 / 4 entonces el residuo es 2
print(modulo2)
print("")


## MARTES 14 de 4-6
## estructuras de control (IF and ELSE)
## funciones (DEF)
## bucles (WHILE and FOR)
## diccionarios ({}, [])


## LUNES 2-4
## Basicos de c++
## Estructuras de control (IF and ELSE)
## Arreglos uni (listas, vector)
## Punteros (ptr*, &)
## Arreglos bi (matrices)
