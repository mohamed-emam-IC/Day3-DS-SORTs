#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"
#include <iostream>
using namespace std;

// Doubly Linked List class
class LinkedList {
private:
    Node* head;

    // Swap two nodes
    void swapNodes(Node*& a, Node*& b) {
        if (!a || !b || a == b) return;

        Node* prevA = a->prev;
        Node* nextB = b->next;

        // Adjust connections for nodes
        if (prevA) prevA->next = b;
        if (nextB) nextB->prev = a;

        b->prev = prevA;
        a->next = nextB;

        a->prev = b;
        b->next = a;

        // Update head if necessary
        if (head == a) head = b;
    }

public:
    // Constructor
    LinkedList() : head(NULL) {}

    // Function to append a new node at the end
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Function to perform Bubble Sort
    void bubbleSort() {
        if (!head) return;

        bool swapped;
        Node* current;
        Node* lastSorted = NULL;

        do {
            swapped = false;
            current = head;

            while (current->next != lastSorted) {
                if (current->data > current->next->data) {
                    Node* nextNode = current->next;
                    swapNodes(current, nextNode);
                    swapped = true;
                } else {
                    current = current->next;
                }
            }
            lastSorted = current; // Update the last sorted node
        } while (swapped);
    }

    // Function to print the list
    void printList() const {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};


#endif // LINKED_LIST_H
