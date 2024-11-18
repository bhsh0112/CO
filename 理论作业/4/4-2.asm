.data
	array:.space 400
.text
	li $s0,4
	li $a0,5
	la $a1,array
FIB:
	li $t1,0
	for:
		beq $t1,$a0,for_end
		mult $t1,$s0
		mflo $t9
		add $t9,$t9,$a1   #adress
		
		bne $t1,0,else1
			li $t7,1
			sw $t7,0($t9)
		else1:
		bne $t1,1,else2
			li $t8,1
			sw $t8,0($t9)
		else2:
		
		add $t6,$t7,$t8
		move $t7,$t8
		move $t8,$t6
		sw $t6,0($t9)
		addi $t1,$t1,1
		j for
	for_end:
	jr $ra