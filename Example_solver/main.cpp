#include "logic.h"

int main(){

	srand(static_cast<unsigned int>(time(0)));

	int upper_border, lower_border;
	int number_of_examples;
	int a, b, c, result;
	char math_sign1, math_sign2;
	char equal_sign = '=';

	cout << "=== MATH EXAMPLE SOLVER & GENERATOR === \n" << endl;

	cout << "How many examples do you want to generate?: ";
	cin >> number_of_examples;

	do {
		cout << "Enter upper boarder: ";
		cin >> upper_border;
		cout << "Enter lower boarder: ";
		cin >> lower_border;
	} while (upper_border < lower_border);

	cout << "\n === Your examples: === \n" << endl;

	auto start = chrono::high_resolution_clock::now();

	for (int i = 0; i < number_of_examples; i++) {
		
		init_random(a, b, c, upper_border, lower_border, math_sign1, math_sign2);

		result = solve_example(a, b, c, math_sign1, math_sign2, equal_sign);

		cout << i + 1 << ") ";
		print(convert(a, b, c, result, math_sign1, math_sign2, equal_sign));
	}

	auto end = chrono::high_resolution_clock::now();

	auto elapsed = chrono::duration_cast<chrono::microseconds>(end - start);

	cout << "\n===============================" << endl;
	cout << "Generation and solving took: " << fixed << setprecision(2)
		<< elapsed.count() << " microseconds" << endl;
	cout << "===============================" << endl;

	return 0;
}