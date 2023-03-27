tk = [[' ',' ',' '],[' ',' ',' '],[' ',' ',' ']]
def tktk(tk):
    print('c→ 1   2   3')
    print('r')
    for i in range(3):
        if i ==0:
            print('↓    |   |')
        else :
            print('     |   |')
        for j in range(3):
            if j==0:
                print(i+1,end='  ')
                print(tk[i][j],'|',end='')
            elif j == 1:
                print('',tk[i][j],'|',end='')
            elif j==2:
                print('',tk[i][j])
        if i != 2:
            print('    _ _ _ _ _')
        elif i==2:
            print('     |   |')
intro = """
                                      WELCOME TO TIC TAK TOE
                                            GAME RULES
                                        


#Tic_Tac_toe is the very realistic game

→c means coloumns and the numbers          c→ 1   2   3
 1,2 and 3 reapresnts the 1st,2nd          r
 and 3rd coloumns                          ↓    |   |
                                           1    |   |  
→r means rows and the numbers 1,2             _ _ _ _ _ 
 and 3 reapresnts the 1st,2nd and               |   |
 3rd rows                                  2    |   |  
                                              _ _ _ _ _ 
                                                |   |
                                           3    |   |  
                                                |   |


→first the game will ask for the name of both players
→then whichever player's turn it is need to enter the row number in which to print X and Y 
and similarly in next input the player need to input the coloumn number 
     """
print(intro)

name1 = input('INPUT PLAYER 1 NAME - ').upper()
name2 = input('INPUT PLAYER 2 NAME - ').upper()
tktk(tk)
flag = True
player = 1
while flag :
    if ' ' in tk[0] or ' ' in tk[1] or ' ' in tk[2]: 
        if player == 1:
            print()
            print(" {}'s TURN ".format(name1))
            r = int(input('Enter the row in which to put O '))
            c = int(input('Enter the coulomn in which to put O '))
            player = player+1
        elif player == 2:
            print()
            print(" {}'s TURN ".format(name2))
            r = int(input('Enter the row in which to put X '))
            c = int(input('Enter the coulomn in which to put X '))
            player = player-1
        for i in range(1):
            if player==2:
                tk[r-1][c-1]='O'
            elif player==1:
                tk[r-1][c-1]='X'
        tktk(tk)
        if tk[0][0]==tk[0][1] and tk[0][1]==tk[0][2] and tk[0][2]!=' ':
            flag = False
            w = tk[0][0]
        elif tk[0][0]==tk[1][0] and tk[1][0]==tk[2][0] and tk[2][0]!=' ':
            flag = False
            w = tk[0][0]
        elif tk[1][0]==tk[1][1] and tk[1][1]==tk[1][2] and tk[1][2]!=' ':
            flag = False
            w = tk[1][0]
        elif tk[0][1]==tk[1][1] and tk[1][1]==tk[2][1] and tk[2][1]!=' '  :
            flag = False
            w = tk[0][1]
        elif tk[2][0]==tk[2][1] and tk[2][1]==tk[2][2] and tk[2][2]!=' '  :
            flag = False
            w = tk[2][0]
        elif tk[0][2]==tk[1][2] and tk[1][2]==tk[2][2] and tk[2][2]!=' ':
            flag = False
            w = tk[0][2]
        elif tk[0][0]==tk[1][1] and tk[1][1]==tk[2][2] and tk[2][2]!=' ' :
            flag= False
            w = tk[0][0]
        elif tk[0][2]==tk[1][1] and tk[2][0]==tk[1][1] and tk[1][1]!=' ':
            flag = False
            w = tk[0][2]
    else:
        w = 'd'
        flag = False
    
if w == 'O':
    print()
    res1 ='| {} WINS !!! |'.format(name1) 
    print('-'*len(res1))
    print(res1)
    print('-'*len(res1))
elif w == 'X':
    print()
    res2 ='| {} WINS !!! |'.format(name2) 
    print('-'*len(res2))
    print(res2)
    print('-'*len(res2))
elif w == 'd':
    print()
    print('------------------')
    print('| ITS A DRAW !!! |')
    print('------------------')
