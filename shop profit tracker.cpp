/*Problem Title: Shopkeeper Ramesh’s Profit Tracker 💰
🧩 Story:

Ramesh owns a small grocery shop in his town.
He keeps a record of his daily profit or loss for a week in an array.

If the value is positive, it means he made a profit that day.

If the value is negative, it means he had a loss that day.

At the end of the week, Ramesh wants to know:

His total profit (sum of all positive values)

His total loss (sum of all negative values, as a positive number)

His net balance (profit + loss, considering signs)

Help Ramesh write a program to calculate these values.

Problem Statement:

Given an array records[] of size n, where each element represents the daily profit or loss,
find and print the total profit, total loss, and net balance.

Input Format:

The first line contains an integer n — number of days.

The second line contains n space-separated integers representing profit or loss on each day.

Output Format:

Print three lines:

Total Profit: X
Total Loss: Y
Net Balance: Z


Where:

X → sum of all positive numbers

Y → sum of all negative numbers converted to positive value

Z → X − Y*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter number of days" <<endl;
    cin >> n;   // number of days

    int arr[1000];
    int totalProfit = 0;
    int totalLoss = 0;
    int netBalance = 0;

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 0) {
            totalProfit += arr[i];       
        } 
        else if (arr[i] < 0) {
            totalLoss += -arr[i];       
        }

        netBalance += arr[i];             
    }

    
    cout << "Total Profit = " << totalProfit << endl;
    cout << "Total Loss = " << totalLoss << endl;
    cout << "Net Balance = " << netBalance;

    return 0;
}
