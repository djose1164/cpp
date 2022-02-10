/*
3-3. Add an Element* previous to Listing 3-9 to make a doubly linked list. 
Add an insert_before method to Element. Traverse the list from front to back, 
then from back to front, using two separate for loops. Print the operating_number 
inside each loop.
*/

#include <iostream>
#include <cstdio>

class Element
{
    public:
    char prefix[2];
    unsigned short operating_number;
    Element *next{};
    Element *previous{};

    void insert_after(Element *new_elem)
    {
        new_elem->next = next;
        printf("%p\t %p\n", new_elem, next);
        next = new_elem;
        printf("%p\t %p\n", new_elem, next);
    }

    void insert_before(Element *new_elem)
    {
        new_elem->previous = previous;
        previous = new_elem;
    }
};

int main(int argc, char const *argv[])
{
    Element elem1, elem2, elem3;
    unsigned short operatingnum{0};

    elem1.insert_after(&elem2);
    elem2.insert_after(&elem3);
    
    elem3.insert_before(&elem2);
    elem2.insert_before(&elem1);

    printf("%p\telem1's next's address: %p\n", &elem1, elem1.next);

    elem1.operating_number = ++operatingnum;
    elem1.prefix[0] = 's';
    elem1.prefix[1] = 't';

  //  elem2.insert_before(&elem3);
    elem2.operating_number = ++operatingnum;
    elem2.prefix[0] = 'n';
    elem2.prefix[1] = 'd';

    elem3.operating_number = ++operatingnum;
    elem3.prefix[0] = 'r';
    elem3.prefix[1] = 'd';

    /* Printing linkedlist. */
    for (auto current = &elem1; current; current = current->next)
        printf("Operating number: %d\n", current->operating_number);
    puts("*-*-*-*-*-*-*-*-*-*-*");
    for (auto current = &elem3; current; current = current->previous)
        printf("Operating number: %d\n", current->operating_number);
    return 0;
}
