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
    
    printf("linked list1\n");
    struct node* temp;
    int count=0;
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
		count+=1;
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
		printf("deletion of node \n");
	int loc;
	i=0;
	printf("enter the value of location: \n");
	scanf("%d",&loc);
	if(loc>count)
	{
		printf("enter the valid location: \n");
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
		tail->link=root;
	}
	else
	{
		struct node* p,*q;
		p=root;
		for(i=1;i<loc-1;i++)
		{
			p=p->link;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
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
		count+=1;
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
    struct node* p;
	i=1;
	printf("enter the location: \n");
	scanf("%d",&loc);
	int len=count;
	if(loc>count)
	{
		printf("invalid loction....!! \n");
	}
	else if(loc==0)
	{
	temp=(struct node*)malloc(sizeof(struct node*));
	printf("enter the node data: \n");
	scanf("%d",&temp->data);
	temp->link=root;
	root=temp;
	tail->link=root;
	}
	else 
	{
		p=root;
		while(i<loc)
		{
		p=p->link;
		i++;	
		}
		temp=(struct node*)malloc(sizeof(struct node*));
		printf("enter the node data: \n");
		scanf("%d",&temp->data);
		temp->link=p->link;
		p->link=temp;	
	}
	  printf("inserted linked list \n");
    count=0;
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
		count+=1;
		temp=temp->link;
	}
	while(temp!=root);
	printf("\n");
	}
}
