#include "header.h"

int main ( int argc, char *  args[])
{


node *head = NULL;

head = delete_at_end(head);
head = delete_at_first(head);
head = delete_at_position(head, 66);

head = insert_at_position (head, 2, 5 );
head = insert_at_first (head, 4 );
head = insert_at_position (head, 2, 3 );
head = insert_at_position (head, 2, 2 );
head = insert_at_position (head, 2, 1 );
print_linked_list (head);

head = delete_at_first(head);
head = delete_at_end(head);
head = delete_at_position (head, 2);
head = delete_at_position (head, 2);
head = delete_at_position (head, 2);


print_linked_list (head);
printf ("the length is %d\n" ,length_linked_list(head));

//printf ("successfully deleted list : %d\n", purge_linked_list(head));

return SUCCESS;
}
