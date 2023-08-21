#include<iostream>
using namespace std;
 int maxArea(int arr[],int n){
    int maxarea =0;
        int l=0,r=n-1;
        
        while(l<r){
        int area=(r-l)*min(arr[l],arr[r]);
        maxarea=max(maxarea,area);
            if(arr[l]<arr[r]){
                l+=1;
            }
            else if (arr[r]<arr[l])
            {
                r-=1;
            }
            else{
                r-=1;
            }
            
        }
     
    return maxarea;
 }


int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);
    //cout<<n<<"\n";
    cout<<maxArea(height,n);

}