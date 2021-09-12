//
// Created by Duncan on 9/12/2021.
//

#include "ListIterator.h"

ListIterator::ListIterator(List *list, ListItem *item) :
item(item), list(list){}

int& ListIterator::operator*(){
    return item->getContent();
}

bool ListIterator::operator!=(const ListIterator &other) const {
    return other.item != item;
}

// Prefix ++ -> increment iterator and return it
ListIterator& ListIterator::operator++() {
    if (item == NULL) {
        item = list->first; // set item to first item of list
    }
    else {
        item = item->getNext(); // set item to next item of current item
    }
    return *this; // return itself
}
// Postfix ++ -> return iterator to current item and increment this iterator
ListIterator ListIterator::operator++(int) {
    ListIterator iter(list, item); // Store current iterator
    if (item == NULL) {
        item = list->first; // set item to first item of list
    }
    else {
        item = item->getNext(); // set item to next item of current item
    }
    return iter; // return iterator to previous item
}

// Prefix -- -> decrement iterator and return it
ListIterator& ListIterator::operator--() {
    if (item == NULL) {
        item = list->last; // set item to last item of list
    }
    else {
        item = item->getPrevious(); // set item to previous item of current item
    }
    return *this; // return itself
}
// Postfix -- -> return iterator to current item and decrement this iterator
ListIterator ListIterator::operator--(int) {
    ListIterator iter(list, item); // Store current iterator
    if (item == NULL) {
        item = list->last; // set item to last item of list
    }
    else {
        item = item->getPrevious(); // set item to previous item of current item
    }
    return iter; // return iterator to previous item
}