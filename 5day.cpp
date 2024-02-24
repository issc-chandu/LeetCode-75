// move zeros to the [1,3,12,0,0]

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> zero = {1, 0, 3, 0, 12};
    int sz = zero.size();
    int j = 0, i = 0;
    while (j < sz){
        if (zero[j] != 0){
            zero[i] = zero[j];
            i++;
        }
        j++;
    }
    while (i < sz){
        zero[i] = 0;
        i++;
    }
    for (int num : zero){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
