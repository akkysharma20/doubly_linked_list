#include"linklist.h"
#include<stdio.h>
void search(Node *start,int item)
{
  Node *p=start;
  int pos=1;
  while(p!=NULL)
  {
    if(p->info==item)
    {
      printf("data %d found at position %d\n",item,pos);
      return;
    }
    p=p->next;
    pos++;
  }
  printf("%d is not found in list\n",item);
}
