#include <iostream>

using namespace std;

int main()
{
    int n; string s;
    bool a=0, b=0;
    cin>>n>>s;
        for(int i=0; i<n-1;i++){
            if (s[i]>s[i+1]){
            a=1;
            s.erase(i,1);
            break;

}

    else if (s[i]<s[i+1])b=1;


}
        if(b)s.erase(n-1,1);
        if(!a&& !b)s.erase(0,1);
    cout << s << endl;
    return 0;
}
