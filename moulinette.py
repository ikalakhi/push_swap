#!/usr/bin/python

import random
import subprocess
import time
import os
import threading
import sys

WARNING = '\033[93m'
OKGREEN = '\033[92m'
ENDC = '\033[0m'
OKBLUE = '\033[94m'
PID = 0

def is_prime(n):
  for i in range(2,n):
    if (n%i) == 0:
      return False
  return True


def get_buffer(rlist):
    buffer = ""
    for x in rlist:
        buffer += str(x) + " "
    return (buffer)

def print_tescase(buffer,prime):
    if prime:
        print(OKBLUE + "[*] TESCASE : " + ENDC + buffer + " \n")
    time.sleep(0.2)

def check_out(out):
    if "OK" in out:
        r  = OKGREEN + "OK" + ENDC
    else:
        r = WARNING +  "KO" + ENDC
    return (r)

def get_max(tab,testcases):
    maxv = tab[0]
    minPos = 0
    i = 0
    for x in tab:
        if x > maxv:
            maxv = x
            minPos = i
        i += 1
    return (maxv,minPos)


def overview(buffer):
    file = open("push_swap.log","a")
    file.write(buffer)
    file.close()

def push_swap(testcases,much,display):
     randomN = 0
     if much == -1:
         randomN = random.randint(3,500)
     else:
         randomN = much
     randomlist = random.sample(range(0, 1000), randomN)
     print ("\n[*] Test with " + str(randomN))
     buffer = get_buffer(randomlist)
     testcases.append(buffer)
     if display:
        print_tescase(buffer,1)
     out = subprocess.check_output("./push_swap " + buffer + " | ./checker_Mac " + buffer, shell=True)
     output = subprocess.check_output("./push_swap "+buffer+" | wc -l", shell=True)
     lines = out.split("\n")
     result = check_out(out)
     print ("[*] RESULT : "+ result)
     if "KO" in result:
         print ("Weak push_swap")
         quit()
     print ("[*] INSTRUCTION : " + output.replace(" ",""))
     return (output.replace(" ",""))




def main():
    i = 0
    max = int(sys.argv[1])
    much =  int(sys.argv[2])
    display =  int(sys.argv[3])
    results = []
    testcases = []
    total = 0
    try:
        while i < max:
            output = push_swap(testcases,much,display)
            results.append(output)
                #leaker()
                #results.append(int(output) - 1)
            if int(output) >= 900 and much == 100:
                 print ("Weak push_swap")
                 print(OKBLUE + "[*] KAIDO DOWN in " + str(i+1))
                 quit()
            total += int(output) 
            #time.sleep(0.2)
            #os.system("clear")
            i += 1
    except KeyboardInterrupt:
        pass
    if much > 0:
        average = total / max
        maxes = get_max(results,testcases)
        print("\n\n")
        print(OKBLUE + "[*] AVERAGE in " + str(i+1) + " : " + ENDC + str(average)  + "\n")
        print(OKBLUE + "[*] MIN : "  + ENDC + str(min(results)))
        print(OKBLUE + "[*] MAX : "  + ENDC + str(maxes[0])  + "\n")
        print(WARNING + "[*] WORST CASE : " + ENDC + str(testcases[maxes[1]]) + "\n")

main()

