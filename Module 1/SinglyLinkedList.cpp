#include "SinglyLinkedList.h" // Linked list ki class declaration aur Incident header include karta hai

SinglyLinkedList::SinglyLinkedList() // SinglyLinkedList class ka constructor
{
    head = NULL; // List shuru mein khaali hoti hai, is liye head ko NULL set karta hai
}

void SinglyLinkedList::insertEnd(Incident i) // Naya incident list ke aakhir mein add karne wala function
{
    Node* newNode = new Node(i); // Incident data ke sath naya node memory mein banata hai

    if(head == NULL) // Check karta hai ke list khaali hai ya nahi
    {
        head = newNode; // Khaali list mein naya node ko head aur pehla node banata hai
        return; // Function ko yahin khatam karta hai
    }

    Node* temp = head; // Traversal shuru karne ke liye head se temporary pointer banata hai

    while(temp->next != NULL) // Jab tak agla node maujood hai tab tak loop chalata hai
    {
        temp = temp->next; // Temp ko agle node ki taraf move karta hai
    }

    temp->next = newNode; // Aakhri node ke baad naya node jorta hai
}

void SinglyLinkedList::display() // Tamam incidents ko screen par dikhane wala function
{
    Node* temp = head; // Traversal shuru karne ke liye head se temp pointer banata hai

    if(head == NULL) // Check karta hai ke linked list khaali hai
    {
        cout << "No incidents found\n"; // Khaali list ka message print karta hai
        return; // Koi node na milne par function se bahar nikalta hai
    }

    while(temp != NULL) // Har node ko head se aakhir tak visit karta hai
    {
        cout << "\nIncident ID: " << temp->data.id; // Maujooda node ka incident ID print karta hai
        cout << "\nType: " << temp->data.type; // Maujooda node ka incident type print karta hai
        cout << "\nLocation: " << temp->data.location; // Maujooda node ki incident location print karta hai
        cout << "\nSeverity: " << temp->data.severity; // Maujooda node ki incident severity print karta hai
        cout << "\nStatus: " << temp->data.status; // Maujooda node ka incident status print karta hai
        cout << "\n----------------------"; // Har incident ke baad separation line print karta hai

        temp = temp->next; // Temp ko agle node ki taraf move karta hai
    }
}

Node* SinglyLinkedList::search(int id) // Diye hue incident ID ko list mein dhundne wala function
{
    Node* temp = head; // Search shuru karne ke liye head se temporary pointer banata hai

    while(temp != NULL) // List ke aakhir tak har node ko check karta hai
    {
        if(temp->data.id == id) // Check karta hai ke current node ki ID di gayi ID ke barabar hai
        {
            return temp; // Matching incident wala node return karta hai
        }
        temp = temp->next; // Match na milne par agle node par jaata hai
    }

    return NULL; // Koi matching node na milne par NULL return karta hai
}

void SinglyLinkedList::update(int id) // Diye hue ID wale incident ki maloomat update karta hai
{
    Node* temp = search(id); // Diye hue ID ke liye matching node dhundta hai

    if(temp == NULL) // Check karta hai ke incident mila ya nahi
    {
        cout << "Incident not found\n"; // Incident na milne par message print karta hai
        return; // Matching node na hone par function se bahar nikalta hai
    }

    cout << "Enter new type: "; // Naya incident type enter karne ke liye prompt deta hai
    cin >> temp->data.type; // Naya type input le kar node ke data mein rakhta hai
    cout << "Enter new location: "; // Nayi location enter karne ke liye prompt deta hai
    cin >> temp->data.location; // Nayi location input le kar node ke data mein rakhta hai
    cout << "Enter new severity: "; // Nayi severity enter karne ke liye prompt deta hai
    cin >> temp->data.severity; // Nayi severity input le kar node ke data mein rakhta hai
    cout << "Enter new status: "; // Naya status enter karne ke liye prompt deta hai
    cin >> temp->data.status; // Naya status input le kar node ke data mein rakhta hai

    cout << "Incident updated successfully\n"; // Update kamyab hone ka message print karta hai
}

void SinglyLinkedList::deletion(int id) // Diye hue ID wala incident delete karne wala function
{
    Node* temp = head; // Traversal ke liye head se temp pointer shuru karta hai
    Node* prev = NULL; // Current node se pehle wale node ka pointer

    if(temp != NULL && temp->data.id == id) // Check karta hai ke delete wala incident head node par hai
    {
        head = temp->next; // Head ko doosre node ki taraf move karta hai
        delete temp; // Purane head node ki memory free karta hai
        cout << "Incident deleted successfully\n"; // Deletion kamyab hone ka message print karta hai
        return; // Head delete hone ke baad function se bahar nikalta hai
    }

    while(temp != NULL && temp->data.id != id) // Matching node milne ya list khatam hone tak search karta hai
    {
        prev = temp; // Current node ko previous node ke liye save karta hai
        temp = temp->next; // Temp ko agle node ki taraf move karta hai
    }

    if(temp == NULL) // Check karta hai ke matching incident nahi mila
    {
        cout << "Incident not found\n"; // Incident na milne par message print karta hai
        return; // Deletion ki zarurat na hone par function se bahar nikalta hai
    }

    prev->next = temp->next; // Delete hone wale node ko previous aur agle node ke darmiyan se hata deta hai
    delete temp; // Matching node ki memory free karta hai

    cout << "Incident deleted successfully\n"; // Deletion kamyab hone ka message print karta hai
}