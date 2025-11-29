#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter number of students " <<endl;
    cin >> n;   

    int marks;
    int total = 0;

    
    for (int i = 0; i < n; i++) {
        cin >> marks;
        total += marks;
    }

    /
    double average = (double) total / n;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average;

    return 0;
}
