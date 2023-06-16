#include <iostream>

// hoare partition
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low - 1;
    int j = high + 1;
    while (1)
    {
        do {
            i++;
        } while (a[i] < pivot);
 
        do {
            j--;
        } while (a[j] > pivot);
 
        if (i >= j) {
            return j;
        }
        std::swap(a[i], a[j]);
    }
}

void quickSort(int array[], int begin, int end){
    if (begin < end)
    {
        int p = partition(array, begin, end);

        quickSort(array, begin, p-1); // left partition
        quickSort(array, p+1, end); // right partition
    }
}

void printArray(int array[], int size){
    for (int k=0; k < size; k++)
        std::cout << array[k] << " ";
        std::cout << std::endl;
}   

int main(){
    int array[] = {56, 98, 3, 8, 23, 97, 24, 0};
    int array_size = sizeof(array)/sizeof(array[0]);

    quickSort(array, 0, array_size-1);
    printArray(array, array_size);

    return 0;
}