#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char val;
	struct node* next;
}node;

node* head=NULL;

void insert(char x)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->val=x;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	node* tvs=head;
	while(tvs->next)
	{
		tvs=tvs->next;
	}
	tvs->next=newNode;
	return;
}

void removel(char x)
{
	node* tvs=head;
	while(tvs->next->val!=x)
	{
		if(tvs->next) break;
		tvs=tvs->next;
	}
	node* tmp=tvs->next;
	tvs->next=tvs->next->next;
	free(tmp);
	return;
}

void traverse()
{
	node* tvs=head;
	while(tvs){
		printf("%c",tvs->val);
		tvs=tvs->next;
	}
	printf("\n");
}

void main()
{
	int c;
	char ch;
	while(1)
	{
		printf("1.Insert Character\n2.Remove character\n3.Show list\n4.Exit\nEnter Your choice: ");
		scanf("%d",&c);
		if(c==4) break;
		switch(c){
			case 1: 
				printf("Enter the character to be inserted: ");
				scanf(" %c",&ch);
				insert(ch);
				break;
			case 2:
				printf("Enter the character to be Deleted: ");
				scanf(" %c",&ch);
				removel(ch);
				break;
			case 3:
				traverse();
				break;
		}
	}
}
