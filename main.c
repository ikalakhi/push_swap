#include <stdio.h>
#include <stdlib.h>

struct node
{
    char    *data;
    struct node *link;
};

int main ()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof (struct node));
    head->data = "hello world";
    head->link = NULL;
    printf("%s", head->data);
    return 0; 
}