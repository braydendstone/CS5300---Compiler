.globl main
.code
main:
move $fp, $sp
j start
_rand_:
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li , 8121
mul $s6, , $s7
li , 28411
add $s7, $s6, 
move , $fp
addi , , 0
lw , 0($gp)
sw $s7, 0()
lw $s7, 0($gp)
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li , 134456
div $s6, $s7, 
move , $fp
addi , , 408
lw , 408($gp)
sw $s6, 0()
lw $s6, 0($gp)
move $s7, $fp
addi $s7, $s7, 0
lw $s6, 0($s7)
li , 134456
rem $s7, $s6, 
move , $fp
addi , , 0
lw , 0($gp)
sw $s7, 0()
lw $s7, 0($gp)
move $s6, $fp
addi $s6, $s6, 408
lw $s7, 0($s6)
move $v0, $s7
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
_print_:
li $s6, 0
move , $fp
addi , , 412
lw , 412($gp)
sw $s6, 0()
FOR0:
lw $s6, 0($gp)
move $s5, $fp
addi $s5, $s5, 412
lw $s6, 0($s5)
li , 99
sgt $s5, $s6, 
bne $s5, $0, FOR0END
move , $fp
addi , , 412
lw , 412($gp)
lw $s5, 0()
lw $s6, 0($gp)
move $s4, $fp
addi $s4, $s4, 0
li , 0
sub $s3, $s5, 
li , 4
mul $s2, $s3, 
add $s1, $s4, $s2
lw $s6, 0($s1)
move $a0, $s6
li $v0, 1
syscall
li $a0, 32
li $v0, 11
syscall
move $s1, $fp
addi $s1, $s1, 412
lw $s6, 0($s1)
li , 1
add $s1, $s6, 
move , $fp
addi , , 412
lw , 412($gp)
sw $s1, 0()
j FOR0
FOR0END:
lw $s1, 0($gp)
move $s6, $fp
addi $s6, $s6, 0
lw $s4, 0($gp)
addi $s4, $s6, 400
lw $s1, 0($s4)
move $a0, $s1
li $v0, 1
syscall
move $sp, $fp
jr $ra
_rfill_:
li $s1, 0
move $s4, $fp
addi $s4, $s4, 416
sw $s1, 0($s4)
FOR1:
move $s1, $fp
addi $s1, $s1, 416
lw $s4, 0($s1)
li , 100
sgt $s1, $s4, 
bne $s1, $0, FOR1END
move , $fp
addi , , 416
lw , 416($gp)
lw $s1, 0()
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
move $fp, $sp
jal _rand_
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
lw $s4, 0($gp)
move $s4, $v0
lw $s2, 0($gp)
li $s6, 1000
rem $s2, $s4, $s6
move $s6, $fp
addi $s6, $s6, 4
li , 0
sub $s4, $s1, 
li , 4
mul $s3, $s4, 
lw $s0, 0($gp)
add $s0, $s6, $s3
sw $s2, 0($s0)
move $s2, $fp
addi $s2, $s2, 416
lw $s0, 0($s2)
li , 1
add $s2, $s0, 
move , $fp
addi , , 416
lw , 416($gp)
sw $s2, 0()
j FOR1
FOR1END:
move $sp, $fp
jr $ra
_swap_:
lw $s2, 0($gp)
move $s0, $fp
addi $s0, $s0, 8
lw $s2, 0($s0)
move $s0, $fp
addi $s0, $s0, 420
sw $s2, 0($s0)
move $s2, $fp
addi $s2, $s2, 12
lw $s0, 0($s2)
move $s2, $fp
addi $s2, $s2, 8
sw $s0, 0($s2)
move $s0, $fp
addi $s0, $s0, 420
lw $s2, 0($s0)
move $s0, $fp
addi $s0, $s0, 12
sw $s2, 0($s0)
move $sp, $fp
jr $ra
_isort_:
li $s0, 0
move $s2, $fp
addi $s2, $s2, 424
sw $s0, 0($s2)
FOR2:
move $s0, $fp
addi $s0, $s0, 424
lw $s2, 0($s0)
li , 100
sgt $s0, $s2, 
bne $s0, $0, FOR2END
move , $fp
addi , , 424
lw , 424($gp)
lw $s0, 0()
lw , 0($gp)
li $s2, 1
add , $s0, $s2
lw $s2, 0($gp)
move $s0, $fp
addi $s0, $s0, 428
sw $s2, 0($s0)
FOR2:
move $s2, $fp
addi $s2, $s2, 428
lw $s0, 0($s2)
li , 100
sgt $s2, $s0, 
bne $s2, $0, FOR2END
move , $fp
addi , , 424
lw , 424($gp)
lw $s2, 0()
lw $s0, 0($gp)
move , $fp
addi , , 16
li , 0
sub , $s2, 
li , 4
mul , , 
lw , 0($gp)
la , 16($gp)
add , , 
lw , 0($gp)
lw $s0, 0()
lw , 0($gp)
move , $fp
addi , , 428
lw , 428($gp)
lw , 0()
lw , 0($gp)
move , $fp
addi , , 16
li , 0
lw $s3, 0($gp)
sub $s6, $s3, 
li , 4
mul $s4, $s6, 
lw $t9, 0($gp)
la $t8, 16($gp)
add $t9, $t8, $s4
lw , 0($t9)
lw $t8, 0($gp)
sgt $t9, $s0, $t8
beq $t9, $0, IF0EL0
move $t8, $fp
addi $t8, $t8, 424
lw $t9, 0($t8)
move , $fp
addi , , 16
li , 0
sub $s0, $t9, 
li , 4
mul $s4, $s0, 
la , 16($gp)
add $s6, , $s4
lw $t8, 0($s6)
move , $fp
addi , , 428
lw , 428($gp)
lw $s6, 0()
lw $s4, 0($gp)
move $s0, $fp
addi $s0, $s0, 16
li , 0
sub , $s6, 
li , 4
mul $t7, , 
add $t6, $s0, $t7
lw $s4, 0($t6)
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -8
move $t6, $fp
addi $t6, $t6, 16
li , 0
sub $s0, $t9, 
li , 4
mul $t7, $s0, 
lw , 0($gp)
add , $t6, $t7
lw $t6, 0($gp)
sw $t6, 0($sp)
move $t7, $fp
addi $t7, $t7, 16
li , 0
sub $s0, $s6, 
li , 4
mul , $s0, 
add $t5, $t7, 
sw $t5, 4($sp)
move $fp, $sp
jal _swap_
addi $sp, $sp, 8
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
j IF0_END
IF0EL0:
IF0_END:
move , $fp
addi , , 428
lw , 428($gp)
lw $t7, 0()
lw , 0($gp)
li $s0, 1
add , $t7, $s0
lw $s0, 0($gp)
move $t7, $fp
addi $t7, $t7, 428
sw $s0, 0($t7)
j FOR2
FOR2END:
move $s0, $fp
addi $s0, $s0, 424
lw $t7, 0($s0)
li , 1
add $s0, $t7, 
move , $fp
addi , , 424
lw , 424($gp)
sw $s0, 0()
j FOR3
FOR3END:
move $sp, $fp
jr $ra
_sort_:
la $s0, 0($gp)
move $t7, $fp
addi $t7, $t7, 28
move $s0, $t7
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -12
move $t7, $fp
addi $t7, $t7, 28
sw $t7, 0($sp)
li , 0
sw , 4($sp)
li , 100
sw , 8($sp)
move $fp, $sp
jal _isort_
addi $sp, $sp, 12
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
move $sp, $fp
jr $ra
start: 
la , 0($gp)
move , $fp
addi , , 4
la , 4($gp)
move , 
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -4
move , $fp
addi , , 4
la , 4($gp)
sw , 0($sp)
move $fp, $sp
jal _rfill_
addi $sp, $sp, 4
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
la $a0, STR0
li $v0, 4
syscall
move $t3, $fp
addi $t3, $t3, 4
move $t4, $t3
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -4
move $t3, $fp
addi $t3, $t3, 4
sw $t3, 0($sp)
move $fp, $sp
jal _print_
addi $sp, $sp, 4
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
li $a0, 10
li $v0, 11
syscall
la , 0($gp)
move $t2, $fp
addi $t2, $t2, 4
move , $t2
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -4
move $t2, $fp
addi $t2, $t2, 4
sw $t2, 0($sp)
move $fp, $sp
jal _sort_
addi $sp, $sp, 4
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
la $a0, STR1
li $v0, 4
syscall
la , 0($gp)
move $t1, $fp
addi $t1, $t1, 4
move , $t1
addi $sp, $sp, -8
sw $ra, 0($sp)
sw $fp, 4($sp)
addi $sp, $sp, -72
sw $t0, 0($sp)
sw $t1, 4($sp)
sw $t2, 8($sp)
sw $t3, 12($sp)
sw $t4, 16($sp)
sw $t5, 20($sp)
sw $t6, 24($sp)
sw $t7, 28($sp)
sw $t8, 32($sp)
sw $t9, 36($sp)
sw $s0, 40($sp)
sw $s1, 44($sp)
sw $s2, 48($sp)
sw $s3, 52($sp)
sw $s4, 56($sp)
sw $s5, 60($sp)
sw $s6, 64($sp)
sw $s7, 68($sp)
addi $sp, $sp, -4
move $t1, $fp
addi $t1, $t1, 4
sw $t1, 0($sp)
move $fp, $sp
jal _print_
addi $sp, $sp, 4
lw $t0, 0($sp)
lw $t1, 4($sp)
lw $t2, 8($sp)
lw $t3, 12($sp)
lw $t4, 16($sp)
lw $t5, 20($sp)
lw $t6, 24($sp)
lw $t7, 28($sp)
lw $t8, 32($sp)
lw $t9, 36($sp)
lw $s0, 40($sp)
lw $s1, 44($sp)
lw $s2, 48($sp)
lw $s3, 52($sp)
lw $s4, 56($sp)
lw $s5, 60($sp)
lw $s6, 64($sp)
lw $s7, 68($sp)
addi $sp, $sp, 72
lw $ra, 0($sp)
lw $fp, 4($sp)
addi $sp, $sp, 8
li $a0, 10
li $v0, 11
syscall
.data
.asciiz
STR0: "Random: "
STR1: "\nSorted: "
