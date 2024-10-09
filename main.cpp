class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int add = 0;
        //  parsing s and calculate if balance
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }

            if (balance < 0) {
                add += 1;
                balance = 0;
            }
        }
        // If balance > 0, we have unbalanced '(' remaining, so we need to
        // insert ')' to match them
        add += balance;
        
        return add;
    }
};
