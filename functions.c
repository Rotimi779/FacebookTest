/********* definitions.c ********
	Student Name 	= Olurotimi Ajayi
	Student Number	= 101253689
*/

#include "data_structures.h"
#include "functions.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

/******** IMPORTANT: ********/
/* YOU ARE NOT ALLOWED TO CREATE EXTRA FUNCTIONS */



/*
   The function adds a new node to the head with the given value.
*/
void add_at_head(my_collection_t *coll, char value)
{
	node_t *new_node = malloc(sizeof(node_t));
	assert(new_node != NULL);
	new_node->elem = value;
	new_node->next = NULL;
	if(coll->head == NULL)
	{
		coll->head = new_node;
		coll->tail = new_node;
	}
	else
	{
		coll->head->next = new_node;
		coll->head = new_node;
	}






	/* The computational time for the function is:O(1)
		Explanation: This is because we are only adding a node to the front of the collection_t. Therefore, we are only looking at the front.



	*/
}

/*
   The function removes a node from the tail and returns the value. If the collection is empty, it returns '\0'.
*/
char remove_from_tail(my_collection_t *coll)
{
	//CHECK THIS IF STATEMENTS AGAIN
	if(coll->tail == NULL)
	{
		return '\0';
	}
	if(coll->head == NULL)
	{
		return '\0';
	}
	if(coll->head == coll->tail)
	{
		char value = coll->tail->elem;
		node_t *remove = coll->tail;
		coll->tail = coll->tail->next;
		coll->head = NULL;
		free(remove);
		return value;
	}
	else
	{
		char value = coll->tail->elem;
		node_t *remove = coll->tail;
		coll->tail = coll->tail->next;
		free(remove);
		return value;
	}

	




	/* The computational time for the function is:O(1)
			Explanation:We are only looking at the tail value. There is no iteration whatsoever.



	*/
}

/*
  Prints all the characters in the collection on the terminal.
*/
void print_elements(my_collection_t *coll)
{
	node_t * random = coll->tail;
	if(coll->tail == NULL)
	{
		//This only prints if there is nothing left to print.
		printf("\nBANKAI\n");
	}
	while(random != NULL)
	{
		//This prints from the tail
		printf("\n%c",random->elem);
		random = random->next;
	}
	/* The computational time for the function is:O(n)
			Explanation:It iterates through all the elements to print out each of their characters.



	*/
}

/*
   Removes all the elements from the collection. Your implementation
   for this function is not allowed to called remove_from_tail
*/
void empty_my_collection(my_collection_t *coll)
{
	node_t *random = coll->tail;
	while(coll->tail != NULL)
	{
		coll->tail = coll->tail->next;
		free(random);
		random = coll->tail;
	}

}

/*
   *************** DON'T MODIFY THIS FUNCTION ****************
   Function create the collection that will be used in the exam
*/
my_collection_t *create_collection()
{
	my_collection_t *coll = malloc(sizeof(my_collection_t));
	assert(coll != NULL);
	coll->head = NULL;
	coll->tail = NULL;
	return coll;
}
