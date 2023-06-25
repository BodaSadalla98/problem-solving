#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct contestant {
int id;
int penaltty;
int solved;
int noWrong[11];
int noSolved[11];




};

bool compare(contestant a,contestant b){

if(a.solved==b.solved)return a.penaltty<b.penaltty;
else if(a.penaltty==b.penaltty)return a.id<b.id;
else return a.solved>b.solved;
}
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
     int C,P,S;

    cin>>C>>P>>S;
    int correctsub[P+1][C+1];
    for(int i=1;i<=C;i++)
            for(int f=1;f<=P;f++)correctsub[i][f]=1e5;

    int time,cID,pID;
    vector<contestant> contestants ;
    for(int i=0;i<contestants.size();i++){
        contestants[i].id=0;
        contestants[i].solved=0;
        contestants[i].penaltty=0;
        memset(contestants[i].noSolved,0,11);
        memset(contestants[i].noWrong,0,11);



    }
    contestants.resize(C+1);
   // contestant contestants[C+1];
    bool state;
for(int i=0;i<=C;i++)contestants[i].id=i;
    for(int i=0;i<S;i++){

      cin>>time>>cID>>pID>>state;

      if(state){
        if(contestants[cID].noSolved[pID]==0){
            contestants[cID].noSolved[pID]=1;
            contestants[cID].solved++;


           // contestants[cID].penaltty+=time;
            if(contestants[cID].noWrong[pID]&&contestants[cID].noSolved[pID]==0)
                contestants[cID].penaltty+=(contestants[cID].noWrong[pID])*20;

        }
        correctsub[cID][pID]=min(time,correctsub[cID][pID]);

      }
      else if(!state){
        contestants[cID].noWrong[pID]++;


      }


    }
    for(int i=1;i<=C;i++){
        for(int k=1;k<=P;k++){
                if(contestants[i].noSolved[k])
            contestants[i].penaltty+=correctsub[i][k];

        }



    }
    for(int i=0;i<contestants.size();i++){
        if(contestants[i].id==0){
        contestants.erase(contestants.begin()+i);}

        }
        for(int i=1;i<=cID;i++)
            for(int f=1;f<=pID;f++)


        sort(contestants.begin(),contestants.end(),compare);
  for(int i=0;i<contestants.size();i++){
    cout<<contestants[i].id<<' '<<contestants[i].solved<<' '<<contestants[i].penaltty;

    cout<<endl;
  }




    }
    return 0;
}

