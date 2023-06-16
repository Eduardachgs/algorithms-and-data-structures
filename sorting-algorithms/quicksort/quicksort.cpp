#include <iostream>

// hoare partition
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (a[i] <= pivot) {
            i++;
        }
 
        while (a[j] > pivot) {
            j--;
        }
 
        if (i < j) {
            std::swap(a[i], a[j]);
        }
    }

    std::swap(a[low], a[j]);

    return j;
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
    int array[] = {7, 23, 0, 6, 1, 456, 22, 3};
    int array_size = sizeof(array)/sizeof(array[0]);

    quickSort(array, 0, array_size-1);
    printArray(array, array_size);

    return 0;
}