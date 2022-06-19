#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int piviot = 0; 
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            piviot = i;
    }
    int temp = piviot;
    int start = 0,end = n-1;
    while(start<=piviot){
        int mid = (start+piviot)/2;
        if(arr[mid]==key){
            cout<<"\nElement found at "<<mid;
            return 0;
        }
        else if(arr[mid]>key){
            piviot = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    while(temp+1<=end){
        int mid = (temp+1+end)/2;
        if(arr[mid]==key){
            cout<<"\nElement found at "<<mid;
            return 0;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else{
            temp = mid;
        }
    }
    cout<<"\nElement not found";
return 0;
}