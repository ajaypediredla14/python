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
	int i,n,k;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the last node link location: ");
	scanf("%d",&k);
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
	i=1;
    struct node* q;
    q=root;
    if(k>0)
    {
    while(i<k)
    {
    q=q->link;
	i++;	
	}
	tail->link=q;
	}
	else
	{
	tail->link=NULL;
	}
    printf("finding the linkage of last node: \n");
    struct node* temp;
    temp=root;
	for(i=0;i<n;i++)
	{
	 if(tail->link==temp)
	 {
	 printf("node liked to : %d node",i+1);	
	 break;
	 }
	 else if(temp->link==NULL)
	 {
	 	printf("single liked list \n");
	 }
	 else  
	 {
	 temp=temp->link;
	 }
	}

}
