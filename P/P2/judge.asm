.data
	string: .space 25
.text 
	li $v0,5
	syscall
	move $t0,$v0
	#li $v0,4
	#li $a0,5
	#syscall
	li $t1,0
	li $s0,1
	la $s1,string
	for:
		beq $t1,$t0,for_end
		li $v0,12
		syscall
		li $t3,4
		mult $t1,$t3
		mflo $t2
		add $t2,$t2,$s1
		sw $v0,0($t2)
		addi $t1,$t1,1
		j for
	for_end:
		
		li $t4,2
		div $t0,$t4
		mflo $t5
		li $t1,0
		for_2:
			beq $t1,$t5,for_2_end
			li $t3,4
			mult $t1,$t3
			mflo $t2
			add $t2,$t2,$s1
			sub $t6,$t0,$t1
			subi $t6,$t6,1
			
			mult $t6,$t3
			mflo $t7
			add $t7,$t7,$s1
			lw $s2,0($t2)
			
			lw $s3,0($t7)
			beq $s2,$s3,if_end
			if_else:
				li $s0,0
			if_end:
				addi $t1,$t1,1
			j for_2
		for_2_end:
			move $a0,$s0
			li $v0,1
			syscall
			li $v0,10
			syscall