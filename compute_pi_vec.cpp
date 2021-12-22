#include <bits/stdc++.h>

using namespace std;



class DecimalNumber
{
    public:
        bool is_positive=true;
        vector<unsigned short> integral;
        vector<unsigned short> fractional;
        
        void print(void)
        {
            if(is_positive==false) cout<<"-";
            for(auto it : integral) cout<<it;
            cout<<".";
            for(auto it : fractional) cout<<it;

        }
};


// DecimalNumber add(DecimalNumber num1, DecimalNumber num2)
// {
//     return ;
// }



int main()
{
    DecimalNumber a, b;
    a.integral = {1, 2, 3}; a.fractional = {4, 5, 6};
    b.integral = {9, 8, 7}; b.fractional = {6, 5, 4}; b.is_positive=false;

    // DecimalNumber sum = add(a,b);

    a.print();
    b.print();



    return 0;
}