#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin>>i;


while(i){

    string s;
    cin>>s;

    int len = s.length();

        if(len>10)
        {
            cout<<s.front()<<len-2<<s.back()<<endl;

        }
        else
        {
            cout<<s<<endl;

        }


i--;
}
return 0;
}
