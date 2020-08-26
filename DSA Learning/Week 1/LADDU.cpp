// Laddu
/*
 You might have heard about our new goodie distribution program aka the "Laddu Accrual System".
 This problem is designed to give you a glimpse of its rules. You can read the page once before attempting
 the problem if you wish, nonetheless we will be providing all the information needed here itself.

Laddu Accrual System is our new goodie distribution program. In this program, we will be distributing Laddus
in place of goodies for your winnings and various other activities (described below), that you perform on our
system. Once you collect enough number of Laddus, you can then redeem them to get yourself anything from a wide
range of CodeChef goodies.

Let us know about various activities and amount of laddus you get corresponding to them.

    Contest Win (CodeChef’s Long, Cook-Off, LTIME, or any contest hosted with us) : 300 + Bonus
        (Bonus = 20 - contest rank). Note that if your rank is > 20, then you won't get any bonus.
    Top Contributor on Discuss : 300
    Bug Finder : 50 - 1000 (depending on the bug severity). It may also fetch you a CodeChef internship!
    Contest Hosting : 50

You can do a checkout for redeeming laddus once a month. The minimum laddus redeemable at Check Out are 200
for Indians and 400 for the rest of the world.

You are given history of various activities of a user. The user has not redeemed any of the its laddus accrued..
Now the user just wants to redeem as less amount of laddus he/she can, so that the laddus can last for as long as
possible. Find out for how many maximum number of months he can redeem the laddus. 

Input

The first line of input contains a single integer T denoting number of test cases
For each test case:
    First line contains an integer followed by a string denoting activities, origin respectively, where
    activities denotes number of activities of the user, origin denotes whether the user is Indian or the
    rest of the world. origin can be "INDIAN" or "NON_INDIAN".
    For each of the next activities lines, each line contains an activity.
    An activity can be of four types as defined above.
        Contest Win : Input will be of form of CONTEST_WON rank, where rank denotes the rank of the user.
        Top Contributor : Input will be of form of TOP_CONTRIBUTOR.
        Bug Finder : Input will be of form of BUG_FOUND severity, where severity denotes the severity of the bug.
        Contest Hosting : Input will be of form of CONTEST_HOSTED.

Output
    For each test case, find out the maximum number of months for which the user can redeem the laddus accrued. 

Constraints
    1 ≤ T, activities ≤ 100
    1 ≤ rank ≤ 5000
    50 ≤ severity ≤ 1000

Subtasks
There is only a single subtask with 100 points.
Example

Input:
2
4 INDIAN
CONTEST_WON 1
TOP_CONTRIBUTOR
BUG_FOUND 100
CONTEST_HOSTED
4 NON_INDIAN
CONTEST_WON 1
TOP_CONTRIBUTOR
BUG_FOUND 100
CONTEST_HOSTED

Output:
3
1

*/

#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n_strings;
        cin>>n_strings;
        int lad = 0;
        string nationality;
        cin>>nationality;
        while(n_strings--){
            string inp;
            cin>>inp;
            if(inp.compare("CONTEST_WON") == 0){
                int rank;
                cin>>rank;
                lad +=300;
                if(rank<20)
                    lad +=(20-rank);
            }
            else if(inp.compare("TOP_CONTRIBUTOR") == 0){
                lad+=300;
            }
            else if(inp.compare("BUG_FOUND") == 0){
                int severity;
                cin>>severity;
                lad+=severity;
            }
            if(inp.compare("CONTEST_HOSTED") == 0){
                lad+=50;
            }
        }
        if(nationality.compare("INDIAN") == 0){
            cout<<lad/200<<"\n";
        }
        else{
            cout<<lad/400<<"\n";
        }
    }
    return 0;
}
/*
Basic question which only required the knowledge of the function str.compare which gives us 1 or 0 as the 
op and tells us if its same or not.
*/