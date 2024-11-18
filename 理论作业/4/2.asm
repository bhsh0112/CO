.text
	li $t1,0
	la $s0,SRC
	la $s1,DEST
	li $s3,4
	for:
		beq $t1,100,for_end
		mult $t1,$s3
		mflo $t2
		add $t3,$t2,$s0
		add $t4,$t2,$s1
		lw $t5,0($t3)
		sw $t5,0($t4)
		add $t1,$t1,1
	for_end:
	