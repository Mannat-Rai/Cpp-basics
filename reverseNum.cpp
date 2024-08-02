int reverse(int x) {
        int reverseNum = 0;

        while (x != 0) {
            int pop = x % 10;

            if (reverseNum > INT_MAX / 10 )
                return 0;
            if (reverseNum < INT_MIN / 10 )
                return 0;

            reverseNum = reverseNum * 10 + pop;
            x /= 10;
        }

        return reverseNum;
    }
