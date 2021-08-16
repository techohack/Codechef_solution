from tkinter import *
from tkinter import messagebox

Y=" "
X=2
Player_1=[]
Player_2=[]

def define_sign(number):

    global X, Y
    global Player_1, Player_2

    if number == 1:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b1.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 2:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b2.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 3:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b3.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 4:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)
            disable_all_buttons()
        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b4.config(text=Y)
        X=X+1
        disable_all_buttons()

    if number == 5:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b5.config(text=Y)
        X=X+1
    disable_all_buttons()
        
    if number == 6:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b6.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 7:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b7.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 8:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b8.config(text=Y)
        X=X+1
    disable_all_buttons()

    if number == 9:
        if  X%2 == 0:
            Y = 'X'
            Player_1.append(number)
            print(Player_1)

        elif  X%2 != 0:
            Y ='O'
            Player_2.append(number)
            print(Player_2)

        b9.config(text=Y)
        X=X+1
    disable_all_buttons()


win=Tk()

l1=Label(win, text="Player 1 : X ", font = ("Sans-serif",18))
l1.grid(row=0, column = 1)

l2=Label(win, text="Player 2 : O ", font = ("Sans-serif",18))
l2.grid(row=0, column = 2)

win.title('Tic-Tac-Toe')


#  For X starts
clicked = True
count=0

#disable all the buttons
def   disable_all_buttons():
    b1.config(state=DISABLED)
    b2.config(state=DISABLED)
    b3.config(state=DISABLED)
    b4.config(state=DISABLED)
    b5.config(state=DISABLED)
    b6.config(state=DISABLED)
    b7.config(state=DISABLED)
    b8.config(state=DISABLED)
    b9.config(state=DISABLED)


#Check who win
def  check_won():
    global winner
    winner = False

    if  b1["text"] == "X" and b2["text"] == "X" and b3["text"] == "X":
        b1.config(bg="blue")
        b2.config(bg="blue")
        b3.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_buttons()

    elif  b4["text"] == "X" and b5["text"] == "X" and b6["text"] == "X":
        b4.config(bg="blue")
        b5.config(bg="blue")
        b6.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_buttons()

    elif  b7["text"] == "X" and b8["text"] == "X" and b9["text"] == "X":
        b7.config(bg="blue")
        b8.config(bg="blue")
        b9.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations X you won ")
        disable_all_buttons()

    elif  b1["text"] == "X" and b4["text"] == "X" and b7["text"] == "X":
        b1.config(bg="blue")
        b4.config(bg="blue")
        b7.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_button()

    elif  b2["text"] == "X" and b5["text"] == "X" and b8["text"] == "X":
        b2.config(bg="blue")
        b5.config(bg="blue")
        b8.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_buttons()

    elif  b3["text"] == "X" and b6["text"] == "X" and b9["text"] == "X":
        b3.config(bg="blue")
        b6.config(bg="blue")
        b9.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_button()

    elif  b1["text"] == "X" and b5["text"] == "X" and b9["text"] == "X":
        b1.config(bg="blue")
        b5.config(bg="blue")
        b9.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_buttons()

    elif  b3["text"] == "X" and b5["text"] == "X" and b7["text"] == "X":
        b3.config(bg="blue")
        b5.config(bg="blue")
        b7.config(bg="blue")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_1 you won ")
        disable_all_buttons()

### Check NOW O WINS

    elif  b1["text"] == "O" and b2["text"] == "O" and b3["text"] == "O":
        b1.config(bg="green")
        b2.config(bg="green")
        b3.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b4["text"] == "O" and b5["text"] == "O" and b6["text"] == "O":
        b4.config(bg="green")
        b5.config(bg="green")
        b6.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b7["text"] == "O" and b8["text"] == "O" and b9["text"] == "O":
        b7.config(bg="green")
        b8.config(bg="green")
        b9.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b1["text"] == "O" and b4["text"] == "O" and b7["text"] == "O":
        b1.config(bg="green")
        b4.config(bg="green")
        b7.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b2["text"] == "O" and b5["text"] == "O" and b8["text"] == "O":
        b2.config(bg="green")
        b5.config(bg="green")
        b8.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b3["text"] == "X" and b6["text"] == "X" and b9["text"] == "X":
        b3.config(bg="green")
        b6.config(bg="green")
        b9.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b1["text"] == "O" and b5["text"] == "O" and b9["text"] == "O":
        b1.config(bg="green")
        b5.config(bg="green")
        b9.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

    elif  b3["text"] == "O" and b5["text"] == "O" and b7["text"] == "O":
        b3.config(bg="green")
        b5.config(bg="green")
        b7.config(bg="green")
        winner = True
        messagebox.showinfo("Tic Tac Toe", " Congratulations Player_2 you won ")
        disable_all_buttons()

        #check if tie
    if  count == 9 and winner == False :
        b1.config(bg="yellow")
        b2.config(bg="yellow")
        b3.config(bg="yellow")
        b4.config(bg="yellow")
        b5.config(bg="yellow")
        b6.config(bg="yellow")
        b7.config(bg="yellow")
        b8.config(bg="yellow")
        b9.config(bg="yellow")
        winner = None
        messagebox.showinfo("Tic Tac Toe ", "It's A Tie !")
        disable_all_buttons()
                      
#button function
def  b_click(b):
    global clicked,  count

    if  b["text"] ==  " " and clicked == True:
        b["text"] = "X"
        clicked = False
        count += 1
        check_won()
       
    elif  b["text"] ==  " " and clicked == False:
        b["text"] = "O"
        clicked = True
        count += 1
        check_won()

    else:
        messagebox.showerror(" Tic Tac Toe " , "Sorry , This box is already  selected \n Choose another box ,,,,,")
        

#Reset
def  reset():
    global b1, b2, b3, b4, b5, b6, b7, b8, b9
    global clicked, count
    clicked = True
    
    #button
    b1=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width =9, bg = "SystemButtonFace", command = lambda : define_sign(1))
    b2=Button(win , text=" ", font = ("Helvetica", 20), height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(2))
    b3=Button(win , text=" ", font = ("Helvetica", 20), height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(3))

    b4=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(4))
    b5=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(5))
    b6=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(6))

    b7=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(7))
    b8=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(8))
    b9=Button(win , text=" ", font = ("Helvetica", 20) , height = 3, width = 9, bg = "SystemButtonFace", command = lambda : define_sign(9))

    #Grid for the button
    b1.grid(row=1,column=1)
    b2.grid(row=1,column=2)
    b3.grid(row=1,column=3)

    b4.grid(row=2,column=1)  
    b5.grid(row=2,column=2)
    b6.grid(row=2,column=3)

    b7.grid(row=3,column=1) 
    b8.grid(row=3,column=2)
    b9.grid(row=3,column=3)

#create menu
my_menu = Menu(win)
win.config(menu=my_menu)

#create options
options_menu = Menu(my_menu, tearoff=False)
my_menu.add_cascade(label="options", menu=options_menu)
options_menu.add_command(label="Reset Game", command=reset)

reset()
win.mainloop()
