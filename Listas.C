#include <stdio.h>
#include <stdlib.h>


typedef struct FUNCTIONARY {
    int age;
    float salary;
    struct FUNCTIONARY *nextFunc;
} functionary;

functionary* createList (functionary func, int age, float salary){
    func.nextFunc = (functionary *) realloc(func.nextFunc, sizeof(functionary));
    
    func.nextFunc->age = age;
    func.nextFunc->salary = salary;
    func.nextFunc->nextFunc = NULL;
    
    return func.nextFunc;

};

void printFunctionary (functionary func){
    
    printf("Idade: %d, Salário: %.2f, próximo: %d\n", func.age, func.salary, func.nextFunc);
    
}

int main(void){
    
    const int FunctionarySize = sizeof(functionary);
    functionary *LISTA = (functionary *) malloc(FunctionarySize);
    LISTA->nextFunc = createList(*LISTA, 18, 1200.0);
    
    functionary* Maxine = LISTA->nextFunc;
    
    printFunctionary(*Maxine);
    
   Maxine->nextFunc = createList(*Maxine, 19, 200.15);
    
    functionary* newFunctionary = Maxine->nextFunc;
    
    printFunctionary(*newFunctionary);
    
    newFunctionary->nextFunc = createList(*newFunctionary, 21, 530.230);
    
    functionary* newFunctionaryTwo = newFunctionary->nextFunc;
    
    printFunctionary(*newFunctionaryTwo);

    return 0;
}
