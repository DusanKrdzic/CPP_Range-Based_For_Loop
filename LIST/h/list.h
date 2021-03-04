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

        bool operator!=(const Iterator &);

        int &operator*();

        Iterator &operator++();

        ~Iterator();

        //u slucaju da je Iterator u private delu
        //friend class List;
        //friend int main();
    };

    List();

    List &push_back(const Node &);

    Iterator begin();

    Iterator end();

    ~List();

    friend int main();
};

#endif
