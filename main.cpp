class Solution {
public:
    bool isValid(string s) {
        bool res = true;
        vector<char> arr;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                arr.push_back(s[i]);
            }
            else {
                if (s[i] == '}') {
                    if (arr.size() > 0) {
                        if (arr[arr.size() - 1] == '{') {
                            arr.pop_back();
                        }
                        else {
                            res = false;
                            break;
                        }
                    }
                    else {
                        res = false;
                        break;
                    }
                }
                else if (s[i] == ']') {
                    if (arr.size() > 0) {
                        if (arr[arr.size() - 1] == '[') {
                            arr.pop_back();
                        }
                        else {
                            res = false;
                            break;
                        }
                    }
                    else {
                        res = false;
                        break;
                    }
                }
                else if (s[i] == ')') {
                    if (arr.size() > 0) {
                        if (arr[arr.size() - 1] == '(') {
                            arr.pop_back();
                        }
                        else {
                            res = false;
                            break;
                        }
                    }
                    else {
                        res = false;
                        break;
                    }
                }                
            }
        }
        
        if (arr.size() > 0) {
            res = false;
        }
        
        return res;
    }
};
