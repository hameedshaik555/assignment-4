
#include <stdio.h>
 #include<stdio.h>
 
copy(int *a,int *b,int n) // using function 
 {
 	int i;
    for(i=0; i<n; i++) loop taken  for all elements from one elemnts 
    {
         
         
    b[i]=a[i];
         
    }
 }
 
 
 print(int a[],int n)
 { int i;
    for(i=0; i<n; i++) here we using all the elemnts from one arry 
    {
         
         
        
            printf("%d ",a[i]);
         
    }
 	
 }
int main()
{
    int a[1000],b[1000],i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    copy(a,b,n);
 
     printf(" first array : ");
    print(a,n);
    
    printf("\nsecond array : "); 
    print(b,n);
 
    
}
