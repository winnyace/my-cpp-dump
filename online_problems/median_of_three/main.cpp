// https://www.codeabbey.com/index/task_view/median-of-three
// the input is 
// 3
// 7 3 5
// 15 20 40
// 300 550 137
// the output should be
// 5 20 300

#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    array<int, 3> v[n];
    int mid = (0 + 3 - 1) / 2;
    for (int size = 0; size < n; size++)
        for (int i = 0; i < 3; i++)
            cin >> v[size].at(i);

    for (int size = 0; size < n; size++)
        for (int i = 0; i < 3-1; i++)
            for (int j = i+1; j < 3; j++)
                if (v[size].at(i) > v[size].at(j)) {
                    int aux = v[size].at(i);
                    v[size].at(i) = v[size].at(j);
                    v[size].at(j) = aux;
                }
            
    for (int size = 0; size < n; size++)
        cout << v[size].at(mid) << " ";
}