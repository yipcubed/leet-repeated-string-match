#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

// https://leetcode.com/problems/repeated-string-match/

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        ostringstream ss;
        auto len = static_cast<int>(A.length());
        ss << A;
        while (len < B.length()) {
            ss << A;
            len += A.length();
        }
        if (ss.str().find(B) != string::npos) return static_cast<int>(len / A.length());
        ss << A;
        if (ss.str().find(B) != string::npos) return static_cast<int>(len / A.length() + 1);
        return -1;
    }
};

void test1() {
    string A = "abcd", B = "cdabcdab";

    cout << "3 ? " << Solution().repeatedStringMatch(A, B) << endl;
}

void test2() {

}

void test3() {

}