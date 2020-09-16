#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int num = 0;
    printf("The size of int is:%d byte", sizeof(num));
    printf("\nThe maximum size for integer num is:%d", INT_MAX);
    printf("\nThe minimum size for integer num is:%d", INT_MIN);
    signed long int dot = 0;
    printf("\nThe size of signed long int is:%d byte", sizeof(dot));
    printf("\nThe maximum size for signed long int is:%d", LONG_MAX);
    //unsigned char var='t';
    //unsigned short int dor=0;
    //short signed int a=0;
    //printf("The memory allocated for unsigned char is:%d byte\n",sizeof(var));
    //signed char tar;
    //int i = printf("The sized of signed char is:%d byte", sizeof(tar));
    //printf("\nThe minimum size of signed char is:%d",CHAR_MIN);
    //printf("\nThe maximum size of signed char is:%d",CHAR_MAX);
    //printf("\nThe maximum size of unsigned char is:%d",UCHAR_MAX);
    //printf("\nThe size of short signed int is:%d byte",sizeof(a));
    //printf("\nThe maximum size of short signed int:%d",SHRT_MAX);
    //printf("\nThe minimum size of short signed int:%d",SHRT_MIN);
    //printf("\nThe size of short signed int:%d byte",sizeof(dor));
    //printf("\nThe maximum size of short unsigned int:%d",USHRT_MAX);


    //float x=5E2F;
    //printf("Value is:%f",x);
    //printf('\a');
    //printf("\\?\n");
    //printf("Whats your name\b");
    //int bs=0;
    //printf("\"Hello" "\"World!\n");
    //printf("\"Hi"  "\"Hello");
    //printf("Hello, I am Vaibhav.\nI'm completing my graduation from Pune.");
    return EXIT_SUCCESS;
}
