## LISTAS
nombres = ["Aaron", "Luciana","Martin"]
numeros = [1,2,3,4]

valor = nombres[2] ## [indice]
print(valor) ## Martin

### METODOS EN LISTAS

##1. append -> agregar al final
notas = [11,15,20,18]
notas.append(15)
print(notas)

##2. extend -> agregar más de un valor al final
notas2 = [11,12,13,11]
notas2.extend([10,9,13,16])
print(notas2)

##3. insert -> agrega en una posicion especifica

notas3 = [10,9,15,17]
notas3.insert(3,19)
print(notas3) ## [10,9,15,19,17]

##4. remove -> eliminar un valor especifico
notas4 = [1,2,3,4,5]
notas4.remove(4)
print(notas4) ## [1,2,3,5]

notas5 = [1,2,2,3,4,5]
notas5.remove(2)
print(notas5) ## [1,2,3,4,5]

notas6 =[10,11,15,17,19,10]
while(True):
    if(10 in notas6):
        notas6.remove(10)
        ## [11,15,17,19,10]
        ## [11,15,17,19]
    else:
        break

print(notas6)

##5. index -> devuelve el indice de un valor
lista1 = [15,11,1,10]
indice = lista1.index(10)
print(indice) ## 3

##6. count -> cuenta las veces que aparece un valor
lista2 =[10,11,15,17,19,10]
repeticiones_diez = lista2.count(10)
print(f"El valor se repite {repeticiones_diez} veces")

lista3 = ["Aaron","Juan","Luciana", "Pepito","Juan","Juan"]
repes_juan = lista3.count("Juan")
repes_luciana = lista3.count("Luciana")
print(f"El valor se repite {repes_juan} veces") ## 3
print(f"El valor se repite {repes_luciana} veces") ## 1

##7. copy -> copia el contenido a otra lista

lista4 = [5,7,8] ## lista4 3 valores
lista5 = lista4.copy() ## lista5 con 3 valores
lista4.remove(5) ## [7,8]
print(lista4) ## [7,8]
print(lista5) ## [5,7,8]

##8. reverse -> invierte los valores en la lista
print("")
lista7 =[1,2,3,4]
lista7.reverse() ## [4,3,2,1]
print(lista7) ## [4,3,2,1]

lista8 = [10,11,12,13,14]
print(lista8[::-1]) ## [14,13,12,11,10]
print(lista8[-1]) ## 14
print(lista8[-2]) ## 13
print(lista8[-5]) ## 10
print(lista8)

##9. pop -> eliminar elemento

lista9 = ["juan","carlos","sofia"]
elemento_eliminado = lista9.pop() ## eliminar el ultimo valor
print(lista9) ## ["juan","carlos"]
print(elemento_eliminado) ## sofia

lista10 = ["aaron","victor","manuel"]

elemento_eliminado2 = lista10.pop(2)
print(lista10) ## ["aaron","victor"]
print(elemento_eliminado2) ## manuel

lista11 = [[1,2,3],[4,5,6],[7,8,9]]

## LAS LISTAS SON MUTABLES (SE PUEDEN MODIFICAR SUS VALORES)
valores = [1,2,3]
valores[1] = 10
print(valores)


## TUPLAS
## NO SON MUTABLES -> INMUTABLES

tupla1 = ("juan", 10, True) ## True -> 1 / False -> 0
print(tupla1[2])

## tupla1[2] = "Hola" ## no esta permitido la modificacion
## print(tupla1)

## index & count

tupla2 = (1,2,3,4)
print(tupla2.index(2))

tupla3 = ("juan","juan","carlos","sebas","sebas")
print(tupla3.count("sebas"))

## Diccionarios -> Es un PAR de (clave:valor)
## JSON para persona
persona = {"nombre":"aaron","apellido":"timana"}

## JSON para un alumno
alumno = {"nombre":"juan","edad":20,"notas":[11,12,15]}
print(alumno["edad"]) ## 20

print(alumno["notas"]) ## [11,12,15]

print(alumno["notas"][1]) ## 12

## MUTABLES -> Se pueden modificar

alumno2 = {"nombre":"pepe","edad":10,"notas":[20,15,18],"nivel":("primaria","5A")}
print(alumno2["notas"]) ## [20,15,18]
print(alumno2["nombre"])
alumno2["nombre"] = "Alonso" ## alumno2 = {"nombre":"Alonso","edad":10,"notas":[20,15,18],"nivel":("primaria","5A")}
print(alumno2["nombre"])
alumno2["notas"][-1] = 20 ## alumno2 = {"nombre":"Alonso","edad":10,"notas":[20,15,20],"nivel":("primaria","5A")}
print(alumno2["notas"]) ## [20,15,20]

print(alumno2)

## agregar y borrar pares (clave:valor)
alumno3 = {"nombre":"carlitos","edad":15,"notas":[11,9,10],"nivel":("secundaria","4C")}
print(alumno3)
alumno3["status"] = "activo" ## agregamos un nuevo par
print(alumno3)
del alumno3["status"] ## eliminamos el par que tiene como clave: status
print(alumno3)

## metodos en los diccionarios
alumno3 = {"nombre":"carlitos","edad":15,"notas":[11,9,10]}
print(alumno3.keys()) ## devuelve las claves
print(alumno3.values()) ## devuelve los valores
print(alumno3.items()) ## devuelve las claves y valores

## como recorrer un diccionario

for clave in alumno3: ## imprimimos claves
    print(clave)

for items in alumno3: ## imprimimos valores
    print(alumno3[items])

for clave, valor in alumno3.items(): ## imprimir claves:valores
    print(clave, valor)
