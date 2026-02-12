// Left & Right Rotation of 1D array

#include<iostream>
#include<vector>
using namespace std;

void rotateleft(vector<int> &arr,int d){
    vector<int>res;
    for(int i=d;i<arr.size();i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<res.size();i++){
        arr[i]=res[i];
    }
}

void rotateright(vector<int> &arr,int d){
    vector<int>res;
    for(int i=arr.size()-d;i<arr.size();i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<arr.size()-d;i++){
        res.push_back(arr[i]);
    }
    for(int i=0;i<res.size();i++){
        arr[i]=res[i];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Normal Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Enter the number of rotations: ";
    int d;
    cin>>d;
    rotateleft(arr,d);
    cout<<"Left Rotated Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Right Rotated Array: ";
    rotateright(arr,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
