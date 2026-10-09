#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int x;
    int start=0, end= n-1;
    cout<<"enter the array:";
for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    while(start<end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;

}    
for(int i=0;i<n-1;i++)
cout<<arr[i]<<" ";
}