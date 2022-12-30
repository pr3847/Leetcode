class Solution {
public:
    int divide(double dividend, double divisor) {
        double a;
        a=dividend/divisor;
        if(a>(pow(2,31)-1)){
            return pow(2,31)-1;
        }
        else if(a<pow(-2,31)){
            return pow(-2,31);
        }
        else if(a<0){
            return ceil(a);
        }
        else{
            return floor(a);
        }
    }
};
