#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *addatend(Node *start,int data)
{
  Node *p,*temp;
  temp=(Node*)malloc(sizeof(Node));
  temp->info=data;
  p=start;
  while(p->next!=NULL)
       p=p->next;
  p->next=temp;
  temp->next=NULL;
  temp->prev=p;
  return start;
}
