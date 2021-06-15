class student:
    def __init__(self, sname, srno, subj1, subj2, subj3):
        self.sname=sname
        self.srno=srno
        self.subj1=int(subj1)
        self.subj2=int(subj2)
        self.subj3=int(subj3)

    def printmarks(self):
        print("marks of student ", self.sname, "srno: ", self.srno, "\n")
        print("marks in subj1: " , self.subj1, "\n")
        print("marks in subj2: ",self.subj2, "\n")
        print("marks in subj3: ", self.subj3, "\n")
        avg=(self.subj1+self.subj2+self.subj3)/3
        print("avg marks : ", avg,"\n")
    
    def iffailed(self):
        if self.subj1<33:
            print("student failed subject 1 \n")
        if self.subj2<33:
            print("student failed subject 2 \n")
        if self.subj3<33:
            print("student failed subject 3 \n")

print("enter number of students : ")
n=int(input())
l=[]
for i in range(n):
    print("enter name of student ", i, ": ")
    name=input()
    print("enter roll no of student ")
    rollno=input()
    print("enter marks of subj1: ")
    subj1=int(input())
    print("enter marks of subj2: ")
    subj2=int(input())
    print("enter marks of subj3: ")
    subj3=int(input())

    s1=student(name, rollno, subj1, subj2, subj3)
    l.append(s1)

for i in l:
    i.printmarks()
    i.iffailed()







