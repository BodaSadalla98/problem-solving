#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if (!n)break;

        int refX,refY;
        cin>>refX>>refY;
        while(n--){
                int x,y;
            cin>>x>>y;
            x-=refX;y-=refY;
            if(x ==0 || y==0)cout<<"divisa";
            else if (x>0 && y>0)cout<<"NE";
            else if(x>0&& y<0)cout<<"SE";
            else if(x<0&& y<0)cout<<"SO";
            else if(x<0&& y>0)cout<<"NO";



            cout<<endl;

        }



    }
    return 0;
}
