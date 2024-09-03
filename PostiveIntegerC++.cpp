#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all divisors of a given positive integer
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    // Sort the divisors in decreasing order
    sort(divisors.rbegin(), divisors.rend());
    return divisors;
}

int main() {
    cout << "Enter positive divisors of positive integers." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    char continueResponse;
    do {
        int number;

        // Loop to ensure a positive integer is entered
        do {
            cout << "Please enter a positive integer: ";
            cin >> number;

            if (number <= 0) {
cout << number << " is not a positive integer." << endl;
            }
        } while (number <= 0);

        // Find and display the divisors in decreasing order
        vector<int> divisors = findDivisors(number);
        for (size_t i = 0; i < divisors.size(); ++i) {
    int divisor = divisors[i];
    cout << divisor << endl;
}
    

        // Prompt the user to continue or quit
        do {
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> continueResponse;

if (continueResponse != 'Y' && continueResponse != 'y' &&
                continueResponse != 'N' && continueResponse != 'n') {
                cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            }
        } while (continueResponse != 'Y' && continueResponse != 'y' &&
                 continueResponse != 'N' && continueResponse != 'n');

    } while (continueResponse == 'Y' || continueResponse == 'y');

    cout << "Thank you for using the program. Goodbye!" << endl;
    return 0;
}
