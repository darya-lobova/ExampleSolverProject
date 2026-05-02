#include "logic.h"

int main(){
	int upper_border, lower_border;
	int number_of_examples;
	int a, b, c, result;
	char math_sign1, math_sign2, equal_sign;

	cout << "How many examples do you want to generate?: ";
	cin >> number_of_examples;

	cout << "Enter upper boarder: ";
	cin >> upper_border;
	cout << "Enter lower boarder: ";
	cin >> lower_border;

	init_random(a, b, c, upper_border, lower_border, math_sign1, math_sign2);

	result = solve_example(a, b, c, math_sign1, math_sign2, equal_sign);

	print(convert(a, b, c, result, math_sign1, math_sign2, equal_sign));


	return 0;
}