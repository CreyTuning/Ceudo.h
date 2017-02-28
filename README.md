# ceudo.h
![Alt text](https://github.com/CreyTuning/ceudo/recursos/imagenes/img.jpg?raw=true "Codigo facil y legible")


## Estructura basica de un programa

	#include "ceudo.h"

	inicio
		escribir("Hola Mundo!")
	fin

## Tipos de datos

	entero		|	Numeros enteros positivos y negativos
	reales		|	Numeros reales con decimales positivos y negativos
	logico		|	Valor logico que puede ser 0 ó 1
	caracter	|	Capaz de almacenar un unico caracter
	cadena		|	Almacena una cadena de cartares

## Declaracion y asignacion de variables

La declaracion de variables siempre debe concluir con un ";" existe el operador "es" 
que sirve para asignarle un valor a la variable en el momento de su declaracion o 
posterior mente, el pude ser sustituido facilmente por u "=" sin ningun problema. 
	
	Enteros
		entero x es 5;
		entero a = 7, b es 3;

	Reales
		real a es 2.6;
		real numero1, numero2 es 10.34, numero3;

	Logicos
		logico A es FALSO;
		logico B es VERDADERO, c es 0;

	Caracteres
		caracter letra es 'a';
		caracter a = 'a', b es 'b';

	Cadenas
		cadena nombre de (60);
		cadena apellido de () es "Romero";
		cadena pedro de () es "pedro", juan de (), daniel de (25);

**El operador "de (cantidad)" se le agrega a las cadenas en el momento de la 
declaracion y resive la cantidad de caracteres que puede almacenar dicha cadena,
si no se agrega dicho operando, la variable sera automaticamente convertida a una
tipo caracter, la cual puede almacenar solo un carater**

## Operadores de asignacion y comparación

	=	|	es
	> 	|	mayor
	<	|	menor
	==	|	igual
	<=	|	menorigual
	>=	|	mayorigual
	!=	|	diferente