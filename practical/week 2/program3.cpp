

3)
3) Given a array of non negitive integers design a algo and implement it using a prog to count the no of pairs of 
integers such that their differences is equal to the given key 
test case
input 
5
1,51,84,21,31
20(given key)
output 2

#include <iostream>
using namespace std;
#include<math.h>


int main()
{int n;
cout<<"enter the size of array";
cin>>n;
int count=0;
int key;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"enter the key";
cin>>key;
for(int i=0;i<n-1;i++)
{
    if(abs(arr[i+1]-arr[i])==key)
        count++;
}
cout<<count;

    return 0;
}