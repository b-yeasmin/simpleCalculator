#include<stdio.h>
#include<math.h>
int main(){
    float n1,n2,power;
    char op;

    printf("Enter first operands :");
    scanf("%f",&n1);
    printf("Enter an operator to perform (+,-,*,/,%) :");
    scanf(" %c",&op);
    printf("Enter second operands :");
    scanf("%f",&n2);

    switch (op)
    {
    case '+' :
        printf("%.2f\n",n1+n2);
        break;
    case '-' :
        printf("%.2f\n",n1-n2);
        break;
    case '*' :
        printf("%.2f\n",n1*n2);
        break;
    case '/' :
        printf("%.2f\n",n1/n2);
        break;
    case '^' : power = pow(n1,n2);
         printf("%.2f\n",power);
         break;
    default :
        printf("Not a valid operator\n");
    }
 }

