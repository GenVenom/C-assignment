#include <stdio.h>

int main(){
    int i,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for (i=2;i<=number;i=i+2){
        printf("%d, ",i);
    }
    return 0;
}