#include <iostream>

class ArrayList {
    private: 
        int maxSize;
        int currentSize;
        int curr;
        int* arrayList;

    public:
        ArrayList(int size) { // Constructor
            maxSize = size;
            currentSize = curr = 0;
            arrayList = new int[size];
        }

        ~ArrayList() {
            delete[] arrayList;
        }

        void clear() { // delete and create a new array
            delete[] arrayList;
            currentSize = curr = 0;
            arrayList = new int[maxSize];
        }

        void insert(int value) {
            if (currentSize >= maxSize) {
                std::cout << "List capacity exceeded" << std::endl;
                return;
            }
            for (int i=currentSize; i>curr; i--) { // move elements to the right to make room
                arrayList[i] = arrayList[i-1];
            }
            arrayList[curr] = value;
            currentSize++;
        }

        void append(int value) {
            if (currentSize >= maxSize) {
                std::cout << "List capacity exceeded" << std::endl;
                return;
            }
            arrayList[currentSize++] = value;    // implement current size if you get an error      
        }

        int remove() {
            if (curr < 0 || curr > currentSize) {
                std::cout << "No element";
                return 0000;
            }
            int value = arrayList[curr];
            for (int i=curr; i<currentSize-1; i++) {
                arrayList[i] = arrayList[i+1];
            }
            currentSize--;
            return value;
        }

        void moveToStart() {
            curr = 0;
        }
        void moveToEnd() {
            curr = currentSize - 1; 
        }
        void prev() {
            if (curr != 0)
                curr--;
        }
        void next() {
            if (curr < currentSize)
                curr++;
        }
        void moveToPos(int pos) {
            if (pos < 0 || pos > currentSize) {
                std::cout << "Pos out of range" << std::endl;
                curr = pos;
            }
        }

        int lenght() {
            return currentSize;
        }

        int currPosition() {
            return curr;
        }

        int getValue() {
            if (curr < 0 || curr > currentSize) {
                std::cout << "No current element" << std::endl;
            }
            return arrayList[curr];
        }
        
        void printArray() {
            for (int i=0; i < currentSize; i++) {
                std::cout << arrayList[i] << " ";
            }
            std::cout << std::endl;
        }
        
};

int main(){
    ArrayList list(5);
    list.insert(1);
    list.append(4);
    list.append(5);
    list.printArray();

    return 0;
};