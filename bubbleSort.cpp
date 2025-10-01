#include<bits/stdc++.h>

 using namespace std;

 


    //--------------------------//

  

   void bubbleSort(int size , vector<int>&arr) {
    for(int i=0 ; i< size-1 ; i++) {
        for(int j=0 ; j< size-1-i ; j++) {
            if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]) ;
        }
    }
   }


  
  int main () {
     
         int n ; cin >> n ;
           vector<int>arr(n,0) ;
          for(int i=0 ; i<n ;i++) 
            cin>>arr[i] ;
           bubbleSort(n , arr) ;
          for(auto & x : arr)
           cout << x << " " ;
           cout << endl;







  }
