    #include <iostream>
    #include"bits/stdc++.h"
    using namespace std;
    int N = 2e5;
    int arr[200005];
    map<int,int> m;
    int main()
    {
        set<int>s;
        long long num,n;
        long long  a[100001];
        cin>>n>>num;
        for(int i=0;i<n;i++){
            cin>>a[i];
            //s.insert(a[i]);
           // arr[a[i] +100000] ++ ;
            m[a[i]]++;

        }
        int ans = 0;

        for(int i=0;i<n;i++){

         //  if (  (arr[num - a[i] + 100000 ] > 0 && (long long )a[i]*2 != num  )


             //  || ( (long long )a[i]*2==num  && arr[num - a[i] + 100000 ] >1 ) ){


         //   if(s.find(num - a[i]) != s.end()) {

            if(a[i] * 2 != num)
                ans+= m[num - a[i] ];
            else
                ans+= m[num - a[i] ]/2;


        }

        cout <<ans/2;
        return 0;
    }
