const int N = 30;

string s, p;
int m, n;
int dp[N][N];

bool solve(int i, int j) {
    //comparing complete
    if (i >= m && j >= n) return true;

    //second one is larger
    if (j >= n) return false;

    //update dp
    if (dp[i][j] != -1) return dp[i][j];
    
    if (p[j] != '.') { // if char is not .
        if (j+1 >= n || p[j+1] != '*') { // if there is no * after
            if (i >= m) return dp[i][j] = false;
            if (s[i] == p[j]) {
                return dp[i][j] = solve(i+1, j+1);
            }
            return dp[i][j] = false;
        } else { // there is * after
            bool res = false;
            res |= solve(i, j+2);
            for (int k = i; k < m && p[j] == s[k]; k++) {
                res |= solve(k+1, j+2);
            }
            return dp[i][j] = res;
        }
    } else { // the char is .
        if (j+1 >= n || p[j+1] != '*') { // if there is no * after
            if (i >= m) return dp[i][j] = false;
            return dp[i][j] = solve(i+1, j+1);
        } else { // there is * after
            bool res = false;
            res |= solve(i, j+2);
            for (int k = i; k < m; k++) {
                res |= solve(k+1, j+2);
            }
            return dp[i][j] = res;
        }
    }
}

class Solution {
public:
    bool isMatch(string _s, string _p) {
        s = _s;
        p = _p;
        m = s.length();
        n = p.length();
        for (int x = 0; x < N; x++) {
            for (int y = 0; y < N; y++) {
                dp[x][y] = -1;
            }
        }
        return solve(0, 0);
    }
};
