import tkinter as tk
class mapp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.a=tk.IntVar()
        self.b=tk.IntVar()
        
        self.ent1=tk.Entry(self,text="enter first digit",textvariable=self.a).pack() #widget for first entry
        self.ent2=tk.Entry(self,text="enter second digit",textvariable=self.b).pack()  #widget for second entry
        self.l1=tk.Label(self,text="00")  #it willshow result
        self.bt1=tk.Button(self,relief=tk.SUNKEN,text="+",command=self.sum).pack(side="left",padx="30") #button for sum
        self.bt2=tk.Button(self,relief=tk.SUNKEN,text="-",command=self.sub).pack(side="left",padx="30",pady="79") #button for subtraction
        self.bt3=tk.Button(self,relief=tk.SUNKEN,text="*",command=self.mul).pack(side="left",padx="30") #button for multiplication
        self.bt4=tk.Button(self,relief=tk.SUNKEN,text="/",command=self.div).pack(side="left",padx="30") #button for divison
        self.bt5=tk.Button(self,relief=tk.GROOVE,text="clear",command=self.clear).pack() #button for clearing entries and result
    def sum(self):
        c = self.a.get() + self.b.get()
        
        self.l1.config(text=c)
        self.l1.pack()
    def sub(self):
        c = self.a.get() - self.b.get()
        
        self.l1.config(text=c)
        self.l1.pack() 
    def mul(self):
        c = self.a.get() * self.b.get()
    
        self.l1.config(text=c)
        self.l1.pack()
    def div(self):
    	
        a = self.a.get() 
        b = self.b.get()
        if b!=0:    #check divison by zero
        	c=format(a/b,'.4f')
        else:
        	app.mainloop()  #else do nothing
        
       
        self.l1.config(text=c)
        self.l1.pack()
    def clear(self):
    	self.a.set("")   #for clearing first entry
    	self.b.set("")   # for clearing second entry
    	self.l1.config(text="")  #it clears the result
    	self.l1.forget_pack()   #it deletes the result label from screen for a while
if __name__ == "__main__": 
    app=mapp()
    app.mainloop()