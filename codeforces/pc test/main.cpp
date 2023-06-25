#include <iostream>

using namespace std;

int main()
{
    string ans2= "PSPPSSSSSPPPPPSPSSPPPPPPPSSPSPPPSPPSSSPSPSPPPPSPPPSSPPSPSPSPPPSPSPSSPSPSPPPSPPSPSPSPSSPPPSPSSSSPSPPSSPSSPSPSSSSPPPPPSPSSPSSSSSSSPSSPSSSSPSPSPPPSSSSPSS";
    string ans1;cin>>ans1;

            int P=0, S=0;
for (int i=0;i<ans1.size();++i){
    if(ans1[i] != ans2[i]) cout<< i;

}

    return 0;
}
