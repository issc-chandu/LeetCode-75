// suppose given a two string s1 = 'pqr' and s2 = 'abc' and this string are output the 'paqbrc'
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "pqr";
    string s2 = "abc";

    string result;

    for (int i = 0, j = 0; i < s1.length(),s2.length(); i++,j++){
        if ( i < s1.size()){
            result += s1[i];
        }
        if (i < s2.size())
        {
            result += s2[j];
        }

        cout << result << endl;
    }
}