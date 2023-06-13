#include <iostream>

void selectionSort(int arr[], int size){
    for (int i = 0; i < size-1 ;i++)
    {
        int min_index = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }

        if (arr[min_index] != arr[i])
        {
            int temp;
            temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }

}

int main(){

    int list[8] = {7, 23, 0, 6, 1, 456, 22, 3};

    selectionSort(list, 8);

    int i;
    for (i=0; i<8; i++)
        std::cout << list[i] << " ";

    return 0;
}