#include "seven_sort.h"

using namespace fastsort;
using namespace mergesort;
using namespace heapsort;

int main()
{
    int arr[] = {3, 2, 8, 5, 9, 1, 4, 7, 6};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
    heapsort::sort(v, 0, 8);
    for(size_t i = 0; i < v.size(); i++)
        std::cout << v[i];
    std::cout << std::endl;
    char arr_c[] = {'b', 'r', 'd', 'a', 'b', 'h', 's', 'c', 'l'};
    std::vector<char> vc(arr_c, arr_c + sizeof(arr_c) / sizeof(char));
    heapsort::sort(vc, 0, 8);
    for(size_t i = 0; i < vc.size(); i++)
        std::cout << vc[i];
    std::cout << std::endl;
    return 0;
}
