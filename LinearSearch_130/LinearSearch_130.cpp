
#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // number of elements in the array
int i; // index of array elements


void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    // Accept array elements
    cout << "\n=========================\n";
    cout << "Enter array elements \n";
    cout << "===========================\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr; // Number of comparisons

    do
    {
        // accept the number to be searched
        cout << "\nEnter the elements you want to search: "; //langkah no 1 algoritma 
        int item;
        cin >> item;

        ctr = 0;
        for (i = 0; i < n; i++)         // langkah no 2 & 3 & 4
        {
            ctr++;
            if (arr[i] == item)         // langkah no 5 algoritma
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
            }
        }
    }
}

int main()
{
    
}

