#3090 MaximumLengthSubstringWithTwoOccurrences
class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        left, right = 0, 0
        max_value = 1
        counter = {}

        counter[s[0]] = 1

        while(right < len(s) - 1):
            right += 1
            if (counter.get(s[right])):
                counter[s[right]] += 1
            else:
                counter[s[right]] = 1
            while(counter[s[right]] == 3):
                counter[s[left]] -= 1
                left += 1
            max_value = max(max_value, right-left+1)
        return max_value




# while(right < len(s) - 1):
        #     counter[s[right]] += 1

        #     while(counter[s[right]] == 3):
        #         counter[s[left]] -= 1
        #         left += 1

        #     max_value = max(max_value, right - left + 1)
        #     right += 1    
        # return max_value