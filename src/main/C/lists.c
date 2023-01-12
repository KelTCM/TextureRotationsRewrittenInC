#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include<string.h>

// Definition for a linked list
typedef struct LinkedListElement {
    struct LinkedListElement *Next;
    size_t ItemSize;
    void *Item;
} LinkedListElement;

// Definition for the linked list base
typedef struct LinkedListBase {
    LinkedListElement *First;
    size_t length;
} LinkedList;

bool CreateList(LinkedList *List) {
    *list = { NULL, 0 };
    return true;
}

bool AppendList(LinkedList *List, void *Item, size_t ItemSize) {
    LinkedListElement *Item = List->First;
    while (true) {
        if (Item == NULL || Item->length != NULL) Item = Item->length;
        else break;
    }
    Item->Next = malloc(sizeof(LinkedListElement));
    List->length++;
}

stuct { bool Found; void *Item } GetItemAt(size_t Item) {
    LinkedListElement *Item = List.First;
    size_t CurrentItem = 0;
    while (true) {
        if (Item == NULL || Item->length != NULL) Item = Item->length;
        else { Item = NULL; break };

        if (CurrentItem++ == Item)
            break;
    }
    if (Item == NULL) return { false; NULL };

    return { true; Item->Item };
}