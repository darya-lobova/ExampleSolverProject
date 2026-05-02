#include "util.h"

void print(string s) {
	cout << s << endl;
}

void init_random(int a, int b, int c, int upper_border,
	int lower_border, char math_sign1, char math_sign2) {
	srand(time(0));
	a = rand() % (upper_border - lower_border + 1) + lower_border;
	b = rand() % (upper_border - lower_border + 1) + lower_border;
	c = rand() % (upper_border - lower_border + 1) + lower_border;
	math_sign1 = rand() % 2 == 0 ? 43 : 45;
	math_sign2 = rand() % 2 == 0 ? 43 : 45;

}

string convert(int a, int b, int c, int result, char math_sign1, char math_sign2, char equal_sign) {
	string s = to_string(a) + " " + math_sign1 + to_string(b) + " " + math_sign2
		+ to_string(c) + " " + equal_sign + to_string(result);

	return s;
}