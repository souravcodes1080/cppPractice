 

 #include <iostream>
 #include<array>
 #include<algorithm>
 using namespace std;

 void reverseHelper(int arr[], int l, int r){
    if(l>=r) return;
    swap(arr[l] ,arr[l+r]);
    reverseHelper(arr, l+1, r-1);
 }

void finalReverse(int arr[], int m, int (arr.size()-1)){
    reverseHelper(arr[],m+1,arr.size()-1 );
    return;
}
int main(){
    int  m,n;
    cout<<"Enter array size: ";
    cin>> n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Enter m pos: ";
    cin>> m;
    finalReverse(arr,m+1,arr.size()-1);
}