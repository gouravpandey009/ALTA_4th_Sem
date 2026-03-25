#include <iostream>  
using namespace std;  

int main()  
{
    
    int arr[] = {5, 3, 2, 4};  

    int n = 4;  

    // Outer loop → controls number of passes
    // We need (n-1) passes to fully sort the array
    for(int i = 0; i < n-1; i++)  
    {
        // Inner loop do compares adjacent elements
        // After each passlargest element goes to correct position
        // So we reduce the range (n - i - 1)
        for(int j = 0; j < n-i-1; j++)  
        {
            // Compare current element with next element
            if(arr[j] > arr[j+1])  
            {
                // If left element is greater swap them
                // This moves larger element to the right
                swap(arr[j], arr[j+1]);  
            }
        }
        // After this loop one largest element is fixed at the end
    }

    // Loop to print the sorted array
    for(int i = 0; i < n; i++)  
        cout << arr[i] << " ";  

}