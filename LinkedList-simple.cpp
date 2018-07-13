#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};


void insert_node_at_front(Node **head , int new_data)
{
	Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next= *head;

    *head = new_node;
}

void insert_node_after(Node *n,int new_data)
{
     if (n== NULL) 
    { 
       printf("previous node is NULL");       
       return;  
    } 

	Node *new_node=(struct Node*)malloc(sizeof(struct Node));

	new_node->data=new_data;
	new_node->next= n->next; 
	n->next = new_node;

}

void insert_node_at_end(Node **head,int new_data)
{
   struct Node *new_node= (struct Node*)malloc(sizeof(struct Node));

   struct Node *last = *head;

   new_node->data= new_data;
   
   new_node->next=NULL;
   
   if(*head==NULL)
   {
   	*head=new_node;
   	return;
   }

   else
   {
   	while( last->next !=NULL)
   	{
   		last= last->next;
   	}
    
    last->next=new_node;
   }

}

void print(struct Node *n)
{
	while(n!=NULL)
	{
	cout<<n->data<<"->";
	n= n->next;
	}
	cout<<"NULL";
}


int main()
{
	Node *head =NULL;
	Node *second=NULL;
	Node *third=NULL;

   head = (struct Node*)malloc(sizeof(struct Node));
   second=(struct Node*)malloc(sizeof(struct Node));
   third= (struct Node*)malloc(sizeof(struct Node));

   head->data=1;
   head->next=second;

   second->data=2;
   second->next=third;

   third->data=3;
   third->next=NULL;
   
   insert_node_at_front(&head,7);
   insert_node_after(head->next,9);

   insert_node_at_end(&head,15);
   print(head);

}