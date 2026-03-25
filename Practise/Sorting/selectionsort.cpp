#include <iostream>  
using namespace std;  


int main()  
{

    int arr[] = {5, 3, 2, 4};  
    int n = 4;  

    // Outer loop - represents current position where correct element should go
    for(int i = 0; i < n-1; i++)  
    {
        int minIndex = i;  
        // Assume current index has the minimum element

        // Inner loop - find the actual minimum element in remaining array
        for(int j = i+1; j < n; j++)  
        {
            // Compare current element with current minimum
            if(arr[j] < arr[minIndex])  
            {
                minIndex = j;  
                // Update index of minimum element
            }
        }

        // After finding minimum → swap it with current position (i)
        swap(arr[i], arr[minIndex]);  
    }

    // Print the sorted array
    for(int i = 0; i < n; i++)  
        cout << arr[i] << " ";  

}