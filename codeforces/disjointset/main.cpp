#include <iostream>

using namespace std;
int root[100];


int find(int u){
    if (root[u]==u)return u;
    else
        return root[u]= find(root[u]);

}
int main()
{
    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=n;i++)root[i]=i;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        a= find (a);
        b= find (b);
        root[b]= root[a];


    }

    cout << find(3)<<"         "<< find(4);
    return 0;
}
