#include <iostream>

void bubbleSort(int arr[], int size){
    for (int j=0; j < size-1; j++) // precisamos realizar o segundo loop n-1 vezes, pois assim garantimos que o array está ordenado
    {                              // já que estamos considerando o pior caso possível.
        for (int i=0; i < size-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int main(){
    int list[8] = {7, 23, 0, 6, 1, 456, 22, 3};

    bubbleSort(list, 8);

    int i;
    for (i=0; i<8; i++)
        std::cout << list[i] << " ";

    return 0;
}