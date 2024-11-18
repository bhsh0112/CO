.text
	li $a0,-10
	jal ABS
	li $v0,1
	syscall
	li $a0,10
	jal ABS
	li $v0,1
	syscall
	li $v0,10
	syscall
ABS:
	bgez $a0,if_else
	sub $a0,$0,$a0
	if_else:
	
	jr $ra
