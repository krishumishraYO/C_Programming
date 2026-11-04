#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    float a ,b ,c , root1, root2, discriminant;

    printf("Enter coefficients a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant=(b*b)-(4*a*c);

    if(discriminant>0){
        printf("\nRoots a are real and distinct!\n");
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Root 1 = %.2f \n",root1);
        printf("Root 2 = %.2f \n",root2);
    }
    else if(discriminant==0){
        printf("Roots are real and equal\n");
        root1=(-b)/(2*a);

        printf("Root 1 = %.2f \n",root1);
        printf("Root 2 = %.2f \n", root1);
    }
    else{
        printf("Roots are imaginary\n");
        float real_part= -b/(2*a);
        float imag_part= sqrt(-discriminant)/(2*a);

        printf("Root 1= %.2f + %.2fi \n",real_part,imag_part);
        printf("Root 2= %.2f - %.2fi \n",real_part,imag_part);
    }
    return 0;
}
