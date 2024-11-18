# 测试程序 3 - 测试计时器功能
# 「注意」MARS 计时器清零后下一周期才会产生中断信号。一切以计时器源代码为准。
# 发现的 bug：
# 1. Exception_DM 不会在没有异常时重置为 0。
# 2. 如果同时产生两个中断信号，第二次进入异常处理时 eret + 4 的地址（被清空）会写入 EPC，导致退出异常处理时 PC 跳飞。

.text
  ori $t0, $0, 0x0c01 # 只允许两个计时器中断
  mtc0 $t0, $12
  
  # Timer0 PRESET
  ori $t0, $0, 0x0005
  ori $t1, $0, 0x7f04
  sw $t0, 0($t1)
  # Timer1 PRESET
  ori $t0, $0, 0x0003
  ori $t1, $0, 0x7f14
  sw $t0, 0($t1)
  # Timer0 & Timer1 CTRL
  ori $t0, $0, 0x0009
  ori $t1, $0, 0x7f00
  sw $t0, 0($t1)
  ori $t1, $0, 0x7f10
  sw $t0, 0($t1)
  
  ori $t0, $0, 0x0001
  ori $t0, $0, 0x0002
  ori $t0, $0, 0x0003
  ori $t0, $0, 0x0004
  ori $t0, $0, 0x0005
  ori $t0, $0, 0x0006
  ori $t0, $0, 0x0007
  ori $t0, $0, 0x0008
  
  loop:
  beq $0, $0, loop
  nop


.ktext 0x4180
  ori $k0, $0, 0x3000
  addi $k0, $k0, -12
  sw $t2, 8($k0)
  sw $t1, 4($k0)
  sw $t0, 0($k0)
  
  mfc0 $t0, $12
  mfc0 $t0, $13
  andi $t1, $t0, 0x0c00 # 判断异常码
  mfc0 $t0, $14
  
  switch_ip:
    andi $t2, $t1, 0x0400
    bne $t2, $0, case_timer0
    nop
    andi $t2, $t1, 0x0800
    bne $t2, $0, case_timer1
    nop
    ori $t2, $0, 0xc0c0
    beq $0, $0, endswitch_ip
    nop
    
    case_timer0:
      ori $t1, $0, 0x7f00
      sw $0, 0($t1)
      beq $0, $0, endswitch_ip
      nop
    case_timer1:
      ori $t1, $0, 0x7f10
      sw $0, 0($t1)
      beq $0, $0, endswitch_ip
      nop
  endswitch_ip:
  
  lw $t0, 0($k0)
  lw $t1, 4($k0)
  lw $t2, 8($k0)
  eret
  ori $t0, $0, 0xc0c0

