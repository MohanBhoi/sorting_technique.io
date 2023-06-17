#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
        int pi=func(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main(){
    int n;
    cout<<"num of element of arr:"<<" ";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    quicksort(arr,0,n-1);
    cout<<"sorted array will be like :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}