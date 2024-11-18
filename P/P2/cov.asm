.data
	arr1:.space 500 
	arr2:.space 500 #cov
	space:.asciiz " "
	endl:.asciiz "\n"
.text
input:
	li $v0,5
	syscall
	move $s0,$v0  #s0:m1
	li $v0,5
	syscall
	move $s1,$v0  #s1:n1
	li $v0,5
	syscall
	move $s2,$v0  #s2:m2
	li $v0,5
	syscall
	move $s3,$v0  #s3:n2
	li $t0,0
	for_input_i:
		beq $t0,$s0,for_input_i_end
		li $t1,0
		for_input_j:
			beq $t1,$s1,for_input_j_end
			li $v0,5
			syscall
			move $t4,$v0
			la $a0,arr1
			move $a1,$t0
			move $a2,$t1
			move $a3,$s1
			jal get_adress
			sw $t4,0($v0)
			addi $t1,$t1,1
			j for_input_j
		for_input_j_end:
		addi $t0,$t0,1
		j for_input_i
	for_input_i_end:
	
	li $t0,0
	for_input2_i:
		beq $t0,$s2,for_input2_i_end
		li $t1,0
		for_input2_j:
			beq $t1,$s3,for_input2_j_end
			li $v0,5
			syscall
			move $t4,$v0
			la $a0,arr2
			move $a1,$t0
			move $a2,$t1
			move $a3,$s3
			jal get_adress
			sw $t4,0($v0)
			addi $t1,$t1,1
			j for_input2_j
		for_input2_j_end:
		addi $t0,$t0,1
		j for_input2_i
	for_input2_i_end:
compute:
	sub $s6,$s0,$s2
	addi $s6,$s6,1
	sub $s7,$s1,$s3
	addi $s7,$s7,1
	li $t0,0 #i
	for_i:
		beq $t0,$s6,for_i_end
		li $t1,0 #i
		for_j:
			beq $t1,$s7,for_j_end
			li $t2,0   #k
			li $s5,0   #sum
			for_k:
				beq $t2,$s2,for_k_end
				li $t3,0    #l
				for_l:
					beq $t3,$s3,for_l_end
					la $a0,arr1
					move $a1,$t0
					add $a1,$a1,$t2
					move $a2,$t1
					add $a2,$a2,$t3
					move $a3,$s1
					jal get_adress
					lw $t4,0($v0)
					la $a0,arr2
					move $a1,$t2
					move $a2,$t3
					move $a3,$s3
					jal get_adress
					lw $t5,0($v0)
					mult $t4,$t5
					mflo $t6
					add $s5,$s5,$t6
					addi $t3,$t3,1
					j for_l
				for_l_end:
				addi $t2,$t2,1
				j for_k
			for_k_end:
			li $v0,1
			move $a0,$s5
			syscall
			la $a0,space
			li $v0,4
			syscall
			addi $t1,$t1,1
			j for_j
		for_j_end:
		la $a0,endl
		li $v0,4
		syscall
		addi $t0,$t0,1
		j for_i
	for_i_end:
	
	li $v0 10
	syscall
	


get_adress:   #a0-head adress,a1-row,a2-line,a3-num of line
	li $t7,4
	mult $t7,$a1
	mflo $t8
	mult $t8,$a3
	mflo $t8
	mult $t7,$a2
	mflo $t9
	add $t8,$t8,$t9
	add $t8,$t8,$a0
	move $v0,$t8
	jr $ra