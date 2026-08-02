#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
   sort(arr, arr + n); 
   int sum=0; 
 
    for(int i = 0; i < n; ) {
        int count = 1;         
        while(i + 1 < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if(count>=arr[i]){
          sum=sum+(count-arr[i]);
        }
        else{
          sum=sum+count;
        }
        i++;  
    }
    cout<<sum<<endl;
  }
    return 0;
}