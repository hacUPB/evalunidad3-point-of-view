#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_


//Instanciamos el interfaz 
#include "IStrategy.h"

//Defino una clase o tipo de estructura
typedef struct 
{
    //Le doy un tipo de dato que es una estructura, y le doy el nombre estrategia A
    IStrategy StratA;
    //Con estrategia A, puedo entrar al tipo de dato algoritmo 'AL'

} ConcreteStrategyA; //le damos el nombre a la clase


//Prototipar los metodos que va a hacer nuestra clase en el .c
ConcreteStrategyA* New_ConcreteStrategyA();
void Contructor_ConcreteStrategyA(ConcreteStrategyA *);
void Destructor_ConcreteStrategyA(ConcreteStrategyA*);


#endif