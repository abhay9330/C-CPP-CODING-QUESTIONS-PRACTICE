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
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}

// second way of this 
// #include <iostream>
// using namespace std;
// int main() 
// {
//     int n,i;
//     cin>>n;
//     int arr [n];
//     for( i=0;i<n; i++){
//         cin>>arr[i];
//     }
//     for(i = n-1;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
// }
