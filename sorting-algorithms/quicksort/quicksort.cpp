#include <iostream>

// hoare partition
int partition(int array[], int start, int end){
    int pivot = array[start]; // our pivot will be the first element

    int i = start+1; // first element after the pivot
    int j = end;       // last element of the array
    while (i <= j)
    {
        while (array[i] <= pivot)
        {
            i++; // keep moving our start index while the elements are smaller than our pivot
        }
        while (array[j] >= pivot)
        {
            j--; // keep moving our end index while the elements are greater than our pivot
        }

        if (i <= j)
        {            
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
        }

    }

    int temp = array[start];
    array[start] = array[j];
    array[j] = temp;

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
    int array[] = {56, 98, 3, 8, 23, 97, 24, 0};
    int array_size = sizeof(array)/sizeof(array[0]);

    quickSort(array, 0, array_size-1);
    printArray(array, array_size);

    return 0;
}