#include <iostream>
// /mnt/c/users/xia/Documents/GitHub/ComplicationTest/TestLab1

void fun()
{
    int* a;
    a = new int[10];
    delete[] a;
}

void fun1()
{
    int* a;
    a = new int[1000];
}

int main() {
    fun1();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
