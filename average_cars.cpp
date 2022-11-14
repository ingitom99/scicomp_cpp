/*
 * 1.6
 * Return the average of number of cars passing your house over five days
 */

#include <iostream>

int main()
{
	// getting data from user
	double arr[5];
	std::cout << "Please enter the number of cars that passed your house over the last five days one by one...\n";
	std::cout << "Day 1: ";
	std::cin >> arr[0];
	std::cout << "Day 2: ";
	std::cin >> arr[1];
	std::cout << "Day 3: ";
	std::cin >> arr[2];
	std::cout << "Day 4: ";
	std::cin >> arr[3];
	std::cout << "Day 5: ";
	std::cin >> arr[4];
	
	// finding mean
	double sum;
	for(int i=0; i<5; i++)
	{
		sum += arr[i];
	}
	double mean;
	mean = sum / 5;
	
	// printing result
	std::cout << "The average number of cars was " << mean << " per day!\n";
}



