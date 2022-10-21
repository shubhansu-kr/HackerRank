import re
print(*(["YES" if re.findall(r'^[A-Z]{5}[\d]{4}[A-Z]$', input())
      else "NO" for i in range(int(input()))]), sep='\n')
