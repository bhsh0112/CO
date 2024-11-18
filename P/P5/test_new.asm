
	ori $1,$1,7
	ori $2,$2,8
	ori $9,$9,4
	bgezal $2,lable1
	add $1,$1,$1
	add $1,$1,$1
	sub $4,$0,$1
	bgezal $4,lable2
lable1:	
	ori $8,$8,1
	add $ra,$ra,$9
	sub $ra,$ra,$9
	jr $ra
lable2:
	ori $5,$5,1
	ori $5,$5,1