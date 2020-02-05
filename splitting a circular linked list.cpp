#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
main()
{
	int i,n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the nodes data: \n");
	struct node* tail;
	for(i=0;i<n;i++)
	{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
		tail=temp;
	}
    }
    tail->link=root;
    printf("parent list: \n");
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	do
	{
		printf("%d-",temp->data);
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
int l1,l2;
if(n%2!=0)
{
l1=(n/2)+1;
l2=n/2;
}
else
{
	l1=l2=n/2;
}
struct node* q=root;
struct node* p;
struct node* tail1;
i=1;
while(i<l1)
{
q=q->link;
i++;	
}
tail1=q;
p=tail1->link;
tail1->link=root;
tail->link=p;


printf("linked list1\n");
    temp=root;
    if(temp==NULL)
    {
    	printf("list is empty.... \n");
	}
	else
	{
	do
	{
		printf("%d-",temp->data);
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}   
    printf("linked list 2 \n");
    temp=p;
	do
	{
		printf("%d-",temp->data);
		temp=temp->link;
	}
	while(temp!=p);
	printf("\n");
	} 	 



	
