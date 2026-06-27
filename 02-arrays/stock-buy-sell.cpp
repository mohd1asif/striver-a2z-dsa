/*
 * Problem: Best Time to Buy and Sell Stock

 * Approach: One-Pass Tracking
 * Iterate through the days while keeping track of the lowest price seen so far. 
 * At each step, calculate the profit if you sold today. If it's the best profit yet, save it.
 
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int stockBuySell(vector<int> &prices){
    int n=prices.size();
    int minPr=prices[0];
    int maxPr=0;

    for(int i=1; i<n; i++){
        int currPr = prices[i]-minPr;
        maxPr = max(maxPr, currPr);
        minPr=min(minPr, prices[i]);
    }
    return maxPr;
}

int main(){
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector <int> prices(n);
    cout << "Enter the stock prices: ";
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    
    int profit = stockBuySell(prices);
    cout << profit;

}