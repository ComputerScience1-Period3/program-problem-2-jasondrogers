/*Jason Rogers - 9/25/2017 Period 3
Assignment Name : Take In Data
Taking down/in data
*/
// Libraries
#include <iostream> //* gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	bool played_football; // Have you played Football?
	char last_letter; // Last letter of your last name?
	double mile_time; // What is your mile time?
	int math_period; // What is your math period?


	// User Queries 
	cout << "Have you played football (1) or Not (0) : (1/0)";
	cin >> played_football;

	cout << "What is the last letter of your Last Name : (Lower Case Letter)";
	cin >> last_letter;

	cout << "What is your time running a mile (Decimal) : ";
	cin >> mile_time;

	cout << "What period do you have math? (Integer) : ";
	cin >> math_period;


	// After questions print out stored data 
	cout << boolalpha << "It is " << played_football << " that you have played Football. \n";
	cout << "Your last letter of your name is " << last_letter << '\n'; // different ways of going to the new line
	cout << "Your mile time is : " << mile_time << "\n";
	cout << "Your math period is : " << math_period << endl; //ENDL
	
	
	// Pause
	pause();
}