
#include <iostream>
#include <array>
#include <vector>
#include <conio.h>
#define sampleCount 60000000

// Clear the console draw a diagram of every elements
template <typename T>
void printArray(T &a)
{
    system("cls");
    for (size_t i = 0; i < a.size(); i++)
    {
        printf("%.2f", (float)i / 100);
        std::cout << "-----" << a[i] << '\n';
    }
    std::cout << '\n';
}

int main()
{
    srand((unsigned)time(NULL));
    (float)rand() / RAND_MAX;
    std::array<int, 101> a = {};

    for (int i = 0; i < sampleCount; i++)
    {
        float temp = (float)rand() / RAND_MAX;
        int index = temp * 100;
        a[index]++;
    }
    printArray(a);


    
}
