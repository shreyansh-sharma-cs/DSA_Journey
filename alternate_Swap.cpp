#include<iostream>

using namespace std;

void print(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
void swapalternate(int arr[], int size){
    for (int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[6]= {4,6,7,8,2,9};

    swapalternate(arr,6);
    print(arr,6);
}