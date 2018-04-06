#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a=4;
    int b=5;

    int *ptr=&a;
    int *ptr2=&b;

    printf("This is the address of the variable a :%d\n",ptr);
    printf("This is the value of a accessed through a pointer :%d\n",*ptr);



    printf("This is the address of the variable b :%d\n",ptr2);
    printf("This is the value of b accessed through a pointer :%d\n",*ptr2);

    printf("Now lets have a swapping operation. . .\n");

    int *temp=ptr;
    ptr=ptr2;
    ptr2=temp;

    printf("Now ptr is carrying : %d\n",*ptr);

    printf("And ptr2 is carrying: %d\n",*ptr2);

    return 0;
}
