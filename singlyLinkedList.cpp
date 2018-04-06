#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node *head=NULL;

Node *tail=NULL;

class LinkedList
{
public:


    void Insert(int value)
    {
        Node* ptr=(Node*)malloc(sizeof(Node));
        ptr->data=value;

        if(head==NULL)
        {
            head=tail=ptr;
            ptr->next=NULL;
        }
        else
        {
            tail->next=ptr;
            ptr->next=NULL;
            tail=ptr;
        }
    }

    int Delete(int value)
    {
        Node *loc,*ptr;
        int i=value;

        loc=Search(i);

        if(loc==NULL)
        {
            return -9999;
        }

        if(loc==head)
        {
            if(head==tail)
            {
                head=tail=NULL;
            }
            else
            {
                head=head->next;
            }
            return value;
        }
        //updating the ptr pointer
        for(ptr=head;ptr!=tail;ptr=ptr->next);

        ptr->next=loc->next;

        if(loc==tail)
        {
            tail=ptr;
        }

        return (loc->data);

    }

    Node* Search(int value)
    {
        Node* ptr;

        if(head==NULL)
        {
            return NULL;
        }
        for(ptr=head; ptr!=tail; ptr=ptr->next)
        {
            if(ptr->data==value)
            {
                return ptr;
            }
        }
        if(tail->data==value)
        {
            return tail;
        }
        else return NULL;
    }

    void Display()
    {
        Node*ptr;

        if(head==NULL)
        {
            printf("The list is empty\n");
        }
        else if(head==tail)
        {
            printf("%d\n",head->data);
        }
        else
        {
            printf("List : ");
            for(ptr=head;ptr!=tail;ptr=ptr->next)
            {
                printf("%d\t",ptr->data);
            }
            printf("%d\n",tail->data);
        }
    }
};

int main()
{
    LinkedList myList;

    myList.Insert(5);
    myList.Insert(6);
    myList.Insert(7);


    myList.Display();

    printf("Deleting 5\n");

    myList.Delete(5);

    myList.Display();
}


