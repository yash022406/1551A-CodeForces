#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int a=x/3;
        int b=x/3 +1;
        if(3*a==x){
            cout<<a<<" "<<a;
        }
        else if(2*a+b==x){
            cout<<b<<" "<<a;
        }
        else if(2*b+a==x){
            cout<<a<<" "<<b;
        }
        cout<<endl;
    }

    return 0;
}