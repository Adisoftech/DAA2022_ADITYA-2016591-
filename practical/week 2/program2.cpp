

2))

2)Given a sorted array of positive integers design a algo and implement it using a programm to find three indexes 
i,j,k such that arr[i]+arr[j]=arr[k];


test cases 
input 
6
1,2,3,5,7,32
output
0,1,2
1,2,3
1,3,4
#include <iostream>

using namespace std;
int check(int sum,int arr[],int n){
    for(int i=0;i<n;i++)
    {

        if(sum==arr[i])
        {cout<<i;
             return 1;
        }


    }
    return 0;


}

int main()
{int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sum,ans;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {

        sum=arr[i]+arr[j];
       ans= check(sum,arr,n);
       if(ans==1)
        cout<<","<<i<<","<<j<<endl;
    }
}


    return 0;
}

