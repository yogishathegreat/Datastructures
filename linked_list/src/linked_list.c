#include "header.h"


/*is empty function*/


int isempty ( IN node *head )
{

    if ( NULL == head )

    {
    
     return TRUE;

    } 

    return FALSE;
}






/*length_linked_list*/

int length_linked_list ( node *head)
{

int length = 0;

if ( isempty (head))
{
	return length;
	}

while ( ( NULL != head ) )
{
				 head = head -> next;
                 length++;
}

return length;

}










/*print_linked_list function*/

int print_linked_list ( IN node *head )
{

if (isempty ( head))
 {

printf ("Linked list is empty");

return SUCCESS;
 
 }

while ( NULL != head)
{
	
	printf ("%d ->" , head -> data );
	head = head -> next;
	}

printf ("NULL\n");
return SUCCESS;
}











/*insert_at_first function*/

node * insert_at_first ( IN node *head, IN int data ) 
{

node *newNode = NULL;

newNode = (node*) malloc(sizeof(node));


if (!newNode)
{

printf ("could not allocated memory");
return head; 

}

newNode -> data = data;
newNode -> next = head;
head = newNode;
return head;

}











/*insert_at_end function*/

node * insert_at_end ( node *head, int data )
{

node *newNode = NULL;
node *preNode = NULL;
node *curNode = NULL;

newNode = (node*) malloc (sizeof(node));

if (!newNode)
{
printf ("could not allocate memory");
return head;
}

newNode -> data = data;
newNode -> next = NULL;

if (isempty (head))
{
head = newNode;
return head;
}

curNode = head;

while ( NULL != curNode)
{
		   
		         preNode = curNode; 
				 curNode = curNode -> next;
}

newNode -> next = NULL;
preNode -> next = newNode;


return head;

	}












/*insert_at_position function*/

node * insert_at_position ( node *head, int position, int data )
{

node *newNode = NULL;
node *preNode = NULL;
node *curNode = head;
int cur_position = 1;

if ( position <= 1)
{
printf ("Please enter a position between 1 and N (N being the position of last element)\n");
return head;
}


newNode = (node*) malloc (sizeof(node));

if (!newNode)
{
printf ("could not allocate memory");
return head;
}

newNode -> data = data;
newNode -> next = NULL;


if (isempty (head))
{
head = newNode;
return head;
}

while ( ( NULL != curNode ) && ( cur_position < position ) )
{
		   
		         preNode = curNode; 
				 curNode = curNode -> next;
                 cur_position++;
}


newNode -> next = curNode;
preNode -> next = newNode;


return head;

	}



int purge_linked_list (node *head)
{
	
node *preNode = NULL;

if ( isempty (head))
{
return FAILURE;

}


while ( NULL != head)
{
		   
		         preNode = head; 
				 free (preNode);
				 head = head -> next;
				 
}

	
	return SUCCESS;
	}

/*delete_at_first function*/

node * delete_at_first (node *head)
{

node *curNode = head;

if ( isempty(head) )
{
return head;
}


head = head -> next;
free (curNode);
return head;

	}


/*delete_at_end function*/

node * delete_at_end ( node* head)
{

node *curNode = head;
node *preNode = head;

if ( isempty(head) )
{
return head;
}

if ( NULL == head -> next )
{

free (head);
return NULL;
	}



while ( NULL != curNode -> next)
{

preNode = curNode;
curNode = curNode -> next;
}

preNode -> next = NULL;
free (curNode);

return head;
}










/*delete_at_position function*/

node * delete_at_position (node *head, int position)
{

node *curNode = head;
node *preNode = head;
int curPosition = 1;


if ( position <= 1)
{
printf ("Please enter a position between 1 and N (N being the position of last element)\n");
return head;
}

if ( isempty(head) )
{
return head;
}

if ( NULL == head -> next )
{

free (head);
return NULL;
	}

while ( (NULL != (curNode -> next) ) && ( curPosition < position ) )
{

preNode = curNode;
curNode = curNode -> next;
curPosition++;

}

preNode -> next = preNode -> next -> next;
free (curNode);

return head;
}





