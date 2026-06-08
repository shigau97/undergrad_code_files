#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct edgelist;
typedef struct nodelist
{
	int info;
	struct nodelist *next;
	struct edgelist *adj;
	int flag;
}Node;
typedef struct edgelist
{
	struct nodelist *dest;
	struct edgelist *link;
}edge;
typedef struct stacklist
{	
	Node *vertex;
	struct stacklist *forw;
}stack;
void insertedges();
void buildnodelist();
void display();
void push(node *);
Node * pop();
Node *start;
stack *top;
int n;
void buildnodelist()
{
	Node *curr, *prev;
	int i;
	clrscr();
	printf("\n Made by: Shivani Gautam");
	printf("\n enter the no.of nodes in a graph:");
	scanf("%d", &n);
	i=1;
	prev=NULL;
	for (i=1; i<=n; i++)
	{
		curr=(Node*)malloc(sizeof(Node));
		if(curr==NULL)
		{
			printf("\n out of memory space\n");
			exit(0);
		}
		curr-> next=NULL;
		curr-> adj=NULL;
		curr-> info=i;
		curr->flag =1;
		if(prev==NULL)
		    start=curr;
		else
		    prev-> next=curr;
		     prev=curr;
	}
}

void insertedges()
{
	edge *curr,*prev;
	node *temp, *ptr;
	int i, j, m , k, p;
	temp=start;
	for (i=1; i<=n; i++)
	{
		printf("\n enter the no. of adjacent nodesof %d: ", i);
		scanf("%d", &m);
		prev=NULL;
		for(j=1; j<=m;j++)
		{
			printf("\n enter the %d ajacent node of %d : ", j,i);
			scanf("%d", &k);
			curr=(edge*)malloc(sizeof(edge));
			if (curr==NULL)
			{
				printf("\n out pf memory space\n");
					exit(0);
			}
			ptr=start;
			curr->link=NULL;
			p=1;
			while(p<k)
			{ptr=ptr->next;
			p++;
		}
	curr-> dest=ptr;
	if(prev==NULL)
	temp->adj=curr;
	else
	prev->link=curr;
	prev=curr;
	}
	temp=temp->next;
	}
}

void display()
{
	Node *node;
	edge*ptr;
	node=start;
	printf("\n -----------");

	printf("\n Node\t adjaceny list\n");
	while  (node!= NULL)
	{
		printf("%d", node->info);
	ptr=node->adj;
	printf("\t");
	while(ptr!=NULL)
	{printf("%d", ptr-> dest->info);
		ptr=ptr-> link;
	}
	printf("\n");
	node = node-> next;

	}
}
void push(Node *x)
{
	stack *temp;
	temp= (stack *)malloc(sizeof(stack));
	if (temp==NULL)
	{
		printf ("\n out of memory space");
		exit(0);
	}
	x->flag=2;
	temp-> vertex = x;
	temp -> forw = NULL;
	if (top == NULL)
		top=temp;
	else
	temp-> forw=top;
	top=temp;
}
	Node * pop()
{
	Node *temp;
	stack *ptr;
	temp=top->vertex;
	ptr=top;
	top=top->forw;
	temp->flag=3;
	free(ptr);
	return temp;
}

void main()
{
	Node *ptr, *temp;
	Edge *edge;
	buildnodelist();
	insertedges();
	display();
	top=NULL;
	printf("\n DFS Traversal\n");
	ptr=start;
	push(ptr);
	do
		{
			if (top!=NULL)
			{temp=pop(); printf("%d", temp->info);
			}
		edge=temp-> adj;
		while(edge!=NULL)
		{
			if (edge-> dest->flag===1)
			push(edge->dest);
			edge=edge->link;
		}
	}
	while(top!= NULL);
}
			