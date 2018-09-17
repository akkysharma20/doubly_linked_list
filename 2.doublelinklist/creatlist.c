#include"linklist.h"
#include<stdio.h>
Node *create_list(Node *start)
{
  int i,n,data;
  printf("enter the no of nodes:");
  scanf("%d",&n);
  start=NULL;
  if(n==0)
   return start;
  printf("enter the element to be inserted :");
  scanf("%d",&data);
  start=addatbeg(start,data);
  for(i=0;i<n-1;i++)
  {
    printf("enter the element to be inserted:");
    scanf("%d",&data);
    start=addatend(start,data);
  }
  return start;
}
