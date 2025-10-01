#include<bits/stdc++.h>

 using namespace std;
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


    //--------------------------//

    void exchangeSort(int size , vector<int>&arr) {
        for(int i=0 ; i<size-1;i++) {
            for(int j= i+1 ; j<size ; j++) {
                if(arr[i] > arr[j])
                swap(arr[i] , arr[j]) ;
            }
        }
     }
  
  
  int main () {
        FOI () ; 
         int n ; cin >> n ;
           vector<int>arr(n,0) ;
          for(int i=0 ; i<n ;i++) 
            cin>>arr[i] ;
            exchangeSort(n , arr) ;
          for(auto & x : arr)
           cout << x << " " ;
           cout << endl;







  }
