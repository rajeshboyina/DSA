#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Bubble_sort(vector<int> &arr)
{
    int n=arr.size();
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void Insertion(vector<int> &arr)
{
    int n=arr.size();
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while((j>=0) && (key<arr[j])){
            arr[j+1]=arr[j];
            j--;
        }
        //if(key!=arr[j])
        arr[j+1]=key;
    }
}
void selection(vector<int> &arr)
{
    int n=arr.size();
    int i,j,key;
    for(i=0;i<n;i++)
    {
        key=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[key])
                key=j;
        }
        if(i!=key)
            swap(arr[i],arr[key]);
    }

}
//QuickSort
int partition(vector<int> &arr,int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void Quick(vector<int> & arr,int low,int high)
{
    if(low<high)
    {
        int partition_index=partition(arr,low,high);
        Quick(arr,low,partition_index-1);
        Quick(arr,partition_index+1,high);
    }
}
//MergeSort
void Merge(vector<int> &arr,int low,int mid,int high)
{
    int m=mid-low+1;
    int n=high-mid;
    int left[m],right[n];
    int i,j,k;
    for(i=0;i<m;i++)
    {
        left[i]=arr[i+low];
    }
    for(j=0;j<n;j++)
        right[j]=arr[j+mid+1];
    i=0;
    j=0;
    k=low;
    while(i<m && j<n)
    {
        if(left[i]<right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<m)
        arr[k++]=left[i++];
    while(j<n)
        arr[k++]=right[j++];

}
void MergeSort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(arr,low,mid-1);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}
int main(){
    vector<int> arr={6,3,9,1,2};
    for(auto i:arr)
        cout<<i<<" ";
    cout<<endl;
    //Bubble_sort(arr);
    //Insertion(arr);
    //selection(arr);
    //Quick(arr,0,arr.size());
    MergeSort(arr,0,arr.size());
    for(auto i:arr)
        cout<<i<<" ";
    return 0;

    }