/*reverse a linked list*/
#include "reverse_linked_list.h"

node * reverse_linked_list (IN node* head)
{

node * curNode = head;
node * preNode = NULL;
node * subNode = NULL;

while ( NULL != curNode )
{

subNode = curNode -> next;
curNode -> next = preNode;
preNode = curNode;
curNode = subNode;


}

return preNode;

}
