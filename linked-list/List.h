//
// Created by Duncan on 9/12/2021.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H



#include <cstddef>
#include "ListItem.h"
#include <iostream>

/**
 * @name List;
 * @brief linked list
 * @author cppp
 */
class List {
    friend class ListIterator;
public:

    List(); // create an empty list
    ~List(); // delete the list and all of its elements
    List(const List &other); // create a copy of another list
    /**
    * @name appendElement(int i);
    * @brief append an integer to the list object
    * @sa ListItem();
    * @author cppp
    * @param i the integer which will be appended
    */
    void appendElement(int i); // append an element to the end of the list
    /**
    * @name prependElement(int i);
    * @brief prepend an integer to the list object
    * @author cppp
    * @param i the integer which will be prepended
    */
    void prependElement(int i); // prepend an element to the beginning of the list

    /**
     * @name insertElementAt(int i, size_t pos);
     * @brief insert an element at a specific position in the list
     * @author cppp
     * @param i the integer which will be inserted
     * @param pos the position
     */

    void insertElementAt(int i, size_t pos); // insert an element i at position pos

    /**
     * @name getSize() const;
     * @brief get the current size of the list
     * @author cppp
     */
    size_t getSize() const; // get the number of elements in list

    /**
     * @name getNthElement(size_t n);
     * @brief get the content of the n-th list item
     * @author cppp
     * @param n the position of the n-th item
     * @return the content of the n-th listitem as int reference
     */
    int & getNthElement(size_t n); // get content of the n-th element.

    /**
     * @name getFirst();
     * @brief get the content of the first list item
     * @author cppp
     * @return the content of the first listitem as int reference
     */
    int& getFirst();			// get content of the first element
    /**
     * @name getLast();
     * @brief get the content of the last list item
     * @author cppp
     * @return the content of the last listitem as int reference
     */
    int& getLast();				// get content of the last element
    /**
     * @name deleteFirst();
     * @brief deletes the first listitem out of the list object
     * @author cppp
     * @return the content of the deleted list item (0 if empty)
     */
    int deleteFirst();			// delete first element and return it (return 0 if empty)
    /**
     * @name deleteLast();
     * @brief deletes the last listitem out of the list object
     * @author cppp
     * @return the content of the deleted list item (0 if empty)
     */
    int deleteLast();			// delete last element and return it (return 0 if empty)
    /**
     * @name deleteAt(size_t pos);
     * @brief deleting the n-th element out of the list
     * @author cppp
     * @param pos the position at which the listitem will be deleted
     * @return the content of the deleted element
     */
    int deleteAt(size_t pos);		// delete element at position pos
    /**
     * @name begin();
     * @brief returns a list iteration pointing to the first listitem
     * @author cppp
     * @return a listiteration
     */
    ListIterator begin();		// return an iterator pointing to the first element
    /**
     * @name end();
     * @brief returns a list iteration pointing to the last listitem
     * @author cppp
     * @return a listiteration
     */
    ListIterator end();			// return an iterator pointing to the element after the last one
private:
    ListItem *first, *last; // first and last item pointers (nullptr if list is empty)
    size_t currentSize; // current size of the list

    friend std::ostream &operator<<(std::ostream &stream, List &list);
};
/** Print the given list to the stream. N.B. list should actually be const but then we would need
const ListIterators */

/**
 * @name operator<<(std::ostream &stream, List &list);
 * @brief operator overloading to easily print list to stdout
 * @author cppp
 */
std::ostream &operator<<(std::ostream &stream, List &list);




#endif //LINKED_LIST_LIST_H
