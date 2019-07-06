#include <iostream>      // C++ IO library for IO functions
#include <vector>	// vctor library

using namespace std;	// C++ namespace std

const int N = 40;	// define changed to const


//function to calculate the sum
// short function has been inlined
inline void sum(int &p, const vector<int> &data)
{
	p = 0;
	for (int i=0; i<data.size(); i++)
	{
		p += data[i];
	}
}


// main function
int main()
{
	vector<int> data;	// array changed to vector
	for (int i=0; i<N; i++)
	{
		data.push_back(i);
	}

	int accum;
	sum(accum, data);

	cout << "sum is " << accum << endl;	// C++ IO cout

	return 0;
}
