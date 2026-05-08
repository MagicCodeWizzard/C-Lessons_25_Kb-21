#include <string>
#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <memory>

using namespace std::chrono_literals;

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

void allocate_memory()
{
    int* array;

    for (int i = 0; i < 1000; i++) {
        array = new int[1000000];
        std::this_thread::sleep_for(2s);
        delete[] array;
    }
}

void dynamic_arrays()
{
    // a[4][4];
    // Виділення пам'яті під масив масивів (рядків)
    int*** twod_array = new int**[4];
    for (int i = 0; i < 4; i++) {
        // Виділення пам'яті під масив значень (стовпчиків в рядках)
        twod_array[i] = new int*[4];
        for (int j = 0; j < 4; j++) {
            twod_array[i][j] = new int(i * j);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            std::cout << *twod_array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j =0; j < 4; j++) {
            delete twod_array[i][j];
        }
        delete[] twod_array[i];
    }

    delete[] twod_array;
}

int main(int argc, char* argv[])
{
    static_memory();
    dynamic_memory();

    allocate_memory();

    dynamic_arrays();

    return 0;
}
