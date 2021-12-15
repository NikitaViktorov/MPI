// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>

int main()
{
    std::vector<int> numbers;
    int n = 1000 + rand() % 1112;
    for (int i = 0; i < n; i++)
    {
        int number = -100 + rand() % 101;
        numbers.push_back(number * number);
    }
    double sum_of_elems = std::accumulate(numbers.begin(), numbers.end(), 0);
    
    double result = fabs(sum_of_elems);
    std::cout << "Result:" << result;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
