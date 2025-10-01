#include<bits/stdc++.h>

 using namespace std;
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


    //--------------------------//

    int binary_search(int size ,vector<int>arr , int item ) {
        int mid =0 , low = 1 , high = size ;
         while (low<=high) {
            mid = (low+high) / 2 ;
            if(arr[mid]==item) {
                return mid ;
            }
            else if (arr[mid]>item) {
                high = mid - 1;
            }
            else 
            {
                low =  mid + 1;
            }
         }
         return 0 ;
    }
  
  int main () {
        FOI () ; 
         int n ; cin >> n ;
           vector<int>arr(n,0) ;
          for(int i=0 ; i<n ;i++) 
            cin>>arr[i] ;
             int item ;
              cin>> item ;
         cout << binary_search(n , arr , item) << endl;







  }
