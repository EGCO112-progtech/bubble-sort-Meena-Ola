// selection sort function module in C
void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i=0;i<=n-1;i++){
  sorted=0;
  for(j=0;j<=n-2-i;j++){
    if (a[j]>a[j+1]){
      swap(&a[j],&a[j+1]);
      sorted=1;
    }
  display(a,n);
  }
  if (sorted==0) break;
 }
}

int Isprime(int a){
  int i, check=0;
  if(a<2) check++;
  for (i=2; i<=a-1;i++){
    if (a%i==0) check++;
    }
//  printf("check = %d\n",check);
  if(check!=0) return 0;
  else return 1;
  }

