class Solution {
public:
    int reverse(int x) {
       if (x <= pow(-2,31) || x >= (pow(2,31)-1) ) return 0;
        int f=0;
        if (x<0) {
            x= x*(-1);
            f=1;
        }
        long y=0;
        for(int i; ;i++){
            y= x%10 + y*10;
            x= x/10;

            if (x==0) break;
        }
        if (y <= pow(-2,31) || y > (pow(2,31)-1) ) return 0;
        if (f==1) return y*(-1);
        else return y;
        
    }
};
