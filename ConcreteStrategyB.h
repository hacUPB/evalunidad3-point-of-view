#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_
//Heredamos el interfaz
#include "IStrategy.h"
//Definimos un tipo de dato struct que se llama ConcreteStrategyB
typedef struct 
{
    //Termina de heredar del interfaz y le damos un nombre StratB para entrar a 'AL'
    
    IStrategy StratB;

} ConcreteStrategyB; 
//Se define el nombre del tipo de dato estructura

//Prototipamos las funciones
ConcreteStrategyB * New_ConcreteStrategyB();
void Contructor_ConcreteStrategyB(ConcreteStrategyB*);
void Destructor_ConcreteStrategyB(ConcreteStrategyB*);


#endif