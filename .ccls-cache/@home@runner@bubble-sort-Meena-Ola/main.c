#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char **argv){ //argc=argument count, argv=argument variable
  int i,j=0,N=argc-1,*a=(int*)malloc(sizeof(int)*N),*prime=(int*)malloc(sizeof(int)*N);
  for(i=0;i<N;i++) {
    a[i]=atoi(argv[i+1]);
//    printf("a[%d]=%d",i, a[i]);
    if(Isprime(a[i])==1){
      prime[j]=a[i];
      j++;
    }
  }
//int main() {
//  int a[N]={3,2,6,7,3,1};
//  int i,j,new_number;
  N=j;
  if(N==0) printf("No prime\n");
  display(prime,N);
  bubbleSort(prime,N); 
   //insertion(a,N);

  // selectionSort(a,N);
  display(prime,N);
}