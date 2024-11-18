
.data
	arr: .space 256
	space: .asciiz " "
	end: .asciiz "\n"

.macro loc(%ans,%i,%j)
	sll %ans,%i,3
	add %ans,%ans,%j
	sll %ans,%ans,2
.end_macro

.text
	li $v0,5
	syscall
	move $s0,$v0   #s0------rows
	li $v0,5
	syscall
	move $s1,$v0   #s1------cols
	
	li $t0,0
	loop_1:
		beq $t0,$s0,end_loop_1
		li $t1,0
		loop_2:
			beq $t1,$s1,end_loop_2
			li $v0,5
			syscall
			loc($t2,$t0,$t1)
			sw $v0,arr($t2)
			addi $t1,$t1,1
			j loop_2
		end_loop_2:
			addi $t0,$t0,1
		j loop_1
	
	end_loop_1:
	
	li $t0,0
	loop_11:
		beq $t0,$s0,end_loop_11
		li $t1,0
		loop_22:
			beq $t1,$s1,end_loop_22
			loc($t2,$t0,$t1)
			lw $a0,arr($t2)
			li $v0,1
			syscall
			addi $t1,$t1,1
			la $a0,space
			li $v0,4
			syscall
			j loop_22
		end_loop_22:
			la $a0,end
			li $v0,4
			syscall
			addi $t0,$t0,1
		j loop_11
	
	end_loop_11:
	
	
