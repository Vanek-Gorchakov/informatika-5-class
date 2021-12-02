#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
	int n, element;
	std::vector <int> array, array_up, array_down;
 
	std::cout << "Enter the number of elements in the array: ";
	std::cin >> n;
 
	std::cout << "Enter the array that will be sorted: \n";
 
	for (auto i = 0; i < n; ++i)
	{
		std::cin >> element;
		array.push_back(element);
	}
	std::cout << "\n\n";
	array_up = array;
	std::sort(std::begin(array_up), std::end(array_up));
	for (int i : array_up)
	{
		std::cout << i << '\n';
	}
	std::cout << "\n\n";
 
	array_down = array;
	std::sort(std::begin(array_down), std::end(array_down),
		[](int x, int y) {return x > y; });
 
	for (int i : array_down)
	{
		std::cout << i << '\n';
	}
 
	return 0;
}
