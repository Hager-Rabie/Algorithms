#include<bits/stdc++.h>

 using namespace std;



    //--------------------------//

  

     void selectionSort(int size , vector<int>&arr) {
        int min =0 ;
         for(int i=0 ; i< size-1 ; i++) {
            min = i ;
             for (int j= i+1 ; j< size ; j++) {
                if(arr[min] > arr[j])
                 min = j ;
             }
             if(min != i) 
                swap(arr[min] , arr[i]) ;
             
         }
     }
  
  int main () {
      
         int n ; cin >> n ;
           vector<int>arr(n,0) ;
          for(int i=0 ; i<n ;i++) 
            cin>>arr[i] ;
           selectionSort(n , arr) ;
          for(auto & x : arr)
           cout << x << " " ;
           cout << endl;







  }
