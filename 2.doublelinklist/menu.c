#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
Node *menu(Node* start,int choice)
{
  int data,item,pos;
  switch (choice)
  {
    case 1: start=create_list(start);
            return start;
            break;
    case 2: display(start);
            return start;
            break;
    case 3: printf("enter the data to be search\n");
            scanf("%d",&data);
            search(start,data);
            return start;
            break;
    case 4: printf("enter the data to be inserted\n");
            scanf("%d",&data);
            start=addatend(start,data);
            return start;
            break;
    case 5:printf("enter the data to be delete\n");
            scanf("%d",&data);
            start=del(start,data);
            return start;
            break;  
    case 6:
            exit(1);
    default:
            printf("wrong choice\n");
  }
}
