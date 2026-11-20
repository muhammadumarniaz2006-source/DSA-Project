#ifndef SINGLYLINKEDLIST_H // Yeh header guard file ko dobara include hone se bachata hai
#define SINGLYLINKEDLIST_H // SinglyLinkedList.h ke liye unique header guard define karta hai

#include "Incident.h" // Incident structure ki definition is file mein include karta hai

struct Node // Linked list ka har ek node define karta hai
{
    Incident data; // Node ke andar incident ki maloomat store karta hai
    Node* next; // Agle node ka address store karne wala pointer

    Node(Incident i) // Incident ki value receive karne wala node constructor
    {
        data = i; // Constructor ko mila incident data node mein assign karta hai
        next = NULL; // Shuru mein agla node nahi hota, is liye pointer ko NULL karta hai
    }
};

class SinglyLinkedList // Incident nodes ki singly linked list ki class
{
private: // Sirf class ke andar access hone wale members ka section
    Node* head; // Linked list ke pehle node ka address store karta hai

public: // Bahar se call kiye jane wale members ka section

    SinglyLinkedList(); // List banate waqt head ko initialize karne wala constructor

    void insertEnd(Incident i); // Naya incident list ke aakhir mein add karta hai

    void display(); // List ke tamam incidents ki maloomat screen par dikhata hai

    Node* search(int id); // Diye hue ID wala incident dhund kar node ka address deta hai

    void update(int id); // Diye hue ID wale incident ki maloomat update karta hai

    void deletion(int id); // Diye hue ID wala incident list se delete karta hai
};

#endif // SinglyLinkedList.h ke header guard ka end