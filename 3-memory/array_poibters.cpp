#include <iostream>

int main()
{
    int a = 43;
    int& ref = a;
    
    int* pointer = nullptr;
    pointer = &a;
    
    if (pointer != nullptr) {
        *pointer = 65;
    }
    
    double d_array[25] = { 101.1 };
    
    std::cout << std::hex << (double*)d_array << std::endl;
    
    double* d_arr_p = d_array;
    d_arr_p++;
    
    double* d_array_end = &d_array[24];
    
    for (double* pointer = d_array; pointer <= d_array_end; pointer += 2){
        std::cout << std::hex << pointer << " -> " 
                    << std::dec << (*pointer) << std::endl;
    }
}
