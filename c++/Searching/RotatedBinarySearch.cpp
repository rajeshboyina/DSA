#include<iostream>
#include<vector>
using namespace std;
int RotatedBinarySearch(vector<int> arr, int l, int h,int target)
{
    //cout<<"l:"<<l<<"h:"<<h<<endl;
    if(l>h)
    return -1;
    int mid=(l+h)/2;
    if(arr[mid]==target)
    return mid;
    if(arr[l]==arr[mid]&& arr[mid]==arr[h])
        return RotatedBinarySearch(arr,l++,h--,target);
    if(arr[l]<=arr[mid]) //right sorted
    {
        if(arr[l]<=target && target<=arr[mid])
        return RotatedBinarySearch(arr,l,mid-1,target);
        else
        return RotatedBinarySearch(arr,mid+1,h,target);
    }
    else // left sorted
    {
        if(arr[mid]<=target && target<=arr[h])
        return RotatedBinarySearch(arr,mid+1,h,target);
        else
        return RotatedBinarySearch(arr,l,mid-1,target);
    }
}
int BinarySearch(vector<int> arr,int l,int h,int target)
{
    if(l>h)
    return -1;
    int mid=(l+h)/2;
    if(arr[mid]==target)
    return mid;
    if(arr[l]==arr[mid]&& arr[mid]==arr[h])
    return BinarySearch(arr,l++,h--,target);
    if(arr[mid]<target)
    return BinarySearch(arr,mid+1,h,target);
    return BinarySearch(arr,l,mid-1,target);
}
int main(){
    vector<int> arr={4,7,9,10,13,13,13,15,15,15,17};
    int n=arr.size();
    cout<<BinarySearch(arr,0,n-1,15)<<endl;
    int k=4;
    vector<int> RotatedArr(n,1);
    for(int i=0;i<n;i++)
    {
        RotatedArr[i]=arr[(i+k)%n];
        cout<<RotatedArr[i]<<" ";
    }
    cout<<endl;
    cout<<RotatedBinarySearch(RotatedArr,0,n-1,13);
    return 0;
}