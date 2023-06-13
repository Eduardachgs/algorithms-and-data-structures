#include <iostream>

void intersionSort(int arr[], int size){
    for (int i = 1; size; i++){
        int key = arr[i];
        int j = i-1;
        
        while (j >=0 and arr[j] > key)
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

int main(){

    int list[8] = {7, 23, 0, 6, 1, 456, 22, 3};

    intersionSort(list, 8);

    int i;
    for (i=0; i<8; i++)
        std::cout << list[i] << " ";

    return 0;
}