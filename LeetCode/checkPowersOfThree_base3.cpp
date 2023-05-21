class Solution {    
    public: 
        static boolean checkPowersOfThree_base3(int n) {
        while (n > 0) {
            if (n % 3 == 2) {
                return false;
            }
            n /= 3;
        }

        return true;
    }

}