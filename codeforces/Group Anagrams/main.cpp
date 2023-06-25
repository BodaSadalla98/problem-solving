#include <iostream>
#include"bits/stdc++.h"
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<vector<int>, vector<int>>m;

        for(int i=0;i<n;i++){
            string s = strs[i];
            int num = 0;
            vector<int> v(26,0);
            for(int j=0;j<s.size();j++)
                //num += s[j] - '0';
                v[s[j]-'a']++;
            //m[num].push_back(i);
            m[v].push_back(i);
        }



        vector<vector<string>> ans(m.size());
        int i=0;
        for(auto v : m)
        {
             for(int j=0;j<v.second.size();j++)
             {
                        int idx = v.second[j];
                    ans[i].push_back(strs[idx]);
             }
            i++;


        }
        return ans;
    }
int main()
{
    vector<string> a = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>>ans = groupAnagrams(a);
    cout << "Hello world!" << endl;
    return 0;
}
