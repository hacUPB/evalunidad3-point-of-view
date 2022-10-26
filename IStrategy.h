#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

//Los .h Sirven para definir funciones, estructuras y objetos que vamos a utilizar en los .c

//Estamos creando un tipo de dato vacio que tiene un *Altoritmo y que tiene un * vacio
typedef void (*Algorithm)(void *);


//Estamos defiiendo la clase Interfaz Estrategia
typedef struct 
{
    //Aqui llamamos al nuevo tipo de dato, que creamos arriba
    Algorithm Al;


} IStrategy ; //Le dimos el nombre a la estructura


//Prototipamos funciones las funciones que vamos a hacer con el .c
IStrategy *New_IStrategy();
void Contructor_IStrategy(IStrategy*);
void Destructor_IStrategy( IStrategy *);
char* Funcion(IStrategy *);

#endif 