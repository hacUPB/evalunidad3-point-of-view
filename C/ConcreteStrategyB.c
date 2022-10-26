#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ConcreteStrategyB.h"
#include "Context.h"

//Protipor la funcion Invertir
void Invertir_cadena (char * name);

//Algoritmo B
void __Algorithm_B(void * name)
{
    //Le damos el enunciado del texto 
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");

    //Luego le reservamos la memoria de tamaño char[20]
    char* result = malloc(sizeof(char[20]));

    //Luego guardamos en result lo que haya en nuestro *name
    strcpy(result,(char*)name);

    Invertir_cadena(result);
    //creamos 2 punteros p1 y p2

    //Imprimimo el la cadena de caracteres Result
    /*printf("\n%s", result);*/

    //Liberamos la memoria de result
    free(result);
}

//Creamos una funcion para invertir la cadena de caracteres
void Invertir_cadena (char * result)
{
    //Creamos 2 punteros A y B
    char *A , *B;
    //Convertimos A en el inicio de la cadena
    A = result;
    //Convertimos B en el final de la cadena
    B = result + strlen(result) - 1;
    //Creamos un char que apunta al final de la cadena
    char L = *B ; 
    //Imprimimos un salto de linea para el orden
    printf("\n");


    do 
    {   
        //Creamos un ciclo

        //L es el ultimo caracter de la cadena
        if (L != '\0')  //Si L es diferente de un espacio
        {   
            //Restamos una vez 
            B--;
            //imprimimos el caracter encontrado
            printf("%c", L);
            //Convertimos el ultimo caracter en el final de la cadena
            L = *B;
        }
        else //Si el caracter es '\0' o sea, un espacio
        {
            //Se sigue disminuyendo el puntero hasta encontrar algo que no lo sea para imprimirlo
            B--;
        }
        //El ciclo acaba cuando B es menor que A
    }while(B >= A);
   
}

//La forma de instanciar una clase en C
ConcreteStrategyB *New_ConcreteStrategyB()
{
    //Se retorna el tipo de dato de la funcion, un puntero a la memoria reservada de concrete strategy B
    return (ConcreteStrategyB*)malloc (sizeof(ConcreteStrategyB));
}

//Llamamos al constructor de B
void Contructor_ConcreteStrategyB(ConcreteStrategyB *this)
{
    //Entramos al constructor del Interfaz
    Contructor_IStrategy((IStrategy*)this);

    //Entramos 'AL' y le asignamos el algoritmo B
    this->StratB.Al = __Algorithm_B;
}

//Luego creamos la funcion para destruir los datos de concrete strategy B
void Destructor_ConcreteStrategyB(ConcreteStrategyB*this)
{
    //Entramos al desctructor de el interfaz
    Destructor_IStrategy((IStrategy*)this);
}
