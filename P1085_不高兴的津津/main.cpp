#include <iostream>

using namespace std;

int main()
{
    int inSchool, outSchool;
    int studyTime = 8;
    int unhappyDay = 0;
    for(int i = 0; i < 7; ++i)
    {
        cin >> inSchool >> outSchool;
        if (inSchool + outSchool > studyTime){
            unhappyDay = i + 1;
            studyTime = inSchool + outSchool;
        }
    }
    cout << unhappyDay << endl;
    return 0;
}
