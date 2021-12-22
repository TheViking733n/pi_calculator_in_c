#include <bits/stdc++.h>

using namespace std;


class DecimalNumber
{
    public:
        bool is_positive=true;
        vector<short> integral={0};
        vector<short> fractional={0};
        
        void print(void)
        {
            if(is_positive==false) cout<<"-";
            for(auto it : integral) cout<<it;
            cout<<".";
            for(auto it : fractional) cout<<it;

        }
};


DecimalNumber add(DecimalNumber num1, DecimalNumber num2)
{
    // First adding fractional part
    int len1 = num1.fractional.size();
    int len2 = num2.fractional.size();
    int bigger = max(len1, len2);
    int carry = 0;

    DecimalNumber result;
    result.integral={}; result.fractional={};

    // Initializing result.factional with zeros
    for(int i=0 ; i<bigger ; ++i) result.fractional.push_back(0);

    for(int i=bigger-1 ; i>=0 ; --i)
    {
        if(len1<=i && i<len2)
            result.fractional[i] = num2.fractional[i] + carry;

        else if(len2<=i && i<len1)
            result.fractional[i] = num1.fractional[i] + carry;

        else
            result.fractional[i] = num1.fractional[i] + num2.fractional[i] + carry;

        if (result.fractional[i]>9)
        {
            carry = result.fractional[i]/10;
            result.fractional[i] = result.fractional[i]%10;
        }
        else
        {
            carry = 0;
        }
    }


    len1 = num1.integral.size();
    len2 = num2.integral.size();
    bigger = max(len1, len2);

    // Initializing result.integral with zeros
    for(int i=0 ; i<bigger ; ++i) result.integral.push_back(0);
    
    int x;

    for(int i=1 ; i<=bigger ; ++i)
    {
        x = bigger - i;
        if(0<=x && x<len2-len1)
            result.integral[x] = num2.integral[x] + carry;

        else if(0<=x && x<len1-len2)
            result.integral[x] = num1.integral[x] + carry;

        else
            result.integral[x] = num1.integral[len1-i] + num2.integral[len2-i] + carry;

        if (result.integral[x]>9)
        {
            carry = result.integral[x]/10;
            result.integral[x] = result.integral[x]%10;
        }
        else
        {
            carry = 0;
        }
    }

    // Checking carry is still left after addition
    if (carry != 0)
        result.integral.insert(result.integral.begin(), carry);

    return result;
}







int main()
{
    DecimalNumber a, b;
    a.integral = {1}; a.fractional = {1,2,6,7,3};

    b.integral = {9,9,9}; b.fractional = {2,4,6};

    DecimalNumber sum = add(a,b);

    a.print();
    cout<<'\n';
    b.print();
    cout<<'\n';
    sum.print();






    return 0;
}