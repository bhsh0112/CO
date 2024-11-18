ori $1,$1,1
ori $2,$2,2
mult $1,$2
mflo $3
bgezal $3,label
ori $1,$1,1
ori $2,$2,2
label:
msub $ra,$ra
mflo $3
bgezal $3,label2
ori $1,$1,1
ori $2,$2,2
label2: