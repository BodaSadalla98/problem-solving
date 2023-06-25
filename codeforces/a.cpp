#include"bits/stdc++.h"

using namespace std;

int main(){

int t;cin>>t;

while(t--){
    string grid[9];

    for(int i = 0;i<9;i++)
	    cin>>grid[i];


    for(int i = 0; i<9; i++)
    {    
	//for(int j=i/3;j<9;j+=3)
	    
	    
		grid[i][i] = (grid[i][i]- '0' +1) % 10 +   '0' ;
		    if(grid[i][i] == '0')grid[i][i] = '1';
	    
	    
	    }

cout<<endl;
    for(int i = 0;i<9;i++){


	for(int j = 0; j<9;j++)
	    cout<<grid[i][j];
	cout<<endl;
    }
	    
}

}
