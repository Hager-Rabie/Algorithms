#include<bits/stdc++.h>
 using namespace std;


  #define int long long  
   #define endl "\n"
    //--------------------------//
  
int partition(vector<int>&s , int low , int high){
     int i , j;
     int pivotitem = s[low] ;
     j = low ;
     for(int i=low+1 ; i<=high;i++) {
      if(s[i] <pivotitem) {
        j++;
        swap(s[i] , s[j]) ;
      }
     }
     int pivotpoint = j ;
     swap(s[low] , s[pivotpoint]) ;
      return pivotpoint ;
   }
 void quikSort(vector<int>&s , int low , int high) {
  int pivotpoint ;
  if(high>low) {
    pivotpoint = partition(s,low,high) ;
     quikSort(s,low,pivotpoint-1) ;
     quikSort(s,pivotpoint+1 , high) ;
  }
 }
    void solve(){
     int n ; cin>>n ;
      vector<int>s(n) ;
      for(int i=0;i<n;i++)
      cin>>s[i] ;
      quikSort(s,0,n-1) ;
        for(int i=0 ; i<n;i++)
        cout << s[i] << " " ;
        cout << endl;


    }
  
  signed main () {
        
   
      int tt = 1;
      // cin>>tt;
      while(tt--) {
        solve() ;
      }
  }

