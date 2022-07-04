
#include <vector>
#include <iostream>
#include "std_lib_facilities.h"

int main() {

	vector<int> x = {1,2,3,4,5,6};
	for (int y : x)
		std::cout << y<<'\n';
	

	vector<double> temps;
	for (double temp; std::cin >> temp;)
	{
		if (temp == 0)
			break;
		temps.push_back(temp);
	}
	
	vector<double> temps;
	for (double temp; std::cin >> temp;)
		temps.push_back(temp);
	int sum = 0;
	for (int x : temps)
		sum += x;

	std::cout << "온도 평균: "<<sum / temps.size() << '\n';
	sort(temps);
	cout << "온도 중앙값: " << temps[temps.size() / 2]<<'\n';
}

