class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1 )return INT_MAX;
        //long long ans = dividend/divisor;
        long long ans=0;

        // determine sign
        bool neg = (dividend<0)^(divisor<0);
        long long a = llabs((long long)dividend),b=llabs((long long)divisor);

        while(a>=b){
            long long temp = b,mul =1;
            while((temp<<1)<=a){
                temp<<=1;
                mul<<=1;
            }
            a-=temp;
            ans +=mul;
        }

        if(neg)ans = -ans;

        if(ans >INT_MAX)ans = INT_MAX;
        if(ans<INT_MIN)ans =INT_MIN;
        return (int)ans;
    }
};