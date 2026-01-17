#include <iostream>
using namespace std;

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4, ch, pos, val, key;

    do
    {
        cout << "\n1.Traversal  2.Update  3.Insert  4.Search  5.Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch)
        {

        case 1: // Traversal
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        case 2: // Updation
            cout << "Enter position and new value: ";
            cin >> pos >> val;
            a[pos - 1] = val;
            cout << "Updated";
            break;

        case 3: // Insertion (at end)
            cout << "Enter value to insert: ";
            cin >> val;
            a[n++] = val;
            cout << "Inserted";
            break;

        case 4: // Searching
            cout << "Enter element to search: ";
            cin >> key;
            for (int i = 0; i < n; i++)
                if (a[i] == key)
                    cout << "Found at position " << i + 1;
            break;

        case 5:
            cout << "Exit";
        }

    } while (ch != 5);

    return 0;
}
