#include <iostream>
using namespace std;
int main(){
    int arr[]={4,3,2,5,8,6,7,3,2};
    int sz=9;
    int target=3;
    int count=0;
   
    
    for(int i=sz-1;i>=0;i--){
        if(arr[i]==target){
            count+=1;
        
        }    
    }
   cout<<count<<endl;
    
    
    return 0;
    
    
    
}