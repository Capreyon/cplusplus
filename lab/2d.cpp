#include <iostream>
 
int main()
{
    int size;
    int sizex, sizey;
 
    std::cout << "Enter the size of one-dimensional array ";
    std::cin >> size;
    // One-dimensional array
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
    delete[] arr;
    // Two-dimensional array
    std::cout << "Enter the size of two-dimensional array ";
    std::cin >> sizex >> sizey;
    int ** arr_2d = new int*[sizex];
    for(int i = 0; i < sizex; i++)
        arr_2d[i] = new int[sizey];
    for (int i = 0; i < sizex; i++)
    {
        for(int j = 0; j < sizey; j++)
            std::cin >> arr_2d[i][j];
    }
    // Deleting array completely
    for(int i = 0;i < sizex; i++)    
        delete[] arr_2d[i];
}