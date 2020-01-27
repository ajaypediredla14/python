from tkinter import *
import tkinter
from tkinter.messagebox import showinfo

y=""
x=2
player1=[]
player2=[]


def logic(number):
    global x,y,c
    global player1,player2
    if number==1:
            # c+=1
            if x%2==0:
                y="x"
                player1.append(number)
                print(player1)
            elif x%2!=0:
                y="O"
                player2.append(number)
                print(player2)

            b1.config(text=y)
            x+=1

    if number==2:
        if x%2==0:
           y="x"
           player1.append(number)
           print(player1)
        elif x%2!=0:
           y="O"
           player2.append(number)
           print(player2)

        b2.config(text=y)
        x+=1

    if number==3:
        if x%2==0:
          y="X"
          player1.append(number)
          print(player1)
        elif x%2!=0:
          y="O"
          player2.append(number)
          print(player2)

        b3.config(text=y)
        x+=1

    if number==4:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b4.config(text=y)
        x+=1

    if number==5:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b5.config(text=y)
        x+=1

    if number==6:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b6.config(text=y)
        x+=1

    if number==7:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b7.config(text=y)
        x+=1

    if number==8:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b8.config(text=y)
        x+=1

    if number==9:
        if x%2==0:
            y="X"
            player1.append(number)
            print(player1)
        elif x%2!=0:
            y="O"
            player2.append(number)
            print(player2)

        b9.config(text=y)
        x+=1

    from itertools import permutations
    set1=permutations([1,2,3])
    set2=permutations([4,5,6])
    set3=permutations([7,8,9])
    set4=permutations([1,5,9])
    set5=permutations([3,5,7])
    set6=permutations([1,4,7])
    set7=permutations([2,5,8])
    set8=permutations([3,6,9])

    for i in set1,set2,set3,set4,set5,set6,set7,set8:
        for j in list(i):
            player_1=all(elem in player1 for elem in j)
            player_2=all(elem in player2 for elem in j)
            if player_1==True:
                print("player1 wins")
                showinfo("result","player1 has won")
                break
            elif player_2==True:
                print("player2 wins")
                showinfo("result","player2 has won")
                break
            else:
                pass



root=Tk()
l1=Label(root,text="player 1: X",font="times 10")
l1.grid(row=0,column=1)

l2=Label(root,text="player 2: O",font="times 10")
l2.grid(row=0,column=2)

b1=Button(root,height=10,fg="red",width=20,command=lambda:logic(1))
b1.grid(row=1,column=1)

b2=Button(root,height=10,fg="red",width=20,command=lambda:logic(2))
b2.grid(row=1,column=2)

b3=Button(root,height=10,fg="red",width=20,command=lambda:logic(3))
b3.grid(row=1,column=3)

b4=Button(root,height=10,fg="red",width=20,command=lambda:logic(4))
b4.grid(row=2,column=1)

b5=Button(root,height=10,fg="red",width=20,command=lambda:logic(5))
b5.grid(row=2,column=2)

b6=Button(root,height=10,fg="red",width=20,command=lambda:logic(6))
b6.grid(row=2,column=3)

b7=Button(root,height=10,fg="red",width=20,command=lambda:logic(7))
b7.grid(row=3,column=1)

b8=Button(root,height=10,fg="red",width=20,command=lambda:logic(8))
b8.grid(row=3,column=2)

b9=Button(root,height=10,fg="red",width=20,command=lambda:logic(9))
b9.grid(row=3,column=3)

root.mainloop()





