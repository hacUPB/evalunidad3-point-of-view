#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IStrategy.h"

//Creamos una funcion vacia para darle nombre
void __Algorithm_void(void *name)//Es vacio por que el tipo de dato que generamos en el .h es void
{
    //Luego *char y le reservamos a la memoria el espacio de char[20]
    char * result = malloc(sizeof(char[20]));
    
    
    //Luego utilizamos la funcion string copy que primero recibe el lugar donde se va a guardar la copia
    //Y luedo lo que le copiamos
    strcpy(result,"Sin Strat");


    //Luego imprimimos %s (un string), que es lo que haya en ese momento en result
    printf("%s", result);

    //Y luego liberamos la memoria de result
    free(result);
}


//Asi es como se instancia una clase en C
IStrategy *New_IStrategy()
{
    //Hacemos que la funcion retorne un punter que tenga el tamaño de la clase 
    return (IStrategy*)malloc(sizeof(IStrategy));
}

//Creamos una funcion que no retorna nada, que es el constructor del objeto y que ademas recibe un punter This para instanciar
void Contructor_IStrategy(IStrategy* this)
{
    //Al puntero this, le decimos que entre a 'Al' 
    //Y ahi, que coja lo que hay en algoritmo_void
    this->Al = &__Algorithm_void;
}

void Destructor_IStrategy(IStrategy * this)
{
    free(this);
}