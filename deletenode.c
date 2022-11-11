#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};

struct node *addatbeg(struct node *head ,int data);    //Declaration of sub-function's
void display (struct node *head);                      //Declaration of sub-function's
struct node *delete (struct node *head , int data);    //Declaration of sub-function's


int main()
{
	struct node *head=NULL;
	int choice, data,item;

	while(1)
	{
		printf("List menu\n");
		printf("\n1.Add node at begining\n2.Display the list\n3.Delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);


		switch(choice)
		{
			case 1: //Add a node at begining  of a list
				printf("\nEnter the element to insert: ");
				scanf("%d",&data);
				head=addatbeg(head,data);
				break;

			case 2: //Display a node
				display(head);
				break;

			case 3: //Delete the data
				printf("\nEnter the position to delete : ");
				scanf("%d" ,&data);
				head=delete(head,data);
				break;

			case 4: //Exit
				exit(1);


			default:
				printf("Enter the right choice\n");

		} //End of switch
	} //End of while
	return 0;
} //End of main

// Function to add a node at Begining

struct node *addatbeg(struct node *head ,int data)
{
	struct node*temp;                 // Creating an new node
	temp=(struct node *)malloc(sizeof(struct node));  // Creating an node and assigning in temp 
	temp->info=data;     // Saving an data in info variable
	temp->next=head;     // Assigning an head to temp->next
	head=temp;           // Assigning an temp to head
	return head;     
}

// Function to Display a node 
void display (struct node *head)
{
	struct node *temp;
	if(head==NULL)     // condition to check the node is present or not
	{
		printf("\nList is empty\n");
		return;
	}
	temp=head;         // Assigning an head into temp
	printf("The list of the nodes are : ");
	while(temp!=NULL)  // Traversing an nodes 
	{
		printf("%d   ",temp->info);   // Printing an nodes
		temp=temp->next;
	}
	printf("\n\n");
}


// Function to delete a node at given position

struct node *delete (struct node *head , int data)
{
	struct node *temp,*new;
	if(head==NULL)            // condition to check the node is present or not
	{
		printf("The list is empty\n");
		return head;
	}

	temp=head;          // Assigning an head into temp 

	if(data==1)        // Condition to delete if the position is 1
	{
		head=temp->next;
		free(temp);
		temp=NULL;
		printf("Deletion successfull\n\n");
		return head;
	}


	else
	{
		for(int i=1;i<data-1&&temp!=NULL;i++)    // Traversing an nodes till position
		{
			temp=temp->next;
		}
	}


	if(temp==NULL)         // Condition to check wether the position is available or not
	{
		printf("The '%d'th position is not found on the node \n",data);
		return head;
	}


	new=temp->next;
	temp->next=new->next;
	free(new);
	new=NULL;
	printf("Deletion successfull\n");
	return head;
}



