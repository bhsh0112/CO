.data
	.macro compute(%i,%ans)
		li $t0,4
		mult %i,$t0
		mflo $t2
		add $t2,$t2,$s0
		lw $t3,0($t2)
		add %ans,%ans,$t3
.text
	la $s0,example100
	li $t1,0
	li $s1,0
	for:
		beq $t1,100,for_end
		compute($t1,$s1)
		addi $t1,$t1,1
	for_end:
	addi $s0,$s0,400
	sw $s1,0(400)
get_adress