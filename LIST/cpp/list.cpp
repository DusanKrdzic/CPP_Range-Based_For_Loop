

#include <iostream>

#include "../h/list.h"

using namespace std;

List::List() : head(nullptr), tail(nullptr) {}

List::~List()
{

    while (head)
    {

        Node *temp = head;
        head = head->next;

        delete temp;
    }
}

List &List::push_back(const Node &n)
{

    if (this->head == nullptr)
    {

        head = new Node(n.v);
        tail = head;
    }
    else
    {

        tail->next = new Node(n.v);
        tail = tail->next;
    }
    return *this;
}

List::Iterator List::begin()
{

    return List::Iterator(this->head);
}

List::Iterator List::end()
{

    return List::Iterator(this->tail->next);
}

bool List::Iterator::operator!=(const List::Iterator &it)
{

    return this->current != it.current;
}

int &List::Iterator::operator*()
{
    return this->current->v;
}

List::Iterator &List::Iterator::operator++()
{

    this->current = this->current->next;

    return *this;
};

List::Iterator::~Iterator()
{

    delete this->current;
}