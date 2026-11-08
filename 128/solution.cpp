class Solution {
public:
    string encode(vector<string>& strs) {
        string ans;

        for (auto s : strs) {
            ans += to_string(s.length()) + "#" + s;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        string tempLen;

        for (int i = 0; i < s.length(); i++) {

            if (isdigit(s[i])) {
                tempLen += s[i];
                continue;
            }

            if (s[i] == '#' && !tempLen.empty()) {
                int len = stoi(tempLen);
                int pos = i + 1;

                ans.push_back(s.substr(pos, len));

                i = pos + len - 1;
                tempLen = "";
            }
        }

        return ans;
    }
};
