#include <stdio.h>
#include <stdlib.h>

typedef struct FUNCTIONARY {
    int age;
    float salary;
    struct FUNCTIONARY *nextFunc;
} functionary;

functionary* createList (functionary func, int age, float salary, int memory){
    func.nextFunc = (functionary *) realloc(func.nextFunc, memory);
    
    func.nextFunc->age = age;
    func.nextFunc->salary = salary;
    func.nextFunc->nextFunc = NULL;
    
    return func.nextFunc;

};

void printFunctionary (functionary func){
    
    printf("Idade: %d, Salário: %.2f, próximo: %d\n", func.age, func.salary, func.nextFunc);
    
}

int main(void){
    
    functionary Maxine;
    //Maxine.name[] = "Maxine";
    Maxine.age = 18;
    Maxine.salary = 1200.0;
    Maxine.nextFunc = NULL;
    int tamanho = sizeof(functionary);
    
    printFunctionary(Maxine);
    
    
   Maxine.nextFunc = createList(Maxine, 19, 200.15, tamanho);
    
    functionary* newFunctionary = Maxine.nextFunc;
    
    printFunctionary(*newFunctionary);
    
    newFunctionary->nextFunc = createList(*newFunctionary, 21, 530.230, tamanho);
    
    functionary* newFunctionaryTwo = newFunctionary->nextFunc;
    
    printFunctionary(*newFunctionaryTwo);
    
    
    
    
    return 0;
    


}
