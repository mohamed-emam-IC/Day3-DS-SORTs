#include <iostream>
#include "Linked_List.h"
using namespace std;

int main() {
    LinkedList list;

    // Example list
    list.append(4);
    list.append(2);
    list.append(5);
    list.append(1);
    list.append(3);

    cout << "Original list: ";
    list.printList();

    list.bubbleSort();

    cout << "Sorted list: ";
    list.printList();

    return 0;
}
