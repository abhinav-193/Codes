from tkinter import *
from random  import randint
from tkinter import ttk

root = Tk()
root.title("Rock Paper Scissors")
root.geometry("500x600")
root.config(bg="white")

rock = PhotoImage(file="rock.png")
paper = PhotoImage(file="paper.png")
scissors = PhotoImage(file="scissors.png")

img_list = [rock, paper, scissors]

pick_num = randint(0,2)

image_label=Label(root,image=img_list[pick_num], bd=0)
image_label.pack(pady=20)

def spin():
    pick_num = randint(0,2)
    image_label.config(image=img_list[pick_num])

    if user.get() == "Rock":
        user_val = 0
    elif user.get() =="Paper":
        user_val = 1
    elif user.get() == "Scissors":
        user_val = 2


    if user_val == 0:
        if pick_num == 0:
            txt_label.config(text ="It's a Tie, Spin Again")
        elif pick_num == 1:
            txt_label.config(text ="Paper Covers Rock, You Lost!")
        elif pick_num == 2:
            txt_label.config(text ="Rock Smashes Scissors, You Won!")

    if user_val == 1: #paper
        if pick_num == 0: #rock
            txt_label.config(text ="Paper Covers Rock, You Won!" )
        elif pick_num == 1: #paper
            txt_label.config(text ="It's a Tie, Spin Again")
        elif pick_num == 2: #scissors
            txt_label.config(text ="Scissors Cuts Paper, You Lost!")
            
    if user_val == 2: #scissors
        if pick_num == 0: #rock
            txt_label.config(text ="Rock Smashes Scissors, You Lost")
        elif pick_num == 1: #paper
            txt_label.config(text ="Scissors Cuts Paper, You Won!")
        elif pick_num == 2:  #scissors
            txt_label.config(text ="It's a Tie, Spin Again")
    
user = ttk.Combobox(root, value=("Rock","Paper","Scissors"))
user.current(0)
user.pack(pady=20)

spin_btn = Button(root,text="Spin!", command = spin)
spin_btn.pack(pady=10)

txt_label= Label(root, text="", font=("poppins","25"))
txt_label.pack(pady=10)


root.mainloop()
