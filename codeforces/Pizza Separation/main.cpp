    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n;
 set<int> s;
        int temp;
        cin>>n;
        int arr[500]={0};
        int ans=600,cur=0;
        for(int i=1;i<=n;i++){
            cin>>temp;
            arr[i]=temp;
            s.insert(temp);

        }

        if(s.size()==1&&n%2==0){
            cout<<0;
            return 0;

        }
        int diff=0;
        int beginning=0;
        for(int i=1;i<=n;i++){
                cur=arr[i];
                beginning=(i+1)% (n);

                diff=abs(cur-(360-cur));
                ans=min(ans,diff);
            for(int j=1;j<n-i;j++){
                cur+=arr[beginning];
                diff=abs(cur-(360-cur));
                ans=min(ans,diff);


                beginning++;
            }


        }
        cout<<ans;
        return 0;
    }
