def isValid( s: str) -> bool:
        
        q = []
        pair = {}
        pair[')'] = '('
        pair['}'] = '{'
        pair [']'] = '['
        
        for c in s:
            if c in pair.keys() and (q[-1] == pair[c]):
                q.pop()
            else: 
                q.append(c)
        if q:
            return 'false'
        else:
            return 'true'



print(isValid("{[]}"))