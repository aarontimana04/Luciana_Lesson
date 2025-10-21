## ESTRUCTURAD DE CONTROL
### IF - ELSE
numero = 10
##if(numero>=18):
##  print("Es mayor de edad")
##else:
##  print("Es menor de edad")

### ELIF

##valor = 20
## 2, 4, 5


##if(valor%3==0):
##  print("Multiplo de 2")
##elif(valor%4==0):
##  print("Multiplo de 4")
##elif(valor%5==0):
##  print("Es multi de 5")
##else:
##  print("No es multiplo de 2,4,5")

## BUCLES
### FOR
for i in range(1,11):
  print(i,end=" ")

print("")
for i in range(1,22,2):
  print(i, end=" ")
print("")
for i in range(1,11):
  if(i%2 == 0):
    print(f"Es multi de 2: {i}")

### WHILE
print("")

inicio = 1
fin = 10
while(inicio<=fin):
  print(inicio)
  inicio = inicio + 1

print("Mensajito")

### FUNCIONES
def multiplicar(valor1, valor2):
  resultado = valor1*valor2
  return resultado


print("")
print(multiplicar(10,5))## 50

v1 = 5
v2 = 3
print("")
print(multiplicar(v1,v2))## 15

### ARREGLOS Y DICCIONARIOS
lista_numero = [10,12,4,5,1]
print(lista_numero[4])

print("")
for numero in lista_numero:
  if(numero%5==0):
    print(numero)

## [10,12,4,5,1]
lista_numero[2] = 25

print("")
for elemento in lista_numero:
  print(elemento)

## [10,12,25,5,1]
## lista_numero[5] = 10
lista_numero.append(10)


## [10,12,25,5,1,10]
print("")
for elemento in lista_numero:
  print(elemento)



