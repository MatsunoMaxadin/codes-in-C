 #include <stdio.h>
#include <stdlib.h>

typedef struct FUNCTIONARY {
    int age;
    float salary;
    struct FUNCTIONARY *nextFunc;
} functionary;

functionary* createList (functionary *ptr, int age, float salary, int memory){
    ptr = NULL;
    ptr = (functionary *) realloc(ptr, memory);
    
    ptr->age = age;
    ptr->salary = salary;
    
    return ptr;

};

int main(void){
    
    functionary Maxine;
    //Maxine.name[] = "Maxine";
    Maxine.age = 18;
    Maxine.salary = 1200.0;
    int tamanho = sizeof(functionary);
    
    printf(" Idade: %d, Salário: %f \n", Maxine.age, Maxine.salary);
    
    
   Maxine.nextFunc = createList(Maxine.nextFunc, 19, 200.15, tamanho);
    
    printf("Idade: %d, Salário: %f", Maxine.nextFunc->age, Maxine.nextFunc->salary);
    
    return 0;
    


} 
