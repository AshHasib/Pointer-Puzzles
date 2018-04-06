#include<bits/stdc++.h>
using namespace std;


int main()
{
    //malloc allocates single block
    //calloc allocates multiple blocks


    char *ptr;

    ptr=(char*)malloc(10*sizeof(char));
    ptr=(char*)realloc(ptr,100*sizeof(char));
    if(ptr==NULL)
    {
        printf("Memory allocation error\n");
    }
    else
    {
        strcpy(ptr,"Memory allocation successful");
    }
    printf("%s",ptr);
    free(ptr);

}
