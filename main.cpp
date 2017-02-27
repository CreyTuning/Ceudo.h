#include "ceudo.h"

inicio
	entero num1 es 10, num2 es 5;

	escribir("numero 1: ")
	leer(num1)
	escribir("numero 2: ")
	leer(num2)

	si(num1 mayor num2) escribir("num1 mayor que num2")
	sino(num1 menor num2) escribir("num1 menor que num2")
	no entonces escribir("son iguales")
	fsi
fin