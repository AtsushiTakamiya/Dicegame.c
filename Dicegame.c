#include<stdio.h>
#include<stdlib.h>

int main(){
  int Die1,Die2,Die3,T;
  char Name[30];

  printf("What is your name?\n");
  scanf("%s",Name);
  printf("Hello, %s!\n",Name);
  
  printf("Rolling the dice...\n");

  Die1 = rand() % 6 + 1;
  Die2 = rand() % 6 + 1;
  T = Die1 + Die2;

  printf("Die 1: %d\n",Die1);
  printf("Die 2: %d\n",Die2);
  printf("Total Value: %d\n",T);
  
  if(T > 7){
    printf("%s won!\n",Name);
  } else {
    printf("%s lost!\n",Name);
  }

  if(T <= 7){
    printf("One more chance!\n");
    printf("Rolling the dice...\n");
    
    Die3  = rand() % 6 + 1;
    T = T + Die3;
    
    printf("Die 3: %d\n",Die3);
    printf("Total Value: %d\n",T);
    
    if(T > 7){
      printf("%s won!\n",Name);
    } else {
      printf("%s lost!\n",Name);
    }
  }
  
  return 0;
}
