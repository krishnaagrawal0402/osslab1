#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter no of elements you want in the array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter your elements";
    cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=arr[i];
  }
  int avg=sum/n;
  cout<<"The average is: "<<avg;
  return 0;
}
