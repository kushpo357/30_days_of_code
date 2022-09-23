#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num, n, sqrtn;
    cin>>num;
    //cin>>n;
    //cout<<sqrt(n)<<' '<<sqrtn;
    for(int i = 0; i < num; i++){
        cin>>n;
        sqrtn = sqrt(n);
        bool check = true;
        for(int j = 1; j <= sqrtn; j++){
            //cout<<n<<' '<<j<<endl;
            if(n == 1){
                check = false;
                break;
            }
            if (j != 1 && (n % j == 0)) {
                //cout<<"bhau"<<endl;
                check = false;
                break;
            }
        }
        if (check)
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }
    return 0;
}
