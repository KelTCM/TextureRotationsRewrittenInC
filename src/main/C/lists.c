// As per the use of lists in TextureFinder, along with the lack of a list type in C, this here is nessesary in order to give a true port

#include<stdlib.h> // Import stdlib.h for malloc and realloc
#include<string.h> // And string.h for memcpy

// Define a macro to create a list
#define NEW_LIST(type) createList(sizeof(type))

typedef struct List {
    void *contents;
    size_t length;
    size_t size_per_item;
    int (*add)(List_Ptr list, void* item, size_t sizePerItem);
} List, *List_Ptr;

// A function to create a list
List createList(size_t lengthPerItem) {
    List newList;
    newList.length = 1
    newList.contents = malloc(lengthPerItem * newList.length);
    newList.size_per_item = lengthPerItem;

    newList.add = &add;
}

// And one to add to a list
int add(List_Ptr list, void *item) {
    list->length++; // Add to the length of the list
    list->contents = realloc(list->length*list->size_per_item); // Allocate the memory required to put the item into the list
    memcpy(list->contents + ((list->length-1) * list->size_per_item), item, list->size_per_item); // Copy the items memory and put it into the list
}