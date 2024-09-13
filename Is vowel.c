#include<stdio.h>
int main()
{
    char c;
    printf("Enter character : ");
    scanf("%c",&c);
  
    
    if (c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'){
        printf("%c is Vowel",c);
    }
    
    
    else{
        printf("%c is not a Vowel",c);
    }
}    