


#include<bits/stdc++.h>
#include<omp.h>

#define L  2000000

using namespace std;
int main()
{
	long long sum =0 ;
	int *x = new int[L];
	int sec = L / 4;

	for (int i = 0; i < L; i++)
		{
			x[i] = 1;
		}

		double t1 = omp_get_wtime();
#pragma omp parallel num_threads(4)
	{



        int local = 0;
		int id = omp_get_thread_num();

		for (int i = id; i < L ; i+=4)
		{
			local += x[i];
		}


#pragma omp critical
 {
    sum += local;
}








	}
	double t2 = omp_get_wtime();
	printf(" %d  %f \n", sum,  (omp_get_wtime()  - t1 )/1000 );

	return 0;

}

