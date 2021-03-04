

#include <iostream>

using namespace std;

#include "../h/list.h"

void f(List &list)
{

    cout << "Not friend function print:" << endl;
    for (int x : list)
    {

        cout << x << ' ';
    }

    cout << endl;

    for (List::Iterator b = list.begin(), e = list.end(); b != e; ++b)
    {

        int x = *b;

        cout << x << ' ';
    }

    cout << endl;
}

int main()
{

    List list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    for (List::Node *tek = list.head; tek != nullptr; tek = tek->next)
    {

        cout << tek->v << ' ';
    }

    cout << endl;

    for (auto b = list.begin(), e = list.end(); b != e; ++b)
    {

        int x = *b;

        cout << x << ' ';
    }

    cout << endl;

    for (List::Iterator b = list.begin(), e = list.end(); b != e; ++b)
    {

        int x = *b;

        cout << x << ' ';
    }

    cout << endl;

    for (int x : list)
    {

        cout << x << ' ';
    }

    cout << endl;

    f(list);

    List help;

    for (auto x : help)
    {
        cout << "EMPTY LIST" << endl;
    }

    cout << "END" << endl;

    return 0;
}
