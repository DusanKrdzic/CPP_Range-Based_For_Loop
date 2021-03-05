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

        Iterator(const Iterator&);
        Iterator(Iterator&&);

        bool operator!=(const Iterator &);

        int &operator*();

        Iterator &operator++();

        ~Iterator();
    };

    List();

    List(const List&);
    List(List&&);



    List &push_back(const int &);

    Iterator begin();

    Iterator end();

    ~List();

    friend int main();
};

#endif
