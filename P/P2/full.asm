.data
	symbol:.space 40
	array:.space 40
	space:.asciiz " "
	end_of_line:.asciiz "\n"
.text
main:
	li $v0,5
	syscall
	move $t0,$v0
	move $a0,$0
	jal pull_array
	li $v0,10
	syscall
	
	
pull_array:
	move $s6,$ra
	move $s5,$a0   #index
	blt $s5,$t0,if_end
	li $t1,0
	for_1:
		beq $t0,$t1,for_1_end
		move $a0,$t1
		la $a1,array
		jal get_adress
		lw $a0,0($v0)
		li $v0,1
		syscall
		la $a0,space
		li $v0,4
		syscall
		addi $t1,$t1,1
		j for_1
	for_1_end:
		la $a0,end_of_line
		li $v0,4
		syscall
		jr $s6
	if_end:
		li $t8,0
		for_2:
			beq $t8,$t0,for_2_end
			move $a0,$t8
			la $a1,symbol
			jal get_adress
			lw $s0,0($v0)
			bne $s0,$0,if_2_end
			addi $s1,$t8,1
			move $a0,$s5
			la $a1,array
			jal get_adress
			sw $s1,0($v0)
			move $a0,$t8
			la $a1,symbol
			jal get_adress
			li $s2,1
			sw $s2,0($v0)
			
			addi $sp,$sp,-16
			sw $s6,0($sp)
			sw $s5,12($sp)
			sw $t8,8($sp)
			sw $t5,4($sp)
			addi $a0,$s5,1
			jal pull_array
			
			lw $s6,($sp)
			lw $t5,4($sp)
			lw $t8,8($sp)
			lw $s5,12($sp)
			addi $sp,$sp,16
			move $a0,$t8
			la $a1,symbol
			jal get_adress
			sw $0,0($v0)
			if_2_end:
			addi $t8,$t8,1
			j for_2
		for_2_end:
			
			jr $s6
		
	


get_adress:   #a0-head adress,a1-row,a2-line
	li $t2,4
	mult $t2,$a0
	mflo $t3
	add $t3,$t3,$a1
	move $v0,$t3
	jr $ra
