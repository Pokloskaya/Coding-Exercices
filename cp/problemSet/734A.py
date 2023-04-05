#/https://codeforces.com/problemset/problem/734/A
 
games = input(); games = (int (games))
results = input()
anton = 0; danik = 0
A = "A"; D = "D"
 
for i in range(games):
  if(results[i] == A):
    anton = anton + 1

  if(results[i] == D):
    danik = danik + 1
 
if(anton > danik): print("Anton")
if(danik > anton): print("Danik")
if(anton == danik): print("Friendship")