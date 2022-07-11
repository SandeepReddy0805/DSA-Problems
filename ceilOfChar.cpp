#include<iostream>
using namespace std;

char ceilOfChar(char arr[], int n , char target)
{
    int start=0,end=n-1;
    int mid;
    while(start<=end)
    {
        mid = (start + end) / 2;
        if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return arr[mid + 1];
        }
    }
    return arr[start % n];
}

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    char target;
    cin>>target;
    char ans = ceilOfChar(arr,n,target);
    cout<<ans;
    return 0;
}