/********* main.c ********
	Student Name 	= Olurotimi Ajayi
	Student Number	= 101253689
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "data_structures.h"

int main()
{
	my_collection_t *coll = create_collection();

	add_at_head(coll, '6');
	add_at_head(coll, '0');
	add_at_head(coll, '0');
	add_at_head(coll, '2');
	add_at_head(coll, 'C');
	add_at_head(coll, 'S');
	add_at_head(coll, 'Y');
	add_at_head(coll, 'S');

	print_elements(coll);
	printf("\n");

	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	printf("%c", remove_from_tail(coll));
	
	printf("\n");
	print_elements(coll);

	add_at_head(coll, 'S');
	add_at_head(coll, 'Y');
	add_at_head(coll, 'S');
	add_at_head(coll, 'C');
	add_at_head(coll, '2');
	add_at_head(coll, '0');
	add_at_head(coll, '0');
	add_at_head(coll, '6');
	printf("check here");
	printf("\n");
	print_elements(coll);

	empty_my_collection(coll);

	printf("\n");
	printf("\nIT WORKED\n");
	print_elements(coll);
	printf("\nIT WORKED\n");
}