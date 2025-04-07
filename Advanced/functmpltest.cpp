#include <iostream>
#include <sstream>
#include <string>

using namespace std;

template<typename T>
T Select(int index, T first,T second)
{
	if(index % 2)
		return first;
	return second;
}

template<typename R>
R Convert(string source)
{
	R result;
	stringstream conv;

	conv << source;
	conv >> result;

	return result;

}



int main(int argc, char* argv[])
{
	int n;
	cout << "Selector: ";
	cin >> n;

	cout << "Selected double value = " << Select(n, 23.4, 32.1) << endl; //Select<double>(...)
	cout << "Selected string value = " << Select(n, "Tuesday", "Thursday") << endl; //Select<string>(...)
	//cout << "Selected stupid value = " << Select(n, "Tuesday", 78.9) << endl;

	if(argc > 1)
	{
		double val = Convert<double>(argv[1]);
		cout << "Square = " << val * val << endl;
	}
}



