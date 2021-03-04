# CPP_Range-Based_For_Loop
Enable range-based for loop for own Linked List Implementation (not STL Container)

example:

#include "list.h"

List list;

list.push_back(1);
list.push_back(2);
list.push_back(3);

for(auto x:list)
{
//loop body...
}
