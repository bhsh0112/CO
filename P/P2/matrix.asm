.data
	arr1:.space 400
	arr2:.space 400
	
	space:.asciiz " "
	end:.asciiz "\n"
.text

	




input:
	li $v0,5
	syscall
	move $t0,$v0   #t0: size
	li $t8,0   #i
	
	for_1:
		beq $t8,$t0,for_1_end
		li $t9,0   #j
		for_2:
			beq $t9,$t0,for_2_end
			li $v0,5
			syscall
			move $s0,$v0
			la $a0,arr1
			move $a1,$t8
			move $a2,$t9
			jal get_adress
			sw $s0,0($v0)
			addi $t9,$t9,1
			j for_2
		for_2_end:
		addi $t8,$t8,1
		j for_1
	for_1_end:
	
	li $t8,0
	for_11:
		beq $t8,$t0,for_11_end
		li $t9,0
		for_21:
			beq $t9,$t0,for_21_end
			li $v0,5
			syscall
			move $s0,$v0
			la $a0,arr2
			move $a1,$t8
			move $a2,$t9
			jal get_adress
			sw $s0,0($v0)
			addi $t9,$t9,1
			j for_21
		for_21_end:
		addi $t8,$t8,1
		j for_11
	for_11_end:
	
compute:
	li $t7,0   #i
	li $t8,0   #j
	li $t9,0   #k
	for_1_1:
		beq $t7,$t0,for_1_1_end
		li $t8,0
		for_2_1:
			beq $t8,$t0,for_2_1_end
			li $s3,0
			li $t9,0
			for_3_1:
				beq $t9,$t0,for_3_1_end
				la $a0,arr1
				move $a1,$t7
				move $a2,$t9
				jal get_adress
				lw $s0,0($v0)
				la $a0,arr2
				move $a1,$t9
				move $a2,$t8
				jal get_adress
				lw $s1,0($v0)
				mult $s0,$s1
				mflo $s2
				add $s3,$s3,$s2
				addi $t9,$t9,1
				j for_3_1
			for_3_1_end:
				move $a0,$s3
				li $v0,1
				syscall
				la $a0,space
				li $v0,4
				syscall
				#la $a0,arr3
				#move $a1,$t7
				#move $a2,$t8
				#jal get_adress
				#sw $s3,0($v0)
			addi $t8,$t8,1
			j for_2_1
		for_2_1_end:
		addi $t7,$t7,1
		li $v0,4
		la $a0,end
		syscall
		j for_1_1
	for_1_1_end:
	

	
li $v0,10
syscall

get_adress:   #a0-head adress,a1-row,a2-line
	li $t2,4
	mult $t2,$a1
	mflo $t3
	mult $t3,$t0
	mflo $t3
	mult $t2,$a2
	mflo $t4
	add $t3,$t3,$t4
	add $t3,$t3,$a0
	move $v0,$t3
	jr $ra
