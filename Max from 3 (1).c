#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number one : ");
    scanf("%d",&a);
    printf("Enter number two : ");
    scanf("%d",&b);
    printf("Enter number three : ");
    scanf("%d",&c);
    
    if (a>b && a>c){
        printf("%d A is max",a);
    }
    else if (b>a && b>c){
        printf("%d B is max",b);
    }
    else if (a==b && b==c){
        printf("All are equal");
    }
    
    else{
        printf("%d C is max",c);
    }
}