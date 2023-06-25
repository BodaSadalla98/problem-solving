#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool row[9][10]={0};
bool col[9][10]={0};
bool box[3][3][10]={0};
int T,arr[9][9];
int n;
void update(int i,int j,int val,bool l){
row[i][val]=l;
col[j][val]=l;
box[i/3][j/3][val]=l;



}

bool  calc(int i,int j){
if(j==9){
    return calc(i+1,0);

}
if(i==9){
   		if(t)
			puts("");
		for(int i=0; i<9; ++i){
			for(int j=0; j<9; ++j)
				printf("%d ",g[i][j]);
			puts("");
   }
   return 1;
}
if(arr[i][j])return calc(i,j+1);
else
{
    for(int x=1;x<10;x++){
        if(!row[i][x]&&!col[j][x]&&!box[i/3][j/3][x]){
            update(i,j,x,1);
            arr[i][j]=x;
           if (calc(i,j+1))return 1;
           else
            update(i,j,x,0);
        }
    }
    arr[i][j]=0;
    return 0;
}






}

int main()
{

cin>>T;


for( n=0;n<T;n++){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            if(arr[i][j])update(i,j,arr[i][j],1);






        }




    }



           if(!calc(0,0))cout<<"No solution\n";


















}

    return 0;
}
