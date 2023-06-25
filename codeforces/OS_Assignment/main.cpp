#include <iostream>
#include"bits/stdc++.h"
using namespace std;


struct SJF{

    string name;
    int burst_time, arrival_time;

    bool  operator < ( const SJF &b){

        return this->burst_time < b.burst_time;
    }

};

struct Priority{

    string name;
    int burst_time, arrival_time, priority;

    bool  operator < ( const Priority &b){

        return this->priority < b.priority;
    }

};
struct Round_Robin{

    string name;
    int burst_time, arrival_time;


};





void round_robin(vector<Round_Robin> processes, double& avg_time, vector<pair<string,pair<int,int>>> &timeline,int quantum_time){
    int num_of_processes = processes.size();
    avg_time =0;
        queue<pair<string,int>> q;
        set<string>s;
    vector<pair<int,string>> time;

    int total_burst_time = 0;
    int last_arrive = 0;
        for(int i=0;i<num_of_processes;i++)
        {
            avg_time+=  -processes[i].burst_time - processes[i].arrival_time;
            last_arrive = max(last_arrive, processes[i].arrival_time);
            total_burst_time+= processes[i].burst_time;
        }
    total_burst_time += last_arrive;



    for(int i=0;i<total_burst_time;i++)
    {

        for(int j=0;j<num_of_processes;j++){

            if(processes[j].arrival_time<= i && processes[j].burst_time > 0 && s.find(processes[j].name)== s.end())
            {

                s.insert(processes[j].name);
                q.push({processes[j].name, processes[j].burst_time});

            }

        }

        string cur_name = q.front().first;
        int remaining = q.front().second;
        q.pop();
        int t = min(quantum_time, remaining);
        for(int j=i;j<t+i;j++){
            time.push_back({j,cur_name});
        }
        for(int j = 0;j<num_of_processes;j++){
            if(processes[j].name == cur_name)
            {
                processes[j].burst_time -=t;
                if(processes[j].burst_time > 0 )q.push({cur_name, processes[j].burst_time});

            }

    }
        i+= t-1;
    }


    for(int i=0;i<time.size();i++)
        cout<< time[i].first << "  " << time[i].second <<endl;

        time.push_back({-1,"dummy"});
        string cur = time[0].second;
        int started = time[0].first;
        for(int i=1;i<time.size();i++){
            if(time[i].second != cur){

                timeline.push_back({cur,{started,time[i-1].first+1}});
                avg_time += time[i-1].first +1;
                cur = time[i].second;
                started = time[i].first;
            }

        }


    avg_time /= (double)num_of_processes;
}



int main()
{
    vector<pair<string,pair<int,int>>> timeline;

    double avg;
    vector<Round_Robin> v(3);

    v[0].name ="p1", v[0].arrival_time = 0, v[0].burst_time =24;
    v[1].name ="p2", v[1].arrival_time = 0, v[1].burst_time =3;
    v[2].name ="p3", v[2].arrival_time = 0, v[2].burst_time =3;
  //  v[3].name ="p4", v[3].arrival_time = 0, v[3].burst_time =5,v[3].priority = 5;
   // v[4].name ="p5", v[4].arrival_time = 0, v[4].burst_time =3,v[4].priority = 1;

        round_robin(v,avg,timeline,4);
    for(int i = 0;i<timeline.size();i++){

        cout << timeline[i].first << "   " << timeline[i].second.first << " "<< timeline[i].second.second<<endl;
    }

    cout<<"Avg "<< avg;
    return 0;
}
