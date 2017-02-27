#include <stdio.h>
//#include <conio.h>
//#include <windows.h>
#include <string.h>
#include <iostream>

//void FScolor(char x[]);

//ESTRUCTURAS
#define inicio int main(int argc,char *argv[]){
#define fin return 0; }
#define INICIO int main(int argc,char *argv[]){
#define FIN return 0; }

//TIPOS DE DATOS
#define entero int
#define real float
	#define largo long
	#define corto short
#define logico bool
#define caracter char
#define cadena char
	#define de(x) [x];

//FUNCIONES
#define escribir(x) std::cout<<x;
#define leer(x) std::cin>>x;

//FACILIDADES
#define es =
#define igual ==
#define mayor >
#define menor <

//ACCIONES
//#define parar getch();

//DECORAR
//#define Scolor(x) FScolor(x);

//CONDICIONALES
#define si(x) if(x)
#define sino(x) else if(x)
#define no else
#define entonces {
#define fsi }
#define fsino }
#define fsino }

//FUNCIONES
/*void FScolor(char x[])
{
	if (strcmp(x,"") == 0 || strcmp(x,"normal") == 0)
	{
		system ("color");
	}

	else if (strcmp(x,"hacker") == 0)
	{
		system ("color 0a");
	}
	else
	{
		char command[99] = "color ";
		strcat(command, x);
		system(command);
		puts(command);
	}
}*/