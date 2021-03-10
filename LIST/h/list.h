#ifndef LIST_H
#define LIST_H

class List
{

private:
    struct Node
    {

        int v;
        Node *next;

        Node(int e) : v(e), next(nullptr) {}
    };

    Node *head, *tail;

public:
    class Iterator
    {

        Node *current = nullptr;

    public:
        Iterator(Node *p) : current(p) {}

        Iterator(const Iterator &);
        Iterator(Iterator &&);
        Iterator &operator=(const Iterator &);
        Iterator &operator=(Iterator &&);

        bool operator!=(const Iterator &);
        bool operator==(const Iterator &); //ako overload operator!= trebalo bi i operator==

        int &operator*();

        Iterator &operator++();

        ~Iterator();
    };

    List();

    List(const List &);
    List(List &&);

    List &operator=(const List &);
    List &operator=(List &&);

    List &push_back(const int &);

    Iterator begin();

    Iterator end();

    ~List();

    friend int main();
};

#endif
