#include<bits/stdc++.h>
 using namespace std;
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

  #define int long long  
   #define endl "\n"
    //--------------------------//
   void Sort(vector<int>&a , int l , int m , int r) {
    int i=l , j=m+1 , k=l ;
    vector<int>temp(r+1);
    while(i<=m && j<=r) {
       if(a[i]<=a[j]) {
         temp[k++] = a[i++];
       }
       else {
        temp[k++] = a[j++] ;
       }
    }
    while(i<=m) {
         temp[k++] = a[i++] ;
    }
    while(j<=r) {
      temp[k++] = a[j++] ;
    }
    for(int x=l;x<=r;x++) {
      a[x] = temp[x] ;
    }
   }
    void mergeSort(vector<int>&a , int l , int r) {
        if(r>l) {
           int m = (l+r) / 2;
            mergeSort(a,l,m) ;
            mergeSort(a,m+1,r) ;
            Sort(a,l , m , r) ;
        }

    }
    void solve(){
      int n ; cin>>n ;
    vector<int>a(n) ;
    for(int i=0;i<n;i++) {
      cin>>a[i] ;
    }
     mergeSort(a,0,4) ;
     for(int i=0;i<n;i++) 
      cout << a[i] << " " ;

      cout << endl;
    
        

    }
  
  signed main () {
        
      FOI () ;
      int tt = 1;
      // cin>>tt;
      while(tt--) {
        solve() ;
      }
  }
