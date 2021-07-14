#include <bits/stdc++.h>
using namespace std;

int main() {
    int with;
    float balance;
    cin>>with>>balance;
    if(with<=balance-0.50){
        if(with%5==0)
        {
            cout<<balance-(with+0.50);
        }
        else
        cout<<balance;
    }
    else
        cout<<balance;
	return 0;
}