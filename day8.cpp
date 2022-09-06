#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, phone;
    string name, check;
    cin>>n;
    map<string, int>NamePhone;
    map<string, int>::iterator it;
    for (int i = 1 ; i <= n ; i++ ) {
        cin>>name>>phone;
        NamePhone[name] = phone;
    }
    while (cin >> check) {
        //cin>>check;
        //if (check == "")
        //    break;
        it = NamePhone.find(check);
        if (it == NamePhone.end())
            cout<<"Not found"<<endl;
        else {
           cout<<check<<"="<<NamePhone[check]<<endl; 
        }
    }
    return 0;
}