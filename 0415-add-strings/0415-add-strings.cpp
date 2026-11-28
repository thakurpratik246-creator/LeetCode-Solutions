class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        stack<char> s1, s2;

        for (int i = 0; i < num1.size(); i++)
            s1.push(num1[i]);

        for (int i = 0; i < num2.size(); i++)
            s2.push(num2[i]);

        string ans = "";

        while (!s1.empty() || !s2.empty()) {
            int sum = carry;

            if (!s1.empty()) {
                sum += s1.top() - '0';
                s1.pop();
            }

            if (!s2.empty()) {
                sum += s2.top() - '0';
                s2.pop();
            }

            ans += to_string(sum % 10);
            carry = sum / 10;
        }

        if (carry)
            ans += to_string(carry);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};