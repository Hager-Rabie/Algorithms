#include<bits/stdc++.h>

 using namespace std;
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

  int  seq_search(int size  , vector<int>arr , int item) {
      
         for(int i=0 ; i< size ;i++) {
            if(arr[i] == item)
            return i ;
         }
         return -1 ;
  }
  int main () {
        FOI () ; 
         int n ; cin >> n ;
           vector<int>arr(n,0) ;
          for(int i=0 ; i< n ;i++) 
            cin>>arr[i] ;
             int item ;
              cin>> item ;
         cout << seq_search(n , arr , item) << endl;







  }
