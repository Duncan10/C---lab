//
// Created by Duncan on 9/12/2021.
//

#include "ListItem.h"

ListItem::ListItem(ListItem *prev, ListItem *next, int content)
: previous(prev), next(next), content(content){
    if(previous){
        previous->next=this; //set prev pointer to this object if prev not null pointer (head of list)
    }
    if(next){
        next->previous=this;//set next previous pointer to this object if next not null pointer (end of list)
    }
    return;
}

int & ListItem::getContent() {
    return content;
}

ListItem * ListItem::getNext() {
    return next;
}

ListItem * ListItem::getPrevious() {
    return previous;
}

ListItem::~ListItem(){
    if(previous){
        previous->next=this->next;
    }
    if(next){
        next->previous=this->previous;
    }
}
