#include<stdio.h>
#include <math.h>
int main(){
    int num1, num2;
    char oprt;
    scanf("%d %c %d", &num1, &oprt ,&num2);
    if(num1 <= 1000 && num2 <= 1000){
    switch(oprt){
    case '+':
        printf("%d", num1 + num2);
    break;
    case '-':
    printf("%d" , num1 - num2);
    break;
    case '*':
    printf("%d", num1 * num2);
    break;
    case '/':
    printf("%.2f", (float)num1 /(float) num2);
    break;
    case '%' :
    printf("%.0f", fmod (num1,num2));
    break;
    default:
    printf("Unknown Operator");
}}}
