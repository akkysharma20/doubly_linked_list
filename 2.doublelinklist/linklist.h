typedef struct node
{
  struct node *prev;
  int info;
  struct node *next;
}Node;

Node* menu(Node*,int);
Node *create_list(Node *);
void display(Node *);
void search(Node *,int );
Node *addatbeg(Node *,int );
Node *addatend(Node *,int );
Node *del(Node *,int );
