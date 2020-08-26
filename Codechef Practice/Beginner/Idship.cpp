#include<iostream>

using namespace std;

int main(){
    int repeat;
    cin>>repeat;
    char temp;
    for(int i=0;i<repeat;i++){
        cin>>temp;
        if(temp == 'B' || temp == 'b')
            cout<<"BattleShip\n";
        else if(temp == 'C' || temp == 'c')
            cout<<"Cruiser\n";
        else if(temp == 'D' || temp == 'd')
            cout<<"Destroyer\n";
        else
            cout<<"Frigate\n";
    }
    return 0;
}