# 時間複雜度：O(n), 空間複雜度: O(1)
class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 == 1:
            return False
        stack = []
        for ch in s:
            if ch in '({[':
                stack.append(ch)
            elif ch == ')':
                if stack and stack[-1] == '(':
                    stack.pop()
                else:
                    return False
            elif ch == '}':
                if stack and stack[-1] == '{':
                    stack.pop()
                else:
                    return False
            elif ch == ']':
                if stack and stack[-1] == '[':
                    stack.pop()
                else:
                    return False
        return not stack
