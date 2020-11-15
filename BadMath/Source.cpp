#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0f;// only i3 was being divided not all added together
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3;//redefining n2 while leaving n3 blank

	float a = average(n1, n2, n3);

	cout << setprecision(2) << fixed << "The average is " << a << endl;
	//personal preference to have the set precision at 2
	return 0;
}