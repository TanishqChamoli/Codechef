#include<iostream>

using namespace std;

int merge(int arr[],int arr2[],int st,int mid,int end){
    int count,i,j;
    for(i = st,j = mid+1,count = st;i <= mid && j <= end;count++){
        if(arr[i] <= arr[j]){
            arr2[count] =arr[i];
            i++;
        }
        else{
            arr2[count] = arr[j];
            j++;
        }
    }
    while(i<=mid){
        arr2[count++] = arr[i++];
    }
    while(j<=end){
        arr2[count++] = arr[j++];
    }
    for(i = st;i<=end;i++){
        arr[i] = arr2[i];
    }
    // cout<<"hello";
    return 0;
}

int mergesort(int arr[],int arr2[],int st,int end){
    if(st < end){
        int mid = (st+end)/2;
        mergesort(arr,arr2,st,mid);
        mergesort(arr,arr2,mid+1,end);
        merge(arr,arr2,st,mid,end);
    }
    else
        return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n]= {0};
    int arr2[n]= {0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sorting algos
    int st = 0;
    int end = n-1;
    
    mergesort(arr,arr2,st,end);

    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<"\n\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}