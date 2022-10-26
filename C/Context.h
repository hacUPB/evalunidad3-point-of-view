#ifndef CONTEXT_H_
#define CONTEXT_H_
//Heredamos el interfaz
#include "IStrategy.h"

//creamos una tipo de dato estructura de nombre Context
typedef struct 
{
    //Instanaciamos un puntero Strat desde la funcion Interfaz
    IStrategy* Strat;
    //Creamos un puntero Nombre
    char* name;

}Context;//Definimos el nombre de la estructura


//Prototipamos las funcoines de nuestra clase en los .c
Context *New_Context();
void Contructor_Context(Context*,void *);
void Destructor_Context(Context*);
void SetStrat(Context*,void *);
void Dosomething(Context*);

#endif