#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*NN,*res;
void insert(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		tail->next=NN;
		tail=NN;
	}
}
NODE * delet()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		temp=head;
		while(temp->next->next)
		{
			temp=temp->next;
		}
		res=tail;
		temp->next=NULL;
		tail=temp;
		return res;
	}
}
void display()
{
	if(head==NULL && tail==NULL)
	{
		printf ("No Nodes\n");
	}
	else
	{
		temp=head;
		while(temp)
		{
			printf("%d %d %d\n ",temp,temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n"); 
	}
}
void insert_head(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		NN->next=head;
		head=NN;
	}
}
NODE * delet_head()
{
	if(head==NULL && tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res=head;
		head=head->next;
		res->next=NULL;
		return res;
	}
}
void reverse()
{
	NODE *curnode,*prev,*next;
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else if(head==tail)
	{
		printf("No Need or list Contain Single Element\n");
	}
	else
	{
		tail=head;
		curnode=head;
		prev=NULL;
		next=NULL;
		while(curnode)
		{
			next=curnode->next;
			curnode->next=prev;
			prev=curnode;
			curnode=next;
		}
		head=prev;                                                              
	}
}
void insert_pos(NODE *NN,int pos)
{
	int p,f=0;
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else if(head==tail)
	{
		printf("No Need or list Contain Single Element\n");
	}
	else
	{
		temp=head;
		for(p=1;p<pos-1;p++)
		{
			if(temp==NULL)
			{
				printf("Insertion is not possible\n");
				f=1;
				break;
			}
			temp=temp->next;
		}
		if(f==0)
		{
			NN->next=temp->next;
	        temp->next=NN;
		}
	}
}
void * delet_pos(int pos)
{
	int p;
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	temp=head;
	for(p=1;p<pos-1;p++)
	{
		if(temp==NULL)
		{
			return NULL;
		}
		temp=temp->next;
	}
	res=temp->next;
	temp->next=temp->next->next;
	res->next=NULL;
	return res;
}
int main()
{
	int ch,val,pos;
	while(1)
	{
		printf("1.insert\n2.delete\n3.display\n4.insert_head\n5.delete_head\n6.reverse\n7.insert by position\n8.delete by position\n9.exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
			scanf("%d",&val);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;  
			NN->next=NULL;
			insert(NN);
		}
		else if(ch==2)
		{
			//delete
			res=delet();
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else 
			{
				printf("%d ",res->data);
				free(res);
			}
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else if(ch==4)
		{
			//insert at head
			scanf("%d",&val);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;  
			NN->next=NULL;
			insert_head(NN);
		}
		else if(ch==5)
		{
			res=delet_head();
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else 
			{
				printf("%d ",res->data);
				free(res);
			}
		}
		else if(ch==6)
		{
			reverse();
		}
		else if(ch==7)
		{
			// insert by position
			scanf("%d ",&pos);
			scanf("%d",&val);
			NN=(NODE *)malloc(sizeof(NODE));
			NN->data=val;  
			NN->next=NULL;
			insert_pos(NN,pos);
		}
			else if(ch==8)
		{
			// insert by delete
			scanf("%d",&pos);
			res=delet_pos(pos);
			if(res==NULL)
			{
				printf("No Nodes\n");
			}
			else 
			{
				printf("%d ",res->data);
				free(res);
			}
		}
		else
		{
			break;
		}
	}
}
