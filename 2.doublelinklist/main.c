#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
Node *start=NULL;
int main()
  {
    int choice,data,item,pos;
    while (1)
  {
    printf("1.creat list\n");
    printf("2.display\n");
    printf("3.search\n");
    printf("4.add at end\n");
    printf("5.delete\n");
    printf("6.exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    start=menu(start,choice);
  }
}
