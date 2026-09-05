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
    int slot_1;
    slot_1 = add(37,89,54);
    int slot_2;
    slot_2 = sub(76,89,51);
    int slot_3;
    slot_3 = multiplication(30,87,24);
    int slot_4;
    slot_4 = division(10,5);
    printf("Here the answer : %d\n", slot_1);
    printf("Here the answer : %d\n", slot_2);
    printf("Here the answer : %d\n", slot_3);
    printf("Here the answer : %d\n", slot_4);
    return 0;

}