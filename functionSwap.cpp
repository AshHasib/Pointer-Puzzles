#include<bits/stdc++.h>

using namespace std;


void Swap(int *a,int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=5,b=6;
    printf("a=%d, b=%d\n",a,b);

    printf("Swap by reference. . . \n");

    Swap(&a,&b);

    printf("After swapping. . .\n");

    printf("a=%d, b=%d\n",a,b);
}
