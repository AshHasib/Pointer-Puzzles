#include<bits/stdc++.h>

using namespace std;


void printArray(int *A,int N)
{
    printf("Accessing array elements through pointer\n");

    for(int i=0;i<N;i++)
    {
        printf("%d\t",*(A+i));
    }
    printf("\n");
}

int main()
{
    int A[5]={1,2,3,4,5};

    int s=sizeof(A)/sizeof(A[0]);


    printf("Printing the address of the first index of the array:\n");
    printf("%d\n",A);
    printf("Similarly, the next ones\n");
    printf("%d\n",A+1);
    printf("%d\n",A+2);
    printf("%d\n",A+3);
    printf("%d\n",A+4);


    printArray(A,s);

    int *ptr=A; //initializing the pointer with the first index of the array

    printf("Printing the array with a single pointer:");
    int i=0; //
    while(true)
    {
        printf("%d\t",*ptr);
        if(ptr==(A+4)) break;

        ptr++;
    }
    return 0;
}
