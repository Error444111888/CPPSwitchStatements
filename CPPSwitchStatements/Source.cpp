#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int BTC;

	cout << "How much is Bitcoin now? " << endl;
	cin >> BTC;

	switch (BTC)
	{
	case 4500:
		cout << "This is pretty low. Don't sell" << endl;
		break;
	case 8500:
		cout << "This is not a bad price. You can get ready to sell" << endl;
		break;
	case 19500:
		cout << "Now, this is a good price. Sell sell sell!" << endl;
		break;

	default:
		cout << "This price is not within the posibilities"

	}







	cin.get();
}