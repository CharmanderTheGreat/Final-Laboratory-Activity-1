#include<iostream>
#include<iomanip>
using namespace std;

// Function to display odd nums
void oddNum(int start, int end) {
    for(int i = start; i <= end; i++){
        if(i % 2 != 0) {
            cout<<i<<endl;
        }
    }
    cout << endl;
}
// Function to compute the sum and average 
void sumAve(int start, int end) {
    int sum = 0, count = 0;
    for (int i = start; i <= end; i++) {
      sum += i;
      count++;
    }
    double average =static_cast<double>(sum)/count;
    // sum and average (2 decimal places)
    cout<<"The sum of all positive integers is: "<<sum<<endl;
    cout<<"The average of all positive integers is: "<<fixed<<setprecision(2)<<average<<endl;
}
// Function to compute the factorial of a given number
void factorial(int num) {
    unsigned long long factorial = 1;
    for (int i = 1; i <= num; i++) {
      factorial *= i;
    }
    // Displaying the factorial result
    cout<< "The factorial of " <<num<< " is: "<< factorial<<endl;
}
// Function to validate if the input is a positive 
bool validInt(int num) {
  return num > 0;
}

// display options and user input
int main() {
    int opt;
    cout << "OPTION";
    cout << "\n1 – Display ODD numbers";
    cout << "\n2 – Compute for SUM and AVERAGE";
    cout << "\n3 – Factorial\n\n";
    cout << "Enter your choice: ";
    
    // Handle invalid input for choice which is not a num
    if (!(cin >> opt)) {
        cout << "Invalid input!\nYou entered a non-integer value for a number!\n\nThank you!" << endl;
        return 0;
    }

    // For choice 1
    if (opt == 1) {
        int start, end;
        cout << "What is the start number: ";
        cin >> start;
        cout << "What is the end number: ";
        cin >> end;

        // validation
        if (validInt(start) && validInt(end) && start <= end) {
            oddNum(start, end);
        } else {
          cout<< "Invalid input! Please enter positive numbers only.\n";
        }
    }
    // for  choice 2
    else if (opt == 2) {
        int start, end;
        cout << "What is the start number: ";
        cin >> start;
        cout << "What is the end number: ";
        cin >> end;

        // validation again
        if (validInt(start) && validInt(end) && start <= end) {
            sumAve(start, end);
        } else {
            cout << "Invalid input! Please enter positive numbers only.\n";
        }
    }
    // Handling choice 3: Compute factorial
    else if (opt == 3) {
        int num;
        cout << "Enter a positive integer: ";
        cin >> num;

        // Validation AGAIN
        if (validInt(num)) {
            factorial(num);
        } else {
            cout << "Invalid input! Please enter a positive number.\n";
        }
    }
    // invalid option input
    else {
        cout << "Invalid option!\n";
    }
    // End of Program 😮‍💨
    cout << "\nThank you!" << endl;
    return 0;
    }