//can place flower

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> flower = {1, 0, 0, 0, 0};
    int n = 2;
    int cnt = 0;

    for (int i = 0; i < flower.size(); i++){
        if (flower[i] == 0){
            if (i == 0 || flower[i - 1] == 0 && (i == flower.size() - 1 || flower[i + 1] == 0))
                flower[i] = 1;
            cnt++;
        }
    }
    cout << "Flowerbed: ";
    for (int i = 0; i < flower.size(); i++){
        cout << flower[i] << " ";
    }
    cout << endl;

    if (cnt == n)
        cout << "true" << endl;
    else
        cout << "false" << endl;


    return 0;
}