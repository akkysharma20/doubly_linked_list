#include"linklist.h"
#include<stdio.h>
void display(Node *start)
{
  Node *p;
  if(start==NULL)
  {
    printf("the list is empty\n");
  }
  p=start;
  printf("the list is:\n");
  while (p!=NULL)
  {
    printf("%d\t",p->info);
    p=p->next;
  }
  printf("\n");
}
