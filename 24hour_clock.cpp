#include <bits/stdc++.h>
#include <string>

using namespace std;

/*

Input Format:
A single string  that represents a time in 12-hour clock format (i.e. hh:mm:ssAM or hh:mm:ssPM).

Returns:
string: the time in 24 hour format(i.e. hh:mm:ss)

*/

string timeConversion(string s) {
    string hour,minutes,sec;
    hour[0]=s[0];
    hour[1]=s[1];
    minutes[0]=s[3];
    minutes[1]=s[4];
    sec[0]=s[6];
    sec[1]=s[7];
    int h,m,se;
    h=stoi(hour);
    m=stoi(minutes);
    se=stoi(sec);
    if(s[8]=='P')
    h+=12;
    else
    {//AM
        if(h==12)
        {
            h=0;
        }
    }

    if(s[8]=='P'&&h==24)//for(12:45:54PM)
    h-=12;

    string result;
    hour=to_string(h);
    minutes=to_string(m);
    sec=to_string(se);

    if(h<10)
    result.append("0");
    result.append(hour);
    result.append(":");
    if(m<10)
    result.append("0");
    result.append(minutes);
    result.append(":");
    if(se<10)
    result.append("0");
    result.append(sec);

    return result;
}

int main()
{
    string s;
    getline(cin, s);
    string result = timeConversion(s);
    cout << result << "\n";
    return 0;
}
