#include <string>
#include <iostream>

struct MyType
{
    int id;
    bool is_set;
};

void static_memory()
{
    int a = 5;
    double b = 3.14;
    MyType my_var{};
    int my_arr[10] = { 0 };

    const char* str = "Hello world!";

    std::string str1 = "Hello world!";

    int size;
    int size1;
    
    std::cout << "Enter array size" << std::endl;
    std::cin >> size;

    int my_arr_2[size] = {0};
    int my_arr_3[size][size1] = {{0}};

}

void dynamic_memory()
{
    int b = 4; // Stack (static memory)
    int* a = new int(4); // Heap (dynamic memory)
    if (a == nullptr) {
        std::cerr << "No memory!" << std::endl;
        return;
    }

    *a = 7;
    std::cout << *a << std::endl;

    delete a;

    a = new int(10000);

    *a = 34;
    std::cout << *a << std::endl;

    delete a;
}

int main(int argc, char* argv[])
{
    static_memory();
    dynamic_memory();

    return 0;
}
