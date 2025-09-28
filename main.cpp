#include "LinkedList.h"

int main()
{
    // Example with integers
    LinkedList<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);

    // Modify a value
    intList.modify(20, 25);

    // Remove a value
    intList.remove(10);

    return 0;
}