#include <iostream>

using namespace std;

int checkPalindrome( char a[] , int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(a[start]!=a[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int getLength( char a[] , int n){
    int count=0;
    for( int i=0; i<a[i]!="/0";i++){
        count++;
    }
    
   return count;
}

int main() {
  
 char name[];
 int n;
 for( int i=0;i<n;i++){
     cin>>name;
 }
 
 cout<<checkPalindrome(name,6);
}
