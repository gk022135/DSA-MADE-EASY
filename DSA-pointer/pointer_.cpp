#include<stdio.h>
int main()
{
    int arr[]={2,33,4,5,6,7,8},*p;
//%p is used to print base adress of pointer

    p=arr;  //p store base address of arr mean arr[0] address
    printf("01:- %d\n",p); // output is base adress of arr
    printf("02:- %d\n",&p);
    printf("03:- %d\n",arr+1); // output is second adress of arr
    printf("04:- %d\n",*p); // gives value at adress of p
    printf("05:- %d\n",arr);
    printf("06:- %p\n",arr); // also give base adress of arr means address of arr[0]
    printf("07:- %p\n",arr+1); //gives 2nd base adress of arr means address of arr[1]
    printf("08:- %p\n",&arr+1); //gives arr[n] adress of arr means last element ke baad ka adress
    printf("09:- %d\n",*arr=6);  //gives value at addres of (base addres+6*int(4 bit))
    printf("10:- %p\n",&arr);   // adress of pointer *p
    printf("11:- %d\n",&(*p));
    printf("12:- %p\n",&p); // adress of p finding
    printf("13:- %p\n",&(*p));
    printf("14:- %p\n",*(p+1));
    printf("15:- %d\n",*(p+1)); // gives value at index 1
    printf("16:- %d\n",p[1]);// gives value at index 1
    printf("17:- %d\n",1[p]);// gives value at index 1
    printf("18:- %d\n",arr[1]); // gives value at index 1
    printf("19:- %d\n",1[arr]); // gives value at index 1


}