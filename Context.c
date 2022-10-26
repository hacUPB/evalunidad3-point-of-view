#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"

//Instanciamos la clase 
Context *New_Context()
{   
    //Retornamos el lugar de la memoria en el puntero context del tamaño Context
    return(Context*)malloc(sizeof(Context));
}

//Definimos el constructor de Contex
void Contructor_Context(Context* this,void * strat)
{
    //Entramos al dato Strat que es un Istrategy*
    //Y lo igualamos a la conversion implicita de strat que es un void*
    this->Strat = (IStrategy*)strat;

    //Entramos al nombre y le reservamos el tamaño char[20]
    this->name = malloc(sizeof(char[20]));

    //Le damos a name "ABCDEF"
    strcpy(this->name,"ABCDEF");
}


//Destructor 
void Destructor_Context(Context*this)
{
    //Le damos free al name
    free(this->name);
}

//Seteamos la estrategia que quiero
void SetStrat(Context*this,void *strat)
{
    //Entramos Strat y le damos la conversion implicita de strat que es un void*
    this->Strat = (IStrategy*)strat;
}


//Aqui le decimos que haga algo
void Dosomething(Context*this)
{
    //Entramos al this, le decimos que apunte a Strat y que luego apunte a 'AL'(this->name)
    this->Strat->Al(this->name); 
}