/*
	Scrie un program care pune utilizatorul sa introduca numarul de centi(intregi), pentru a face conversia.
	Stiind ca numarul este mai mare sau egal cu 0.
	Programul trebuie sa afiseze schimbul in valuta a sumei date du user.


*/
#include <iostream>

using namespace std;

int main() {

	// definim conversia banilor
	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };

	int change_amount{};
	int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

	cout << "Pune suma in centi : ";
	cin >> change_amount;
	dollars = change_amount / dollar_value;
	balance = change_amount - (dollars * dollar_value);

	quarters = balance / quarter_value;
	balance -= quarters * quarter_value;

	dimes = balance / dime_value;
	balance -= dimes * dime_value;

	nickels = balance / nickel_value;
	balance -= nickels * nickel_value;

	pennies = balance;

	cout << "\nAsa poti face schimbul";
	cout << "dollars  : " << dollars << endl;
	cout << "quarters : " << quarters << endl;
	cout << "dimes    : " << dimes << endl;
	cout << "nickels  : " << nickels << endl;
	cout << "pennies  : " << pennies << endl;


	return 0;
}
