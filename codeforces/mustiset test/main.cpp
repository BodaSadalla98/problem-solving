#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{


    multiset <int>s;
    s.insert(4);s.insert(4); s.insert(2);
        s.erase(s.find(4));
    for(auto i : s )
    cout << i << endl;
    return 0;
}
