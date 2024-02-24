// water tank maximum area
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> num = {1,8,6,2,5,4,8,3,7};
    int size = num.size();

    int area = 0;

    for (int i = 0; i < size; i++){
        for (int j = 1; j < size; j++){
            cout << "\ni : " << num[i] << "\t j : " << num[j] << endl;
            double temp = min(num[i], num[j]) * (j - i);
            if (area < temp)
                area = temp;
        }
    }
    cout << "\n max area : " << area << endl;

    return 0;
}