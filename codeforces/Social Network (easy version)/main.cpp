    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
     deque<int>q;
    set<int>s;


    int main()
    {
        int n,k; cin>>n>>k;
        for(int i=0;i<n;i++){
            int t; cin>>t;
            if( s.find(t) == s.end()){
                q.push_back(t);
                s.insert(t);


            }

            if(q.size()> k){
                    int t2 = q.front();

                s.erase(t2);
                q.pop_front();


            }



        }

    int b =q.size();
    cout<<b<<endl;
        for(int i=0;i<b;i++)
        {
            int a = q.back();
            q.pop_back();

        cout << a << ' ';}

        return 0;
    }
