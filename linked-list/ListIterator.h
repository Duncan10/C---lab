//
// Created by Duncan on 9/12/2021.
//

#ifndef LINKED_LIST_LISTITERATOR_H
#define LINKED_LIST_LISTITERATOR_H
#include "List.h"

class ListIterator {

    public:
// create a new list iterator pointing to an item in a list
        ListIterator(List *list, ListItem *item);
// get the content of the current element
        int& operator*();
// check whether this iterator is not equal to another one
        bool operator!=(const ListIterator &other) const;
        ListIterator& operator++(); // increment this iterator and return itself (prefix ++)
        ListIterator operator++(int); // increment this iterator and return the previous (postfix ++)
        ListIterator& operator--(); // decrement this iterator and return itself (prefix ++)
        ListIterator operator--(int); // decrement this iterator and return the previous (postfix ++)
    private:
        List *list;
        ListItem *item;

};


#endif //LINKED_LIST_LISTITERATOR_H
