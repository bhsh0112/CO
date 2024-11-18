.data
	.macro store(%i)
		sw %i,0($sp)
		addi $sp,$sp,-4
	.end_macro
	.macro pop(%i)
		addi $sp,$sp,4
		lw %i,0($sp)
	.end_macro
	array:.space 400
.text
	la $s0,array # first
	addi $s1,$s0,4 #second
	li $s3,1
	
	li $a0,5
	la $a1,array
	jal FIB
FIB:
	store($a0)
	store($ra)
	store($t8)
	store($t9)
	store($t2)
	li $t0,4
	mult $t0,$a0
	mflo $t1
	add $t2,$t1,$a1 #adrees
	
	beq $a0,0,else
	bne $a0,1,else1
	sw $s3,0($t2)
	move $v0,$s3
	jr $ra
	else1:
	bne $a0,2,else2
	sw $s3,0($t2)
	move $v0,$s3
	jr $ra
	else2:
	
	
	addi $a0,$a0,-1
	
	jal FIB
	move $t8,$v0
	pop($t2)
	pop($t9)
	pop($t8)
	pop($ra)
	pop($a0)
	addi $a0,$a0,-1
	
	jal FIB
	move $t9,$v0
	add $v0,$t8,$t9
	pop($t2)
	
	sw $v0,0($t2)
	pop($t9)
	pop($t8)
	pop($ra)
	pop($a0)
	jr $ra
else:
	li $v0,0
	jr $ra
	
	
	