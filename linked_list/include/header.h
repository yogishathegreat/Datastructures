/********************************************************************************
	FILE NAME	:header.h
	
	DESCRIPTION	:contains the header files for the program
	
	DATE		NAME		REFERNCE	REASON	
	14-feb-2014		Sree				test
********************************************************************************/
/*******************************************************************************
			Header Files
*******************************************************************************/



#ifndef _HEADER_H_
#define _HEADER_H_ 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*******************************************************************************
			Macros
*******************************************************************************/
#define SUCCESS 1
#define FAILURE 0
#define MAX 20

#define TRUE 1
#define FALSE 0

#define IN
#define OUT

/*******************************************************************************
			User Defined Types
*******************************************************************************/
typedef struct node
{
	int data;
	struct node *next;

}node;

/*******************************************************************************
			Function Prototypes
*******************************************************************************/
int isempty( IN node *head);
int length_linked_list (IN node *head);
node * insert_at_first ( OUT node *head, IN int data );
int print_linked_list ( IN node *head );
node * insert_at_end ( OUT node *head,IN int data );  
node * insert_at_position ( OUT  node *head, IN int position , IN int data );
int purge_linked_list (IN node *head);
node * delete_at_end (OUT node *head);
node * delete_at_first (OUT node *head);
node * delete_at_position (OUT node *head , IN int position);

/*******************************************************************************
			Tracing Macros
*******************************************************************************/
#endif
