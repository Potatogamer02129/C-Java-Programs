#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node* next;
}node;

node* head=NULL;

void insert(int x)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->val=x;
	newNode->next=NULL;
	if(head==NULL || head->val>x)
	{
		newNode->next=head;
		head=newNode;
		return;
	}	
	node* tmp=head;
	while(tmp->next!=NULL && (tmp->next->val)<x)
	{
		tmp=tmp->next;
	}
	newNode->next=tmp->next;
	tmp->next=newNode;
	return;
}

void traverse()
{
	node* tvs=head;
	while(tvs)
	{
		printf("%d ",tvs->val);
		tvs=tvs->next;
	}
	printf("\n");
}

void main()
{
	int ch,num;
	while(1)
	{
		printf("1 Insert\n");
		printf("2.Traverse\n");
		printf("3.Exit\n");
		printf("Your choice: ");
		scanf("%d",&ch);
		if(ch==3) break;
		switch(ch){
			case 1:
				printf("Enter the Number to be inserted: ");
				scanf("%d",&num);
				insert(num);
				break;
			case 2:
				traverse();	
				break;
		}
	}
}
