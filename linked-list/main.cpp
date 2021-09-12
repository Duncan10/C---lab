#include <iostream>
#include "List.h"
#include "ListIterator.h"

int main() {
    std::cout << "Hello, World... time to test our own implementation of linked lists in C++ (14)!" << std::endl;
    List list;
    for(int i = 0; i<10; i++){
        list.appendElement(i); //list: 0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9
    }
    std::cout << list << std::endl;
    list.deleteFirst(); //list:  1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9
    std::cout << list << std::endl;
    list.deleteAt(2); // 1 - 2 - 4 - 5 - 6 - 7 - 8 - 9
    std::cout << list << std::endl;
    list.prependElement(0); // 0 -1 - 2 - 4 - 5 - 6 - 7 - 8 - 9
    std::cout << list << std::endl;
    list.appendElement(1); //0 - 1 - 2 - 4 - 5 - 6 - 7 - 8 - 9 - 1
    std::cout << list << std::endl;

    //prompt an out of bound exception
    try {
        list.deleteAt(-2);
    } catch(const std::out_of_range &ex){
        std::cout << ex.what() << std::endl;
    }


    return 0;


}
