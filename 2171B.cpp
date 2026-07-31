
#include<iostream>
using namespace std;
int main()
{
int t,n;
cin>>t;
for(int i=0;i<t;i++){
cin>>n;
int arr[n];
for(int j=0;j<n;j++){
  cin>>arr[j];}
  if(arr[0]==-1 && arr[n-1]==-1 ){
    arr[0]=0;
    arr[n-1]=0;
  }
  else if(arr[0]==-1){
    arr[0]=arr[n-1];
  }
    else if(arr[n-1]==-1){
    arr[n-1]=arr[0];
  }
  for(int a=1;a<n-1;a++){
    if(arr[a]==-1){
      arr[a]=0;
    }
  }
  int x=arr[0]-arr[n-1];
  unsigned int mag=abs(x);
  cout<<mag<<endl;
  for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
  }
  cout<<endl;
 
}
    return 0;
}