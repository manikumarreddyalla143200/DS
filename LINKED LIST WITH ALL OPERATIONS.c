#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void addbegin();
void addend();
void addlocation();
void deleteatbegin();
void deleteatend();
void deleteatlocation();
void sort();
void finfandreplace();
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL,*current,*newnode,*temp,*previous;
void main()
{
	int ch;
	do
	{
	printf("Enter Ypur choice:\n");
	printf("1.Create,2.Display,3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:create();
		break;
		case 2:display();
		break;
		case 3:addbegin();
		break;
		case 4:addend();
		break;
		case 5:addlocation();
		break;
		case 6:deleteatbegin();
		break;
		case 7:deleteatend();
		break;
		case 8:deleteatlocation();
		break;
		case 9:sort();
		break;
		case 10:findandreplace();
		break;
		case 11:exit;
		break;
	}
	}while(ch!=3);
}
void create()
{
	int ch;
	do
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter Your Data:\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL)
		{
		start=newnode;
		current=newnode;
		}
		else
		{
		current->next=newnode;
		current=newnode;
		}
		printf("Do you want to continue\n");
		scanf("%d",&ch);
	}while(ch!=0);
}
void display()
{
	if(start==NULL)
		printf("The list is empty\n");
	else
	{
		temp=start;
		printf("the elements are\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
}
void addbegin()
{
    newnode=(struct node * )malloc(sizeof(struct node));
    printf("Enter Your Data;\n");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=start;
        start=newnode;
    }
}
void addend()
{
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Your data\n");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start=newnode;
        newnode->next=NULL;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
        newnode->next=NULL;
    }
}
void addlocation()
{
    int loc,i;
    printf("Enter Location\n");
    scanf("%d",&loc);
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter your Data\n");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start=newnode;
        newnoe->next=NULL;
    }
    else
    {
        current=start;
        for(i=1;i<loc;i++)
        {
            previous=current;
            current=current->next;
        }
        previos->next=newnode;
        newnode->next=current;
    }
}
void deleteatbegin()
{
    temp=start;
    if(start==NULL)
        printf("Deletion is Not possible\n");
    else
    {
        start=start->next;
        free(temp);
    }
}
void deleteatend()
{
    temp=start;
    if(start==NULL)
        printf("Deletionn is not possible\n");
    else
    {
        while(temp!=NULL)
            temp=temp->next;
        temp->next=NULL;
        current=temp;
        free(current);
    }
}
void deleteatloaction()
{
    int loc;
    printf("Enter Loaction\n");
    scanf("%d",&loc);
    if(start==NULL)
        printf("Deletion is not Possible\n");
    else
    {
        for(int i=1;i<loc;i++)
        {
            previous=current;
            current=current->next;
        }
        prevoius->next=current->nexxt;
        free(current);
    }
}
void sort()
{
    int d;
    if(start==NULL)
        printf("List is Empty\nsorting is not possible\n");
    else
    {
        for(previous=start;previous!=NULL;previous=prevoius->next)
        {
            for(current=previous->next;current!=NULL;current=current->next)
            {
                if(previous=>date>current->data)
                {
                    d=previous->data;if()
                    previous->data=current->data;
                    current->data=d;
                }
            }
        }
    }
    display
}
void findandreplace()
{
    int old,new;
    if(start=NULL)
        printf("Lis is Empty\n");
    else
    {
        printf("Enter old value to Find\n");
        scanf("%d",&old);
        printf("Enter new value to replace\n");
        scanf("%d",&new);
        while(temp->data!=old&&temp!=NULL)
            temp=temp->next;
        if(temp->data==old)
            temp->data=new;
        else
            printf("the element not found\n");
    }
}
