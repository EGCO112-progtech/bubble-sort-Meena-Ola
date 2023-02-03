// selection sort function module in C
void display(int a[],int n)
{
  int i;
  for(i=0;i<n;i++) printf("%5d",a[i]);
  printf("\n");
  
}

void swap(int *a,int *b)
{
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m=data[0], mi=0; //m=minimum
  for(j=0;j<length-1;j++)
  {
//    m=data[j];
    mi=j;
	  for(i=j+1;i<length;i++)
    {
      if(data[mi]>data[i])
      {
        data[mi]=data[i];
        mi=i;
      }
    }
  swap(&data[j], &data[mi]);
	printf("Minimum is %d\n", m);
  display(data,length);
  }
} 

void insertion(int a[],int n)
{
  int i,j;
  for(i=1;i<n;i++)
  {
    int value=a[i];
    for(j=i-1;j>=0; j--)
    {
      if(a[j]>value) a[j+1]=a[j];
      else break;
      display(a,n);
    }
    a[j+1]=value;
    display(a,n);
    printf("\n");
  }
  display(a,n);
}

void bubbleSort(int a[],int n)
{
  int i,j;
  int sorted; // How may pair to compare?
  for(i=0;i<=n-1;i++)
  {
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

int Isprime(int a)
{
  int i, check=0;
  if(a<2) check++;
  for (i=2; i<=a-1;i++)
  {
    if (a%i==0) check++;
  }
//  printf("check = %d\n",check);
  if(check!=0) return 0;
  else return 1;
}

