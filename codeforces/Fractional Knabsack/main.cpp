#include <iostream>
#include<bits/stdc++.h>
using namespace std;


 vector<double> valuePerkg;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
int n =weights.size();

for(int i=0;i<n;i++){
        if(capacity>weights[i]){
            capacity-=weights[i];
            value+= valuePerkg[i]*weights[i];

        }
        else    {
        cout<< valuePerkg[i]*capacity<<endl;
             value+= valuePerkg[i]* (double)capacity;
                break;

        }


}

  return value;
}

int main() {
  int n;
  int capacity;

  std::cin >> n >> capacity;
valuePerkg.resize(n);
  vector<int> values;
  vector<int> weights;
values.resize(n);
weights.resize(n);


  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];

//cout<< (double)values[i]/weights[i]<<endl;
 valuePerkg[i]= (double)values[i]/weights[i];
  }

 sort(valuePerkg.rbegin(),valuePerkg.rend()+n);


  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
