#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n = 0; // Current size of array
    int choice;

    while (true) {
        cout << "\n——MENU——\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter number of elements (max " << MAX_SIZE << "): ";
                cin >> n;
                if (n > MAX_SIZE || n < 0) {
                    cout << "Invalid size.\n";
                    n = 0;
                    break;
                }
                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];
                }
                cout << "Array created successfully.\n";
                break;
            }

            case 2: {
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; ++i) {
                        cout << arr[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            }

            case 3: {
                if (n >= MAX_SIZE) {
                    cout << "Array is full. Cannot insert.\n";
                } else {
                    int pos, val;
                    cout << "Enter position to insert (0 to " << n << "): ";
                    cin >> pos;
                    if (pos < 0 || pos > n) {
                        cout << "Invalid position.\n";
                    } else {
                        cout << "Enter value to insert: ";
                        cin >> val;
                        for (int i = n; i > pos; --i) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = val;
                        ++n;
                        cout << "Element inserted successfully.\n";
                    }
                }
                break;
            }

            case 4: {
                if (n == 0) {
                    cout << "Array is empty. Cannot delete.\n";
                } else {
                    int pos;
                    cout << "Enter position to delete (0 to " << n - 1 << "): ";
                    cin >> pos;
                    if (pos < 0 || pos >= n) {
                        cout << "Invalid position.\n";
                    } else {
                        for (int i = pos; i < n - 1; ++i) {
                            arr[i] = arr[i + 1];
                        }
                        --n;
                        cout << "Element deleted successfully.\n";
                    }
                }
                break;
            }

            case 5: {
                if (n == 0) {
                    cout << "Array is empty.\n";
                } else {
                    int key, found = -1;
                    cout << "Enter value to search: ";
                    cin >> key;
                    for (int i = 0; i < n; ++i) {
                        if (arr[i] == key) {
                            found = i;
                            break;
                        }
                    }
                    if (found != -1) {
                        cout << "Element found at position " << found << ".\n";
                    } else {
                        cout << "Element not found.\n";
                    }
                }
                break;
            }

            case 6: {
                cout << "Exiting program.\n";
                exit(0);
            }

            default: {
                cout << "Invalid choice. Try again.\n";
            }
        }
    }

    return 0;
}
