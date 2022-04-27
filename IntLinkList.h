
#ifndef LINKEDLISTDEMOS_INTLINKLIST_H
#define LINKEDLISTDEMOS_INTLINKLIST_H


class IntLinkList {
public:
    IntLinkList();
    //default constructor
    //initializes list with length = 0 and head pointing to null

    ~IntLinkList();
    //destructor

    void Add(int elem);
    // Adds an element to the front of the list
    void Remove(int elem);
    // Removes an element from the list

    int at(int index);
    // Returns the node at index (The index 0 would return the head data)

    bool Contains(int elem);
    // Returns true if elem is in the list

    int Size() const;
    // Returns the size of the list

private:
    struct Node {
        Node *next;
        int data;
    };

    Node *head;
    int length;

};


#endif //LINKEDLISTDEMOS_INTLINKLIST_H
