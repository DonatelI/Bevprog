#include "std_lib_facilities.h"

int main(){
    string s1, s2;
    double mini=0, maxi=0, sz1, sz2, ossz=0;;
    int db=0;
    vector<double> v;

    while(1)
    {
        cout << endl << "number:";
        cin >> s1;
        if(s1 == "|")
            break;

        cout << endl << "unit:";
        cin >> s2;

        if(s2!="cm" && s2!="m" && s2!="in" && s2!="ft")
        {
            cout << "rejected" << endl;
            return 1;
        }


        sz1=atof(s1.c_str());

        switch(s2[0])
        {
        case 'c' :
            sz1/=100;
            break;

        case 'i' :
            sz1=sz1*2.54/100;
            break;

        case 'f' :
            sz1=sz1*12*2.54/100;
            break;

        case 'm' :
            break;

        default :
            break;

        }

        if(sz1<mini)
        {
            mini=sz1;
            cout << "the smallest so far" << endl;
        }


        if(sz1>maxi)
        {
            maxi=sz1;
            cout << "the largest so far" << endl;;
        }

        ossz+=sz1;
        db++;

        v.push_back(sz1);


    }
    cout << endl << "the smallest:" << mini << endl << "the largest:" << maxi << endl << "sum of the values:" << ossz << endl << "number of values:" << db << endl;
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
