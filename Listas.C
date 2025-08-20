#include <stdio.h>
#include <stdlib.h>


typedef struct FUNCTIONARY {
    int age;
    float salary;
    struct FUNCTIONARY *nextFunc;
} functionary;

functionary* putOnFinal (int age, float salary){
    functionary* func = (functionary *) malloc(sizeof(functionary));
    
    func->age = age;
    func->salary = salary;
    func->nextFunc = NULL;
    
    return func;

};


void putOnStart(functionary* first, functionary* second);

void printFunctionary (functionary func){
    
    printf("Idade: %d, Salário: %.2f, próximo: %d\n", func.age, func.salary, func.nextFunc);
    
}

void printAll(functionary* Start){
    
    functionary *tmp = Start;
    
    while(tmp->nextFunc != NULL){
        printFunctionary(*(tmp->nextFunc));
        tmp = tmp->nextFunc;
    }
}

functionary* deleteList(functionary* LIST){
    
    LIST->nextFunc = NULL;
    
    return LIST;
    
    
}

int main(void){
    
    const int FunctionarySize = sizeof(functionary);
    functionary *LISTA = (functionary *) malloc(FunctionarySize);
    LISTA->nextFunc = putOnFinal(18, 1200.0);
    
    functionary* Maxine = LISTA->nextFunc;
    
    
    
    
    
   Maxine->nextFunc = putOnFinal(19, 200.15);
    
    functionary* newFunctionary = Maxine->nextFunc;
    
    
    newFunctionary->nextFunc = putOnFinal(21, 530.230);
    
    functionary* newFunctionaryTwo = newFunctionary->nextFunc;
   
    printFunctionary(*(LISTA->nextFunc));
    printFunctionary(*(Maxine->nextFunc));
    printFunctionary(*(newFunctionary->nextFunc));
    
    // apenas testando
    
    functionary* armazem;
    
    armazem = newFunctionaryTwo;
    
    newFunctionary->nextFunc = putOnFinal(33, 4200.15);
    functionary* newFunctionaryOne = newFunctionary->nextFunc;
    newFunctionaryOne->nextFunc = armazem;
    
    printf("---------\n");
    
    printFunctionary(*(LISTA->nextFunc));
    printFunctionary(*(Maxine->nextFunc));
    printFunctionary(*(newFunctionary->nextFunc));
    printFunctionary(*(newFunctionaryOne->nextFunc));
    
    printf("--------\n");
    
    printAll(LISTA);
    
    return 0;
    


}
