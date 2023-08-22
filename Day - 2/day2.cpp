//question
#include<bits/stdc++.h>
using namespace std;
int triplet_check(int arr[],int n){
    sort(arr,arr+n);
    int counter=0;
    for(int i=0;i<n;i++){
    int left=i+1;
    int right=n-1;
        while(left<=right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==0){
                return 1;
            }
            if(sum>0){//means sum needs to be decreased
                right--;
            }
            else{//means sum needs to be increased since its <0
            left++;
            }
        }
        
    }
    return 0;
}


int main(){
    int arr[]={-1,0,3,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<triplet_check(arr,n);

}