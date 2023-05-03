from pynput import mouse, keyboard
from tkinter import *
import tkinter.filedialog
import time

root = Tk()
root.title("信息刷屏")
root.geometry("550x200+500+300")
lb = Label(root, text='温馨提示：小心被删哦！！！', bg='red', font=('华文楷体', 15))
lb.grid(row=0, column=0)
lb = Label(root, text="请输入要发送的内容：", font=('华文楷体', 15))
lb.grid(row=2, column=0)
entry1 = Entry(root, font=('Arial', 15))
entry1.grid(row=2, column=1)
lb = Label(root, text="请输入要发送的次数：", font=('华文楷体', 15))
lb.grid(row=3, column=0)
entry2 = Entry(root, font=('Arial', 15))
entry2.grid(row=3, column=1)
m = mouse.Controller()
k = keyboard.Controller()


def anjian():
    m.position = (69, 803)
    time.sleep(0.5)
    m.click(mouse.Button.left)
    for i in range(int(entry2.get())):
        time.sleep(0.2)
        k.type(entry1.get())
        time.sleep(0.5)
        k.press(keyboard.Key.enter)
        k.release(keyboard.Key.enter)


btn = Button(root, text="刷屏", font=('华文楷体', 12), relief="raised", width=8, height=1, bd="6", command=anjian)
btn.grid(row=4, column=1)
root.mainloop()


