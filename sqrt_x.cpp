class Solution {
public:
    int mySqrt(int x) {
        if(x<0)
            return -1;
        if(x==0)
            return 0;
        int left=1;
        int right=x/2+1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(mid<=x/mid&&x/(mid+1)<(mid+1))
                return mid;
            if(x/mid<mid)
                right=mid-1;
            else
                left=mid+1;
        }
    }
};