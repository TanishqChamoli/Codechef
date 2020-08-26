// Smart Phone
/*
Zonal Computing Olympiad 2014, 30 Nov 2013

You are developing a smartphone app.
You have a list of potential customers for your app.
Each customer has a budget and will buy the app at your declared price if
and only if the price is less than or equal to the customer's budget.
You want to fix a price so that the revenue you earn from the app is maximized.
Find this maximum possible revenue.
For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.

Input format

Line 1 : N, the total number of potential customers.
Lines 2 to N+1: Each line has the budget of a potential customer

Output format

The output consists of a single long longeger, the maximum possible revenue
you can earn from selling your app.

Sample Input 1
4
30
20
53
14

Sample Output 1
60

Sample Input 2
5
40
3
65
33
21

Sample Output 2
99

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long inp[n];
    long long profit[n];
    for(long long i=0;i<n;i++){
        cin>>inp[i];
    }
    sort(inp,inp+n);
    long long ans[n];
    for(long long i=0;i<n;i++){
        ans[i] = inp[i]*(n-i);
    }
    sort(ans,ans+n);
    cout<<ans[n-1];
    return 0;
}
/*
Review - Tried to solve this logically but the answer was pretty much about the brute force
when i read that a computer can do 10^9 operation in a sec so i thought i will do my 
code in brute force the exact line was
A rule of thumb is that our computers do roughly 10^8 operations per second (this value gets outdated really fast)
So to check whether our solution is correct, the first step is to ensure that the time complexity is good enough to
meet the timing requirements of the problem (usually the time limit is 1 second). To do this, first calculate the 
worst case time using big O notation. Substitute the constraints and check if the value <= 10^8.
For eg. our algorithm has a complexity of O(n^2) and n <= 10^6. Substituting n yields roughly 10^12 operations.
Do note that this is not the exact number of operations, rather a rough estimate. Since 10^12 is much much bigger
 than 10^8, we can safely conclude that our algorithm won't run in under 1 second.
*/


