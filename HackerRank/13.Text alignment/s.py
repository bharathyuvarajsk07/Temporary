# Enter your code here. Read input from STDIN. Print output to STDOUT
thickness = int(input())

for i in range(1,thickness*2,2): print(('H'*i).center(thickness*2-1,' '))

for i in range(thickness+1): print(' '*((thickness*2)//4) + ('H'*thickness).ljust(thickness*3+thickness,' ') + ('H'*thickness).ljust(thickness*2+3,' '))

for i in range((thickness+1) // 2): print(('H'*thickness*5).center(thickness*6-1,' '))

for i in range(thickness+1): print(' '*((thickness*2)//4) + ('H'*thickness).ljust(thickness*3+thickness,' ') + ('H'*thickness).ljust(thickness*2+3,' '))

for i in range(thickness*2-1,0,-2): print(('H'*i).center(thickness*10,' '))
