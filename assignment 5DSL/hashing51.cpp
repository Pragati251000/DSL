#include <iostream>
using namespace std;

int main() {
    int tableSize, n, key, index;

    cout << "Enter hash table size: ";
    cin >> tableSize;

    int hashTable[tableSize];

    
    for(int i = 0; i < tableSize; i++) {
        hashTable[i] = -1;
    }

    cout << "Enter number of elements: ";
    cin >> n;

    
    for(int i = 0; i < n; i++) {
        cout << "Enter key value: ";
        cin >> key;

        index = key % tableSize;

        
        while(hashTable[index] != -1) {
            index = (index + 1) % tableSize;
        }

        hashTable[index] = key;
        cout << "Element " << key << " inserted at index " << index << endl;
    }

    
    cout << "\n--- Hash Table ---\n";
    for(int i = 0; i < tableSize; i++) {
        if(hashTable[i] != -1)
            cout << "Index " << i << " : " << hashTable[i] << endl;
        else
            cout << "Index " << i << " : Empty" << endl;
    }

    return 0;
}
