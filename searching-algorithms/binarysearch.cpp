#include <iostream>

int binarySearch(int array[], int item, int begin, int end){
    if (begin <= end)
    {
        int mid = (end+begin)/2;

        if (array[mid] == item)
        {
            return mid;
        }
        if (item < array[mid])
        {
            return binarySearch(array, item, begin, mid-1);
        }
        else
        {
            return binarySearch(array, item, mid+1, end);
        }
    }
    return -1; //that means the item we are looking for is not in the array
}

int main(){
    int array[] = {1, 2, 3, 5, 7, 8, 9, 13, 27, 31, 43};
    int array_size = sizeof(array)/sizeof(array[0]);
    int num = 3;

    std::cout << binarySearch(array, num, 0, array_size-1);

    return 0;
}