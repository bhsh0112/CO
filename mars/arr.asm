.data
	space: .asciiz " "
	end: .asciiz "\n"

.text
	li $v0,5
	syscall
	move $s0,$v0
	li $v0,5
	syscall
	move $s1,$v0
	li $t0,0
	loop_1:
		beq $t0,$s0,loop_1_end
		li $t1,0
		loop_2:
			beq $t1,$s1,loop_2_end
			li $v0,5
			syscall
			move $t3,$v0
			li $t4,0
			bne $t3,$t4,if
			if:
				move $a0,$t0
				li $v0,4
				syscall
				la $a0,space
				li $v0,1
				syscall
				move $a0,$t1
				li $v0,4
				syscall
				la $a0,space
				li $v0,1
				syscall
				move $a0,$t3
				li $v0,4
				syscall
				la $a0,end
				li $v0,1
				syscall
				
		loop_2_end:
			addi $t0,$t0,1
	loop_1_end:
	li $v0,10
	syscall
