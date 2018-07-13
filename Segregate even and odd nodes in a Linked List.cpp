#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

void add_element(Node **head, int new_data)
{
    Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    Node *last = *head;
    new_node->data=new_data;
    new_node->next=NULL;
    while(last->next != NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}

void print(Node *n)
{  int k=0,x=0;
   int even[100],odd[100];
    while(n !=NULL)
   { 
    
    
    int a=n->data;
    if(a%2==0)
    {even[k]=a;
     k++;
    }
    
    else
    {odd[x]=a;
     x++;
    }
    
   n=n->next;
   }
   for(int p=0;p<k;p++)
  { cout<<even[p]<<" ";
}
for(int p=0;p<x;p++)
{
    cout<<odd[p]<<" ";
}
   
    
   cout<<endl;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{   int value,n;
	    cin>>n;
	    cin>>value;
	    
	    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
	    
	    head->data=value;
	    head->next=NULL;
	    
	    for(int j=1;j<n;j++)
	    {   cin>>value;
	        add_element(&head,value);
	    }
	    
	   
	    
	    print(head);
	}
	return 0;
}