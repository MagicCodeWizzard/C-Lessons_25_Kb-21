#include <cstdlib>

struct array_list_element
{
    int data[10];
    size_t size_occupied;
    array_list_element* next;
    array_list_element* prev;

    array_list_element()
    {
        next = nullptr;
        prev = nullptr;
    }
};

struct array_list
{
    array_list_element* first;
    array_list_element* last;

    array_list()
    {
        first = nullptr;
        last = nullptr;
    }
};

void array_list_add_element(array_list& data, int element);
void array_list_add_element(array_list& data, int element, size_t index);
int* array_list_get_element(array_list& data, size_t index);


