#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

// 答案为34, 因为这个中位数出现在x4位置, 至少有15个数比它大,由 49 -15 = 34, 得这个数最大是34
//  x x x x1 x x x
//  x x x x2 x x x
//  x x x x3 x x x
//  x x x x4 x x x
//  x x x x5 x x x
//  x x x x6 x x x
//  x x x x7 x x x
// （上图为排好序的七组，由上而下，由左至右递增）
