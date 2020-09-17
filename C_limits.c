#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
    int i = 0;/*Similar as signed long int datatype*/
    printf("The size of integer type is:%d", sizeof(i));
    printf("\nThe minimum size of int datatype is:%ld", LONG_MIN);
    printf("\nThe maximum size of integer datatype is:%ld", LONG_MAX);
    printf("\n-------------------------------------------------");
    unsigned short int usi = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(usi));
    printf("\nThe maximum range of datatype is:%hu", USHRT_MAX);
    /*The minimum range of unsigned datatype is 0*/
    printf("\n-------------------------------------------------");
    unsigned long int uli = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(uli));
    printf("\nThe maximum range of datatype is:%u", ULONG_MAX);
    /*The minimum range of unsigned datatype is 0*/
    printf("\n-------------------------------------------------");
    unsigned long long int ull = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(ull));
    printf("\nThe maximum range of datatype is:%llu", ULLONG_MAX);
    /*The minimum range of unsigned datatype is 0*/
    printf("\n-------------------------------------------------");
    signed short int ssi = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(ssi));
    printf("\nThe minimum range of datatype is:%hd", SHRT_MIN);
    printf("\nThe maximum range of datatype is:%hd", SHRT_MAX);
    printf("\n-------------------------------------------------");
    signed long int sli = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(sli));
    printf("\nThe minimum range of datatype is:%ld", LONG_MIN);
    printf("\nThe maximum range of datatype is:%ld", LONG_MAX);
    printf("\n-------------------------------------------------");
    signed long long int slli = 0;
    printf("\nThe size of integer datatype is:%d", sizeof(slli));
    printf("\nThe minimum range of datatype is:%lld", LLONG_MIN);
    printf("\nThe maximum range of datatype is:%lld", LLONG_MAX);
    printf("\n-------------------------------------------------");
    float f = 0;
    printf("\nThe size of float datatype is:%d", sizeof(f));
    printf("\nThe minimum range of datatype is:%e", FLT_MIN);
    printf("\nThe maximum range of datatype is:%e", FLT_MAX);
    printf("\n-------------------------------------------------");
    double d = 0;
    printf("\nThe size of double datatype is:%d", sizeof(d));
    printf("\nThe minimum range of datatype is:%le", DBL_MIN);
    printf("\nThe maximum range of datatype is:%le", DBL_MAX);
    printf("\n-------------------------------------------------");
    long double ld = 0;
    printf("\nThe size of double datatype is:%d", sizeof(ld));
    printf("\nThe minimum range of datatype is:%lf", LDBL_MIN);
    printf("\nThe maximum range of datatype is:%lf", LDBL_MAX);
    printf("\n-------------------------------------------------");
    char ch = 'm';
    printf("\nThe size of datatype is:%d", sizeof(ch));
    printf("\nThe minimum size of character datatype is:%d", CHAR_MIN);
    printf("\nThe maximum size of character datatype is:%d", CHAR_MAX);
    printf("\n-------------------------------------------------");
    unsigned char uch = 0;
    printf("\nThe size of datatype is:%d", sizeof(uch));
    printf("\nThe maximum size of character datatype is:%d", UCHAR_MAX);
    /*The minimum size of unsigned char is 0*/
    printf("\n-------------------------------------------------");



    //double var;
    //printf("The size of the double variable var is:%d",sizeof(var));
    //printf("\nThe maximum size of double variable var is:%le",DBL_MAX);
    //printf("\nThe minimum size of double variable var is:%le",DBL_MIN);
    //long double dor;
    //printf("\nThe size of the long double variable var is:%d",sizeof(dor));
    //printf("\nThe maximum size of double variable var is:%Le",LDBL_MAX);
    //printf("\nThe minimum size of double variable var is:%Le",LDBL_MIN);
    //float var =0.000;
    //printf("The size of float variable var is:%d byte",sizeof(var));
    //printf("\nThe maximum size of float variable var is:%e",FLT_MAX);
    //printf("\nThe minimum size of float variable var is:%e",FLT_MIN);
    //unsigned long long int var=0;
    //printf("The size of unsigned long int var is:%d",sizeof(var));
    //printf("\nThe maximum size of unsigned long long int var is:%llu",ULLONG_MAX);
    //unsigned long int bar=0;
    //printf("\nThe size of unsigned int bar is:%d",sizeof(bar));
    //printf("\nThe maximum size of unsigned long int is:%lu",ULONG_MAX);
    //int num=0;
    //printf("The size of int is:%d byte",sizeof(num));
    //printf("\nThe maximum size for integer num is:%d",INT_MAX);
    //printf("\nThe minimum size for integer num is:%d",INT_MIN);
    //signed long int dot=0;
    //printf("\nThe size of signed long int is:%d byte",sizeof(dot));
    //printf("\nThe maximum size for signed long int is:%d",LONG_MAX);
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
