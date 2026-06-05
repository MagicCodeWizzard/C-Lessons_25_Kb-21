struct MyCustomType {
};

struct MyCustomType1 {
    int id;
    bool is_active;
    char* description;
    unsigned long long long_id;
};

struct MyBitStructure {
    MyCustomType1 
    int field : 6;
    int another_field : 2;
};