<<<<<<< Updated upstream
#include <vector>
=======
﻿#include <vector>
>>>>>>> Stashed changes
#include <iostream>
#include "std_lib_facilities.h"

int main() {

	std::vector<int> x = {1,2,3,4,5,6};
	for (int y : x)
		std::cout << y<<'\n';
	

	std::vector<double> temps;
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
<<<<<<< Updated upstream
	std::cout << "¿Âµµ Æò±Õ: "<<sum / temps.size() << '\n';
	sort(temps);
	cout << "¿Âµµ Áß¾Ó°ª: " << temps[temps.size() / 2]<<'\n';
}
=======
	std::cout << "온도 평균: "<<sum / temps.size() << '\n';
	sort(temps);
	cout << "온도 중앙값: " << temps[temps.size() / 2]<<'\n';
}
>>>>>>> Stashed changes
