class Solution {
public:
    bool isPalindrome(int x) {
        if (x< 0) return false;
        int n=x;
        //cout << n<<endl;
        
        int r;
        double num=0;
        while(n!=0){
            r=n%10;
            //cout << r <<endl;
            num = num*10 + r;
            //cout << "num" << num << endl;
            n= n/10;
        }
        //cout<< num<<endl;
        if (x==num) return true;
        else return false;
        
    }
};
