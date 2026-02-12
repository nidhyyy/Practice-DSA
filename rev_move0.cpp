// 1.Reverse Array and moving zeroes to end
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


void moveZeroes(vector<int> &nums){
    int n=nums.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0)c++;
    }
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    for(int i=0;i<c;i++){
        temp.push_back(0);
    }
    for(int i=0;i<n;i++){
        nums[i]=temp[i];
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=nums[i];
    }

    cout<< "Original Array: ";
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArray(arr,0,n-1);
    cout<<"Reversed Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Before Moving Zeroes: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    moveZeroes(nums);
    cout<<"After Moving Zeroes: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

