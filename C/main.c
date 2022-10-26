#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Heradamos todas las clases
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "IStrategy.h"


//Luego creamos el main
int main (void)
{
    //Esta instanciando las clases adentro del main
    IStrategy* Master = New_IStrategy();
    //Llama los constructores para master
    Contructor_IStrategy(Master);

    //Instancia la estrategia A
    ConcreteStrategyA* stratA = New_ConcreteStrategyA();
    //Construye la estrategia A
    Contructor_ConcreteStrategyA(stratA);

    //Instancia la estrategia B
    ConcreteStrategyB* stratB = New_ConcreteStrategyB();
    //Construye la estrategia B
    Contructor_ConcreteStrategyB(stratB);

    //Instancia el contexto
    Context *Master_Context = New_Context();
    //Construye el contexto
    Contructor_Context(Master_Context,stratA);

    //Imprime el primer mensaje
    printf("Client: Strategy is set to normal sorting.");
    //Luego le manda a hacer algo el parametro Master_context
    Dosomething(Master_Context);
    //Separamos las lineas
    printf("\n");

    //Imprimimos el segundo mensaje
    printf("Client: Strategy is set to reverse sorting.");
    //Seteamos la estrategia B y le mandamos los parametros que necesita
    SetStrat(Master_Context,stratB);

    Dosomething(Master_Context);

    Destructor_Context(Master_Context);
    free(Master_Context);
    free(stratA);
    free(stratB);
    free(Master);

    return 0;    
}