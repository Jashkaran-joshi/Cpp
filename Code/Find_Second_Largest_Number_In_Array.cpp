#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Array must contain at least two elements." << endl;
        return -1; // Indicates error
    }

    int largest = arr[0];
    int secondLargest = -1; // Initialized to a value lower than any array element

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1)
    {
        cout << "No second largest element found." << endl;
        return -1; // Indicates error
    }

    return secondLargest;
}

int main()
{
    int size;

    // Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Ensure valid size
    if (size < 2)
    {
        cout << "Array must contain at least two elements." << endl;
        return 1; // Exit with error code
    }

    // Dynamically allocate array
    int *arr = new int[size];

    // Get the array elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    // Find the second largest element
    int result = findSecondLargest(arr, size);

    // Output the result
    if (result != -1)
    {
        cout << "The second largest element is: " << result << endl;
    }

    // Clean up dynamic memory
    delete[] arr;

    return 0;
}
