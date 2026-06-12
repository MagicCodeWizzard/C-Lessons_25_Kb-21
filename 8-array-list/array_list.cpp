#include "array_list.hpp"

void array_list_add_element(array_list& data, int element)
{
    // array_list_element* current = data.first;
    // bool should_continue = true;

    // while (should_continue)
    // {
    //     if (current->size_occupied < sizeof(current->data)) {
    //         current->data[current->size_occupied] = element;
    //         current->size_occupied++;
    //         should_continue = false;
    //     } else {
    //         if (current->next == nullptr) {
    //             current->next = new array_list_element;
    //             current->next->prev = current;
    //         }

    //         current = current->next;
    //     }
    // }
    
    if (data.last == nullptr) {
        data.first = new array_list_element;
        data.last = data.first;
    }

    if (data.last->size_occupied < sizeof(data.last->data)) {
        data.last->data[data.last->size_occupied] = element;
        data.last->size_occupied++;
    } else {
        data.last->next = new array_list_element;
        data.last = data.last->next;

        data.last->data[data.last->size_occupied] = element;
        data.last->size_occupied++;
    }
}

int* array_list_get_element(array_list& data, size_t index)
{
    array_list_element* current_buff = data.first;
}

void array_list_add_element(array_list& data, int element, size_t index)
{

}
