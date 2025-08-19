#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int x;
   int i;
   int total = 0;
   double media;
   
   printf("Quantos números você quer fazer a média? \n");
   scanf("%d", &x);
 
   int *arrNumbers = (int *)malloc(x*sizeof(int));
   int *stationArr = arrNumbers;
   
   for(i = 0; i < x; i++){
       fflush(stdin);
       
       printf("Digite o %dº número: ",i+1);
       scanf(" %d", arrNumbers);
       arrNumbers++;
   };
   
   arrNumbers = stationArr;
   
  for(i = 0; i < x;  i++ ){
      printf("O %dº número digitado foi o: %d \n", i+1, *arrNumbers);
      total += *arrNumbers;
      arrNumbers++;
  };
  
  media = (double)total/x;
  
  printf("A média dos números foi: %.2f, o total foi %d e a quantidade foi %d", media, total, x);
  
    return 0;
}
