#include<stdio.h>
int main() {
    int a=0,b=1,c=0,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (c<=n) {
        a=b;
        b=c;
        printf("%d\n",c);
        c=a+b;
    }
}