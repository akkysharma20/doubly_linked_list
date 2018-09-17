#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *del(Node *start,int data)
{
  Node *temp,*p;
  if(start==NULL)
  {
    printf("the list is empty\n");
  }
  if(start->next==NULL)
  {
    temp=start;
    start=NULL;
    free(temp);
    return start;
  }
  if(start->info==data)
  {
    temp=start;
    start=temp->next;
    temp->prev=NULL;
    free(temp);
    return start;
  }
  temp=start->next;
  while(temp->next!=NULL)
  {
    if(temp->info==data)
    {

      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      free(temp);
      return start;
    }
    temp=temp->next;
  }
  if(temp->info==data)
  {
    temp->prev->next=NULL;
    free(temp);
    return start;
  }
    printf("%d is not present in the list",data);
}
