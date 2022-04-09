#include <iostream>
#include <limits>

using namespace std;

int f = 0, a = 0, b = 0; //f - available meters of fence, a and b - length of sides

string do_it(string r)
{
	cout << "Write \"RUN\" to start program" << endl;
	cin >> r;
	
	while (r != "RUN")
	{
		if (r != "RUN")
		{
			cout << "Fail, please write \"RUN\" to start program" << endl;
			cin >> r;
		}
	}

	return r;
}

int count_a_b(int count)
{
	cout << endl << "Enter the length of the fence: ";
	cin >> f;
	
	while (cin.fail())
	{
		if (cin.fail())
		{
			cout << "Please enter a correct value:";
			cin.clear();
			cin.ignore(numeric_limits <streamsize>::max(), '\n');
			cin >> f;
		}
	}

	a = -f / (-4);	//b=f-2a so Area = a*(f-2a) = 2a^2 + f*a - this is quadratic function so i can count p = -f/2a and p=a
	b = f - 2 * a;
	cout << endl << "Side length a: " << a << " and side length b: " << b << endl;

	return count;
}

int maximum_area(int area)
{
	area = a * (f - 2 * a);
	cout << area << " is the maximum area of the farm " << endl;

	return area;
}

int main()
{
	string run;
	int count = 0, area = 0;
	do_it(run);
	count_a_b(count);
	maximum_area(area);

	system("pause");
	return 0;
}
