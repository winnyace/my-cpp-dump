// https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <iostream>
using namespace std;

class Student 
{
    private:
        int scores[5];
    public:
        void input()
        {
            for (int i = 0; i < 5; i++) 
            {
                int num;
                cin >> num;
                scores[i] = num;
            }
        }
        
        int calculateTotalScore()
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
                sum += scores[i];
            return sum;
        }
};

int main()
{
    Student s;
    s.input();
    cout << s.calculateTotalScore();
    return 0;
}