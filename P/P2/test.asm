.data
	matrix: .space 256
.macro scanf(%type,%in)#shu ru xxx dao ji cun qi
	li $v0,%type
	syscall
	move %in,$v0
.end_macro

.macro scanf_string(%in,%cnt)#shu ru zi fu chuan dao ji cun qi
	la $a0,(%in)
	addi $a1,$0,%cnt#zi fu chuan chang du
	addi $a1,$a1,1
	li $v0,8
	syscall
.end_macro

.macro printf(%type,%out)#cong ji cun qi shu chu
	la $a0,(%out)
    li $v0,%type
	syscall
.end_macro

.macro printi(%type,%out)#shu chu shu huo zi fu
	li $a0,%out
	li $v0,%type
	syscall
.end_macro

.macro GetIndex(%index,%i,%j,%col)#huo qu er wei shu di zhi
	mult %i,%col
	mflo %index
	add %index,%index,%j
	sll %index,%index,2
.end_macro

.macro end
	li $v0,10
	syscall
.end_macro


	arr:.space 100
.text
	scanf(5,$t0)
	move $a0,$t0
	li $s0,1
	jal full
	printf(1,$s0)
	end
full:
	
	bgt $a0,1,if_else
	jr $ra
	if_else:
		
		sw $a0,0($sp)
		addi $sp,$sp,-4
		sw $ra,0($sp)
		addi $sp,$sp,-4
		mult $s0,$a0
		mflo $s0 
		addi $a0,$a0,-1
		jal full
		addi $sp,$sp,4
		lw $ra,0($sp)
		addi $sp,$sp,4
		lw $a0,0($sp)
		
		jr $ra


	
