#include <iostream>

using namespace std;

int main()
{
    int w,h,d1,d2,w1,w2;
    cin>>w>>h>>w1>>d1>>w2>>d2;

    for(int i=h;i>0;i--){
        w+=i;
        if(i==d1)w-=w1;
        if(i==d2)w-=w2;

        if(w<0)w=0;

    }

    cout<< w;
    return 0;
}
