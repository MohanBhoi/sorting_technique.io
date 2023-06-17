#include<bits/stdc++.h>

using namespace std;
        
void selectionsort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[mini]>arr[j]) mini=j;
        }
        swap(arr[mini],arr[i]);
    }
}

void bubblesort(vector<int>&arr,int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
    
void insertionsort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}
