#include <iostream>
using namespace std;

// Node definition for a doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(NULL), prev(NULL) {}
};
