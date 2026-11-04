#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    float k;
    printf("Please enter the two numbers you want to perform calculation on: \nEnter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    printf("Please enter the action to perform: \n1 for Addition \n2 for Subtraction \n3 for multiplication \n4 for Division \nInput: ");
    scanf("%f", &k);

    if (k == 1){
    printf("Solution: %f", n1+n2);
    }
    else if(k == 2){
    printf("Solution: %f", n1-n2);
    }
    else if (k == 3){
    printf("Solution: %f", n1*n2);
    }
    else if (k == 4){
    printf("Solution: %f", n1/n2);
    }
    else{
    printf("Sorry, Invalid input");
    }
    return 0;
}
