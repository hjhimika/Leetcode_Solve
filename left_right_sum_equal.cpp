// return the position (0....(n-1)) where left side sum is equal to right side sum

#include <bits/stdc++.h>
using namespace std;
 

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];
    if(n==2){
        cout << "-1"<<endl;
        return 0;
    }
    
    if(n==3){
        if(arr[0]==arr[n-1]) {
            cout << n-1 <<endl;
            return 0;
        }
        else{
            cout << "-1"<<endl;
            return 0;
        }
    }
    
    
    int left[n];
    left[0]=arr[0];
    
    for(int i=1;i<n;i++){
        left[i]= arr[i]+left[i-1];
    }
    
    for(int i=1;i<n;i++){
        int right= left[n-1]- left[i];
        if(left[i-1]==right) {
            cout << i<<endl;
            return 0;
        }
    }
    cout << "-1"<<endl;
    
//    cout<<"Hello World";

    return 0;
}
