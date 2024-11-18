ori $t0,$0,0
ori $t1,$0,1
ori $t2,$0,2
ori $t3,$0,3
ori $t4,$0,4
ori $t5,$0,5
ori $t6,$0,6
ori $t7,$0,7
ori $t8,$0,8
ori $t9,$0,9
add $s0,$t0,$t9
add $s1,$t2,$t8
sub $s7,$s1,$s0
jal flag2
back:
	ori $s3,$t3,0xf
	ori $s3,$t3,8
flag1:
	sw $t5,0($t4)
	sw $t6,-8($t8)
	lui $s2,0xffff
	sw $s2,-1($t9)
	lw $s5,0($t4)
	lw $s6,-8($t8)
	beq $s5,$s6,end
	sub $t6,$t6,$t1
	jal back
flag2:
	add $s7,$t1,$t2
	jr $ra
end:
	add $s7,$t1,$t2
