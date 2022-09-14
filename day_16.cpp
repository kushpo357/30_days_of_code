#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        stoi(S);
        cout<<S<<endl;
        //throw 10;
    } catch (std::invalid_argument) {
        cout<<"Bad String"<<endl;
    }

    return 0;
}
