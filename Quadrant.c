#include<stdio.h>
int main(){
    int x, y;
    printf("Enter x : ");
    scanf("%d",&x) ;
    printf("Enter y : ");
    scanf("%d",&y) ;
    
    if (x==0 && y==0){
        printf("Origin");
    }
    else if (x>0 && y>0){
        printf("1st Qudrant");
    }
    
    else if (x<0 && y<0){
        printf("3rd Qudrant");
    }
    
    else if (x>0 && y<0){
        printf("4th Qudrant");
    }
    else if (x<0 && y>0){
        printf("2nd Qudrant");
    }
    
    return 0;
    
    
}