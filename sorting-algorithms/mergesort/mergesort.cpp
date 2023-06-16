#include <iostream>

void merge(int array[], int left, int mid, int right){
    int const sub1 = mid - left + 1;  // sub 1 and sub2 define the size of the array
    int const sub2 = right - mid;

    int First[sub1]; //temp array
    int Second[sub2];

    int x, y, z;
    //Copy data to temp arrays
    for(x=0; x < sub1; x++)
        First[x] = array[left+x];
    for(y=0; y < sub2; y++)
        Second[y] = array[mid+1+y];

    x = 0;
    y = 0;
    z = left;

    while(x < sub1 && y < sub2)
    {
        if (First[x] <= Second[y])
        {
            array[z] = First[x];
            x++;
        }
        else
        {
            array[z] = Second[y];
            y++;
        }
        z++;
    }
    // copy the remaining parts
    while (x < sub1)
    {
        array[z] = First[x];
        x++;
        z++;
    }
    while(y < sub2)
    {
        array[z] = Second[y];
        y++;
        z++;
    }
}

void mergeSort(int array[], int begin, int end){
    if (begin < end)
    {
        int mid = (begin+end)/2;
        mergeSort(array, begin, mid);
        mergeSort(array, mid+1, end);
        merge(array, begin, mid, end);

    }
}


void printArray(int array[], int size){
    for (int i=0; i < size; i++)
        std::cout << array[i] << " ";
        std::cout << std::endl;
}

int main(){
    int array[] = {56, 98, 3, 8, 23, 97, 24, 0};
    int array_size = sizeof(array)/sizeof(array[0]);

    mergeSort(array, 0, array_size-1);
    printArray(array, array_size);

    return 0;
}