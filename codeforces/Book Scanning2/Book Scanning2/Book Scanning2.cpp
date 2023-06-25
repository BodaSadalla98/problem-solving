// Book Scanning2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>scores;
vector<int>vis;
vector<int> next_scan;

int main()
{
	//freopen("b_in.txt", "r", stdin);
	freopen("d.txt", "w", stdout);
	int books, libraries, days;
	cin >> books >> libraries >> days;

	vector<int>signup_duration(libraries);
	vector<int>library_max_per_day(libraries);
	vector<vector<int>>books_in_library(libraries);
	scores.resize(books);
	vector<pair<double, int>>order;
	for (int i = 0; i<books; i++)cin >> scores[i];
	for (int i = 0; i<libraries; i++) {
		int t; cin >> t;
		cin >> signup_duration[i] >> library_max_per_day[i];
		for (int j = 0; j<t; j++) {
			int te; cin >> te;
			books_in_library[i].push_back(te);
		}

	}
	for (int i = 0; i<libraries; i++) {

		sort(books_in_library[i].begin(), books_in_library[i].end(),
			[](const int & a, const int & b)
		{
			return scores[a] > scores[b];
		}

		);

	}

	for (int i = 0; i<libraries; i++) {
		double order_pirority;
		int sz = books_in_library[i].size();
		if (signup_duration[i] <= days) {
			long long  score = 0;
			for (int j = 0; j< sz; j++) {
				score += scores[books_in_library[i][j]];

			}

			order_pirority = (long long)score / (long double)(signup_duration[i]);
			order.push_back({ order_pirority, i });
			if (i == 29993)
				int ss;
		}



	}


	sort(order.rbegin(), order.rend());
	vector<int>libraries_start(libraries);


	//    printf(" %f   %d \n %f   %d",order[0].first,order[0].second, order[1].first,order[1].second );
	int start = 0;
	vector<int>signed_libraries;
	for (int i = 0; i<libraries; i++) {
		int library = order[i].second;
		libraries_start[library] = start + signup_duration[library];
		start += signup_duration[library];
		if (start < days)signed_libraries.push_back(library);


	}
	//printf("%d    %d", libraries_start[0], libraries_start[1]);
	vis.resize(books);
	//memset(vis,0 ,sizeof vis);


	next_scan.resize(libraries);
	//memset(next_scan,0, sizeof next_scan);
	vector<vector<int>> scanned_books(libraries);

	/**
	for(int i=0;i<days;i++){

	for(int j = 0  ; j < signed_libraries.size();j++){
	int curr_library = signed_libraries[j];
	if(libraries_start[curr_library <= i]){
	int taken = 0;
	for(int k = 0; taken < library_max_per_day[curr_library] && k< books_in_library[curr_library].size();k++){
	int curr_book = books_in_library[curr_library][k];
	if(vis[curr_book] == 1 )continue;

	vis[curr_book]=1;
	taken++;
	scanned_books[curr_library].push_back(curr_book);

	}





	}


	}




	}
	**/
	for (int i = 0; i<signed_libraries.size(); i++) {

		int cur_library = signed_libraries[i];

		if (cur_library == 29993) {
			int l;

		}

		int max_can_scan = min((long long)books_in_library[cur_library].size(), (long long)((days - libraries_start[cur_library])* library_max_per_day[cur_library]));
		for (int j = 0; j < max_can_scan; j++) {
			int curr_book = books_in_library[cur_library][j];
			if (vis[curr_book] == 1)continue;

			vis[curr_book] = 1;
			scanned_books[cur_library].push_back(curr_book);



		}


	}



	cout << signed_libraries.size() << endl;

	for (int i = 0; i<signed_libraries.size(); i++) {
		int cur = signed_libraries[i];
		cout << cur << ' ' << scanned_books[cur].size() << endl;

		for (int j = 0; j< scanned_books[cur].size(); j++)cout << scanned_books[cur][j] << ' ';



		cout << endl;

	}


	return 0;
}
