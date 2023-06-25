#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int oo= 1e9;
int dp [100001][3][2];
string s;

int calc (int index, int mod, int taken){
                if(index == s.size())
                    return (mod ==0 && taken ) ? 0 : oo;

                int &ret = dp[index][mod][taken];

                if(ret != -1 )return ret;

                ret = 1 + calc(index+1 , mod, taken);

                if(s[index] == '0'){
                        if(taken){
                             ret = min (ret , calc(index+1, (mod + s[index] - '0')%3, 1));
                            //	ret = min(ret,calc(index+1,(mod*10+(s[index]-'0'))%3,1));

                    }

                }
                else
                    ret = min (ret , calc(index+1, (mod + s[index] - '0')%3, 1));
                    	//ret = min(ret,calc(index+1,(mod*10+(s[index]-'0'))%3,1));

                    return ret;
}
string ans = "";


void build (int index, int mod, int taken){
                if(index == s.size())return;

                if (calc (index,mod,taken) == (1 + calc(index+1,mod,taken))){
                    build(index+1, mod, taken);
                    return ;


                }

               if (s[index] == '0'){

                 if(taken  &&  calc (index,mod,taken) == calc(index+1,(mod + s[index] - '0')%3,1) ){
                        ans+= s[index];
                        build(index+1,(mod + s[index] - '0')%3 ,1);
                        return;

                 }

                }
                if( calc (index,mod,taken) == calc(index+1,(mod + s[index] - '0')%3,1) )
                {

                    ans+= s[index];
                        build(index+1,(mod + s[index] - '0')%3 ,1);
                        return;

                        }











}



/**
void build(int idx , int mod , bool take){
	if(idx == s.size())return;
	if(1+calc(idx+1,mod,take)==calc(idx,mod,take)){
		build(idx+1,mod,take);
		return;
	}
	if(s[idx] == '0'){
		if(take && calc(idx+1,(mod*10+(s[idx]-'0'))%3,1)==calc(idx,mod,take)){
			ans += '0';
			build(idx+1,(mod*10+(s[idx]-'0'))%3,1);
			return;
		}
	}else{
		if(calc(idx+1,(mod*10+(s[idx]-'0'))%3,1) == calc(idx,mod,take)){
			ans += s[idx];
			build(idx+1,(mod*10+(s[idx]-'0'))%3,1);
			return ;
		}
	}
}

**/

/**
int calc(int idx ,int mod,bool take){
	if(idx == s.size())
		return (mod == 0&&take)?0:oo;
	int &ret = dp[idx][mod][take];
	if(ret != -1)return ret;
	ret = 1+calc(idx+1,mod,take);
	if(s[idx] == '0'){
		if(take){
			ret = min(ret,calc(idx+1,(mod*10+(s[idx]-'0'))%3,1));
		}
	}else{
		ret = min(ret,calc(idx+1,(mod*10+(s[idx]-'0'))%3,1));
	}
	return ret;
}
**/
int main()
{

    cin>>s;
    memset(dp , -1 , sizeof dp);
int ans1   =     calc (0,0,0);
if (ans1 > 1e5){
    if(  s.find("0") != string :: npos ){

        puts("0");

    }
    else{
        puts("-1");

        }

        return 0;


}
    build(0,0,0);
    cout  <<ans << endl;
    return 0;
}
