#include <bits/stdc++.h>

using namespace std;




string add(string num1, string num2)
{
    string ans = "";

    
    int sign1 = (num1[0]=='-') ? (-1) : (1);
    int sign2 = (num2[0]=='-') ? (-1) : (1);

    int index_of_dp1 = num1.find('.');
    int index_of_dp2 = num2.find('.');
    
    if(index_of_dp1 == -1){
        num1 += ".0";
        index_of_dp1 = num1.size() - 2;
    }
    if(index_of_dp2 == -1){
        num2 += ".0";
        index_of_dp2 = num2.size() - 2;
    }

    int len1 = num1.size(), len2 = num2.size();

    cout<<index_of_dp1<<"\n";
    cout<<index_of_dp2<<"\n";

    return "435454";
}
int main()
{
    string a = "2335234235234";
    string b = "345345.2374";
    string temp = add(a,b);
    cout<<a;

    return 0;
}   