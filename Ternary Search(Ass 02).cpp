#include<iostream>
using namespace std;

int ternary_search(int arr[], int n, int x) {
    int start = 0;
    int end = n - 1;
    int mid1;
    int mid2;
    while (start <= end) {
        int mid1 = (end - start) / 3 + start;
        int mid2 = 2 * (end - start) / 3 + start;
        if (x == arr[mid1]) {
            return mid1;
        }
        else if (x == arr[mid2]) {
            return mid2;
        }
        else if (x < arr[mid1]) {
            end = mid1 - 1;
        }
        else if (x < arr[mid2]) {
            start = mid1 + 1;
            end = mid2 - 1;
        }
        else {
            start = mid2 + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = { 2,3,5,7,10,10,11,15,17,20,25,30,32,36,40 };
    int n = 15;
    int index;
    int x;
    cout<<"Enter element you want to search: ";
    cin>>x;
    index = ternary_search(arr, n, x);
    if (index != -1) {
        cout<<" "<< x<< " is present at index "<< index;
    }
    else {
        cout<<" "<< x<< " is not present in the given array\n";
    }
    return 0;
}
