#include<stdio.h>
#define N 7

int main(){
  int T,Die1,Die2;

  T = Die1 + Die2;

  if(T > 7){
    printf("You won\n");
  } else {
    printf("You lost\n");
  }

  return 0;
}
