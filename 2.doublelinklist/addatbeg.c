#include"linklist.h"
#include<stdio.h>
#include<stdlib.h>
Node *addatbeg(Node *start,int data)
{
  Node *temp;
  temp=(Node*)malloc(sizeof(Node));
  temp->info=data;
  temp->prev=NULL;
  temp->next=NULL;
  start=temp;
  return start;
}
