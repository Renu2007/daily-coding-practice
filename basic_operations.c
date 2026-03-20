#include<stdio.h>
int main(){
    int a,b;
    int sum,diffrence,product,remainder;
    float quotient;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diffrence=a-b;
    product=a*b;
    quotient=(float)a/b;
    remainder=a%b;
    printf("addition = %d\n",sum);
    printf("subtraction = %d\n",diffrence);
    printf("multiplication = %d\n",product);
    printf("divison = %.2f\n",quotient);
    printf("modulus = %d\n",remainder);
    return 0;
}
