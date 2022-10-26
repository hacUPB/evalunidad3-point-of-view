#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyA.h"
#include "Context.h"

//Vamos a crear un algoritmo A que no retorne nada y que reciba un puntero void nombre
void __Algorithm_A(void * name)
{
    //Le vamos a imprimir el mensaje que dice el codigo
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");

    //Luego vamos crear una variable para darle un nombre 
    char *result = malloc(sizeof(char[20]));

    //Luego le copiamos el nombre y lo guardamos en result
    strcpy(result,(char*)name);

    //Luego imprimimos result, que es el  name
    printf("\n%s", result);

    //Y luego liberamos result
    free(result);
}


//Esta es la forma de instanciar una clase en C
ConcreteStrategyA *New_ConcreteStrategyA()
{
    //Retornamos un puntero al que le reservamos el tamaño de concretestrategyA
    return (ConcreteStrategyA*)malloc (sizeof(ConcreteStrategyA));
}

//Definimos el constructor de la estrategia A, que sea vacio y que reciba un tipo de estructura * y le damos el nombre this
void Contructor_ConcreteStrategyA(ConcreteStrategyA *this)
{
    //Llamamo al constructor de el interfaz
    Contructor_IStrategy((IStrategy*)this);

    //el puntero this, entra a StratA y este llama a 'AL'
    this->StratA.Al = __Algorithm_A;
}

//Una funcion que no retorna nada, recibe una estructura y le da un puntero 'this'
void Destructor_ConcreteStrategyA(ConcreteStrategyA*this)
{
    //De momento no se esta liberando memoria.
    Destructor_IStrategy((IStrategy*)this);
}