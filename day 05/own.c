#include <stdio.h>
int add(int a,int b,int c)
{
    return (a + b +c);
}
int sub(int a,int b,int c)
{
    return (a - b - c);
}
int multiplication(int a,int b,int c)
{
    return (a * b * c);
}
int division(int a,int b)
{
    return (a / b);
}
int main()
{
    int var;
    var = add(37,89,54);
    int far;
    far = sub(76,89,51);
    int iar;
    iar = multiplication(30,87,24);
    int jar;
    jar = division(10,5);
    printf("The question of solution is: %d\n", var);
    printf("The question of solution is: %d\n", far);
    printf("The question of solution is: %d\n", iar);
    printf("The question of solution is: %d\n", jar);
    return 0;

}