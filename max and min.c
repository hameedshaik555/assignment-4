
#include <stdio.h>
 #include <conio.h>
 
 int sumofarray(int a[],int n) // here we use function 
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i]) // check the min index value to another index value 
		  min=a[i];   
		   if(max<a[i]) // checking with max value condtion
		    max=a[i];       
    }
    
    printf("minimum of array is : %d",min);  //print the min
    printf("\nmaximum of array is : %d",max); // print max
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++) // loop for entering from the user 
    {
        scanf("%d",&a[i]);
    }
    sumofarray(a,n);
 
 
    
}
