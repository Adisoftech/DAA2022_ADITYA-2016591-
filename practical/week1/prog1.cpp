//1)  GIVEN AN ARRAY OF NON NEGITIVE INTEGERS DESIGN A LINEAR ALGORITH AND IMPLEMENT IT USING A PROGRAMM
 //TO FIND WHETHER THE GIVEN KEY ELEMENT IS PRESENT IN ARRAY OR NOT ??
//ALSO FIND THE TOTAL NO OF COMPARISONS.




//ANS)))

#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
   int n,ans=0,count=0;
   cout<<"enter the no of elements ";
   cin>>n;
int arr[n];
   cout<<"enter the elements";
   for(int i=0;i<n;i++)
   {
      cin>> arr[i];
   }
   int key;
   cout<<"enter the key element";
   cin>>key;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
    {    ans=i;
    break;
        
    }
        count++;
        
    }
    if(ans==0)
    cout<<"no element found";
    else
    cout<<"key element is at"<<ans<<"no of comp are"<<count+1;

    return 0;
}

