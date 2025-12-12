#include <stdio.h>
#include <math.h>
int main(){

    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("This is even: %d\n", a);
    }
    else
    {
        printf("This n0 is odd: %d\n", a);
    }
    return 0;
}
