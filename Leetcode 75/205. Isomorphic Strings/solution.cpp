/*
Idea:
  s = "badc"
  t = "bada"
  
  we will check whether a character is new in s or not, if new, then we will 
  
  ans = true
  
  if s[i] is new:
    if t[i] not taken for another s[i]:
      map t[i] to s[i]
    else:
      ans = false
      break
  else: (if s[i] is old/already mapped)
    if(m[s[i]] != t[i]):
      ans = false
      break
  
  return ans
    
    
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char, char> m;
        int l = s.size();
        bool ans = true;
        bool arr[128];
        for(int i=0; i<128; i++)
            arr[i] = false;
        for(int i=0; i<l; i++)
        {
            if(m.count(s[i]) == 0)
            {
                if(arr[(int)t[i]] == 0)
                {
                    m[s[i]] = t[i];
                    arr[(int)t[i]] = true;
                }
                else{
                    ans = false;
                    break;
                }
            }
            
            else {
                    if(m[s[i]] != t[i])
                    {
                        ans = false;
                        break;
                    }
                }
        }
        return ans;
    }
};
