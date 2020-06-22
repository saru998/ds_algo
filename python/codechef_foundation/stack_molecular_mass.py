f = list(input())
# CH(CO2H)3
# ((CH)2(OH2H)(C(H))O)3
# ( (CH)2 (OH2H) (C(H)) O) 3

temp = []
total_mass=0
mole_mass=0
atom_mass=0
n=1
i=0
while i<len(f):
    if f[i] == "C" or f[i] == "H" or f[i] == "O":
        atom_mass=0

        if f[i] == "C":
            atom_mass+=12
        elif f[i] == "H":
            atom_mass+=1
        elif f[i] == "O":
            atom_mass+=16

        total_mass+=atom_mass*n
        n=1
        i+=1
    elif f[i] == "(" or f[i] == ")":
        if f[i] == "(":
            temp.append(f[i])
            i+=1
            total_mass+=mole_mass
       
        while f[i]!=")":
            temp.append(f[i])
            i+=1
        
        mole_mass=0
        while len(temp)>0:
            item = temp.pop()

            if item == "C":
                mole_mass+=12*n
                n=1
            elif item == "H":
                mole_mass+=1*n
                n=1
            elif item == "O":
                mole_mass+=16*n
                n=1
            elif item == "(":
                i+=1
                break
            else:
                n=int(item)
        #total_mass+=mole_mass*n 
    else:
        n=int(f[i])
        if len(temp)==0 and mole_mass==0:
            total_mass=total_mass*n
        else:
            total_mass+=mole_mass*n
        n=1
        i+=1
print(total_mass)
            


    

       
    
    


