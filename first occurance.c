#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "guntur";
    char ch = 'n';
    
    char *res = strchr(str,ch);
    printf("%s",res);
 
}
