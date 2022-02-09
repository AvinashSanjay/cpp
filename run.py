import os
import time

os.system("cls")
cmd = "g++ mr.smart.cpp"
os.system(cmd)
time.sleep(1)
if (os.system(cmd) != 0):
    os.system("cls")
    print("some Error in your Code...")
else :
    os.system("./a.out")
