// Recursive Code For Linear Search
#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int key)
{
  if (size == 0)
  {
    return -1;
  }
  if (arr[size] == key)
  {
    return size;
  }
  else
  {
    int ans = linearsearch(arr, size - 1, key);
    return ans;
  }
}
int main() {
  int arr[5]={1,5,6,9,4};
  int key = 5;
  int ans = linearsearch(arr, 5, key);
  if(ans == -1 ){
    cout << "The element "<<key <<" is not found."<< endl;
  }else{
    cout << "The element "<<key <<" is found at "<<ans <<" index of the given array."<< endl;
  }
return 0;
}
// Code contributed by pragatikohli

