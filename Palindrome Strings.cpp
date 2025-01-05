
#include <iostream>

using namespace std;

int Palindrome( int n){
       int digit;
       int rev=0;
       int orignal=n;
   
   while(n!=0){
  
       digit=n%10;
       rev=(rev*10) + digit;
       n=n/10;
   } 
   if(orignal==rev){
       return 1;
   }
   else{
       return 0;
   }
}

int main() {
    
    int n;
    cin>>n;
 if(Palindrome(n)==1){
     cout<<"Palidrome";
 }
 else{
     cout<<"Not Palindrome";
 }
 
 
 
}
