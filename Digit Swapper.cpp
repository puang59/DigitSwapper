#include <iostream>

int main() {
	// get small integer value from the user
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	// get large integer valye from the user
	std::cout << "Enter a larger integer: ";
	int y{};
	std::cin >> y;
	// temp code block
	{
		// checking if the user filled everything correctly (if they didnt, execute this code)
		if (x > y) {
			std::cout << "Swapping the values" << "\n";
			// swapping values
			int a{ x };
			int b{ y };

			std::cout << "The smaller value is " << b << "\n";
			std::cout << "The larger value is " << a << "\n";
		}
		// if they did, then execute this code
		else {
			std::cout << "The smaller value is " << x << "\n";
			std::cout << "The larger value is " << y << "\n";
		}
	}

}