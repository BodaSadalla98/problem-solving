#include <iostream>
#include"bits/stdc++.h"
using namespace std;

int main()
{
    queue<int>q;
    int n,servers;
    cin>>servers>>n;
    vector<int> free(servers,0);
    for(int i=0;i<n;i++){
        int t;cin>>t;
        q.push(t);

    }
    double avg_time = 0, time = 0;
    cout.precision(15);
    for(int i=0;i<1000010;i++){
        for(int j = 0;j<servers;j++){
            if(free[j] <= i ){
                    int process = q.front();
                free[j] += q.front();
                avg_time+= i;
                q.pop();
                if(q.empty()){
                    time = i + process;
                    cout<<time <<' '<<avg_time/(double)n ;
                    return 0;

                }

            }

        }


    }
    cout << "Hello world!" << endl;
    return 0;
}
