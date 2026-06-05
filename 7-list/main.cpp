#include <string>
#include <iostream>

struct ListNode
{
    std::string data;
    ListNode* prev = nullptr;
    ListNode* next = nullptr;
};

struct LinkedList
{
    ListNode* first;
    ListNode* last;
};

void printList(ListNode* node)
{
    ListNode* current = node;

    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int main()
{
    ListNode* node = new ListNode;
    node->data = "hello world";

    ListNode* node2 = new ListNode;
    node2->data = "world hello!";

    node->next = node2;
    node2->prev = node;


    ListNode* node_new = new ListNode;
    node_new->data = "strange data!";

    node_new->prev = node;
    node_new->next = node2;

    node->next = node_new;
    node2->prev = node_new;

    printList(node);

    return 0;
}