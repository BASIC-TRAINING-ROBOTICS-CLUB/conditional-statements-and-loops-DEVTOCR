#include<stdio.h>
int main()
{
    int a;
    printf("Enter number one : ");
    scanf("%d",&a);
  
    
    if (a>0){
        printf("%d is Positive",a);
    }
    else if (a<0){
        printf("%d is negative",a);
    }
    else{
        printf("%d is Zero",a);
    }
}    