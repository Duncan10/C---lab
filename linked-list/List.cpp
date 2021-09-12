//
// Created by Duncan on 9/12/2021.
//

#include "List.h"
#include "ListIterator.h"
#include "stdexcept"

List::List():currentSize(0), first(nullptr), last{nullptr} {}

List::~List(){
    while(currentSize > 0){    //clear front to back
        deleteFirst();
    }
}

void List::appendElement(int i) {
    ListItem *appItem = new ListItem(last, nullptr, i);
    this->last = appItem;
    if (this->getSize() == 0) {
        this->first = appItem;
    }
    currentSize++;
}
void List::prependElement(int i) {
    ListItem *prepItem = new ListItem(nullptr, first, i);
    this->first=prepItem;
    if(currentSize==0){
        this->last=prepItem;
    }
    currentSize++;
}
void List::insertElementAt(int i, size_t pos) {
    if(pos >= currentSize || pos < 0){
        //should throw exception as index exceeds bound
        throw std::out_of_range("position out of bounds");
        return;
    }
    if(pos==0){
        prependElement(i);
        return;
    }
    else if(pos >= currentSize){
        appendElement(i);
    }
    else{
        size_t pos;
        ListItem *current = first;
        while (pos-- > 0) {
            current = current->getNext();
        }
        new ListItem(current->getPrevious(), current, i);
        currentSize++;
    }
}


size_t List::getSize() const {return currentSize;}

int& List::getNthElement(size_t n) {
    if(n >= currentSize || n < 0){
        //should throw exception as index exceeds bound
        throw std::out_of_range("position out of bounds");
    }
    ListItem *current = first;
    for(size_t p = 0; p<n; ++p) {
        current = current->getNext();
    }
    return current->getContent();
}

int& List::getFirst() {
    return first->getContent();
}

int& List::getLast() {
    return last->getContent();
}

int List::deleteFirst() {
    if (first) {
        int content = first->getContent(); // save content
        ListItem *next = first->getNext();
        delete first; // delete first element
        first = next; // and the current first element to next of first element before
        if (next == nullptr) {// do not forget to reset last element if list is empty
            last = nullptr;
        }
        --currentSize;
        return content;
    }
    return 0;
}

int List::deleteLast() {
    if(last){
        ListItem *prev = last->getPrevious();
        int content = last->getContent();
        delete last;
        last = prev;
        if(prev == nullptr){
            first = nullptr;
        }
        --currentSize;
        return content;
    }
   return 0;
}
int List::deleteAt(size_t pos) {
    if(pos >= currentSize || pos < 0){
        //should throw exception as index exceeds bound
        throw std::out_of_range("position out of bounds");
    }
    if (pos == 0) {
        return deleteFirst();
    }
    else if (pos >= currentSize - 1) {
        return deleteLast();
    }
    else {
        size_t index = pos;
        ListItem* p = first;
        // iterate over elements
        while (index-- > 0) {
            p = p->getNext();
        }
        int content = p->getContent();
        delete p;
        --currentSize;
        return content;
    }
}
std::ostream &operator<<(std::ostream &stream, List &list){
    size_t s = list.getSize();
    for(size_t pos = 0; pos < s; ++pos){
        stream << list.getNthElement(pos) << ", ";
    }
    return stream;
}

ListIterator List::begin() {
    return  * new ListIterator(this, this->first);
}

ListIterator List::end() {
    return  * new ListIterator(this, this->first);
}