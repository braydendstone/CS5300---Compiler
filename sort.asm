.globl main
.code
main:
move $fp, $sp
j start
_rand_:
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s5, 8121
mul $s6, $s5, $s7
li $s5, 28411
add $s7, $s6, $s5
move $s5, $fp
addi $s5, $s5, 0
sw $s7, 0($s5)
move $s7, $fp
addi $s7, $s7, 0
lw $s5, 0($s7)
li $s6, 134456
div $s7, $s5, $s6
move $s6, $fp
addi $s6, $s6, 408
sw $s7, 0($s6)
move $s7, $fp
addi $s7, $s7, 0
lw $s6, 0($s7)
li $s5, 134456
rem $s7, $s6, $s5
move $s5, $fp
addi $s5, $s5, 0
sw $s7, 0($s5)
move $s7, $fp
addi $s7, $s7, 408
lw $s5, 0($s7)
move $v0, $s5
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
_print_:
li $s7, 0
move $s6, $fp
addi $s6, $s6, 412
sw $s7, 0($s6)
FOR0:
move $s7, $fp
addi $s7, $s7, 412
lw $s6, 0($s7)
li $s4, 99
sgt $s7, $s6, $s4
bne $s7, $0, FOR0END
move $s4, $fp
addi $s4, $s4, 412
lw $s7, 0($s4)
move $s6, $fp
addi $s6, $s6, 0
li $s3, 0
sub $s2, $s7, $s3
li $s3, 4
mul $s1, $s2, $s3
add $s0, $s6, $s1
lw $s4, 0($s0)
move $a0, $s4
li $v0, 1
syscall
li $a0, 32
li $v0, 11
syscall
move $s0, $fp
addi $s0, $s0, 412
lw $s4, 0($s0)
li $s6, 1
add $s0, $s4, $s6
move $s6, $fp
addi $s6, $s6, 412
sw $s0, 0($s6)
j FOR0
FOR0END:
move $s0, $fp
addi $s0, $s0, 0
addi $s4, $s0, 400
lw $s6, 0($s4)
move $a0, $s6
li $v0, 1
syscall
move $sp, $fp
jr $ra
_rfill_:
li $s6, 0
move $s4, $fp
addi $s4, $s4, 416
sw $s6, 0($s4)
FOR1:
move $s6, $fp
addi $s6, $s6, 416
lw $s4, 0($s6)
li $s0, 100
sgt $s6, $s4, $s0
bne $s6, $0, FOR1END
move $s0, $fp
addi $s0, $s0, 416
lw $s6, 0($s0)
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
move $s0, $v0
li $s1, 1000
rem $s4, $s0, $s1
move $s1, $fp
addi $s1, $s1, 4
li $s0, 0
sub $s2, $s6, $s0
li $s0, 4
mul $s3, $s2, $s0
add $t9, $s1, $s3
sw $s4, 0($t9)
move $s4, $fp
addi $s4, $s4, 416
lw $t9, 0($s4)
li $s1, 1
add $s4, $t9, $s1
move $s1, $fp
addi $s1, $s1, 416
sw $s4, 0($s1)
j FOR1
FOR1END:
move $sp, $fp
jr $ra
_swap_:
move $s4, $fp
addi $s4, $s4, 8
lw $s1, 0($s4)
move $s4, $fp
addi $s4, $s4, 420
sw $s1, 0($s4)
move $s1, $fp
addi $s1, $s1, 12
lw $s4, 0($s1)
move $s1, $fp
addi $s1, $s1, 8
sw $s4, 0($s1)
move $s4, $fp
addi $s4, $s4, 420
lw $s1, 0($s4)
move $s4, $fp
addi $s4, $s4, 12
sw $s1, 0($s4)
move $sp, $fp
jr $ra
_isort_:
li $s4, 0
move $s1, $fp
addi $s1, $s1, 424
sw $s4, 0($s1)
FOR2:
move $s4, $fp
addi $s4, $s4, 424
lw $s1, 0($s4)
li $t9, 100
sgt $s4, $s1, $t9
bne $s4, $0, FOR2END
move $t9, $fp
addi $t9, $t9, 424
lw $s4, 0($t9)
li $s1, 1
add $t9, $s4, $s1
move $s1, $fp
addi $s1, $s1, 428
sw $t9, 0($s1)
FOR2:
move $t9, $fp
addi $t9, $t9, 428
lw $s1, 0($t9)
li $s4, 100
sgt $t9, $s1, $s4
bne $t9, $0, FOR2END
move $s4, $fp
addi $s4, $s4, 424
lw $t9, 0($s4)
move $s1, $fp
addi $s1, $s1, 16
li $s3, 0
sub $s2, $t9, $s3
li $s3, 4
mul $s0, $s2, $s3
add $t8, $s1, $s0
lw $s4, 0($t8)
move $s1, $fp
addi $s1, $s1, 428
lw $t8, 0($s1)
move $s0, $fp
addi $s0, $s0, 16
li $s2, 0
sub $s3, $t8, $s2
li $s2, 4
mul $t7, $s3, $s2
add $t6, $s0, $t7
lw $s1, 0($t6)
sgt $t6, $s4, $s1
beq $t6, $0, IF0EL0
move $s1, $fp
addi $s1, $s1, 424
lw $t6, 0($s1)
move $s4, $fp
addi $s4, $s4, 16
li $s0, 0
sub $t7, $t6, $s0
li $s0, 4
mul $s3, $t7, $s0
add $s2, $s4, $s3
lw $s1, 0($s2)
move $s4, $fp
addi $s4, $s4, 428
lw $s2, 0($s4)
move $s3, $fp
addi $s3, $s3, 16
li $t7, 0
sub $s0, $s2, $t7
li $t7, 4
mul $t5, $s0, $t7
add $t4, $s3, $t5
lw $s4, 0($t4)
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
move $t4, $fp
addi $t4, $t4, 16
li $s3, 0
sub $t5, $t6, $s3
li $s3, 4
mul $s0, $t5, $s3
add $t7, $t4, $s0
sw $t7, 0($sp)
move $t4, $fp
addi $t4, $t4, 16
li $s0, 0
sub $t5, $s2, $s0
li $s0, 4
mul $s3, $t5, $s0
add $t3, $t4, $s3
sw $t3, 4($sp)
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
move $s3, $fp
addi $s3, $s3, 428
lw $t4, 0($s3)
li $t5, 1
add $s3, $t4, $t5
move $t5, $fp
addi $t5, $t5, 428
sw $s3, 0($t5)
j FOR2
FOR2END:
move $s3, $fp
addi $s3, $s3, 424
lw $t5, 0($s3)
li $t4, 1
add $s3, $t5, $t4
move $t4, $fp
addi $t4, $t4, 424
sw $s3, 0($t4)
j FOR3
FOR3END:
move $sp, $fp
jr $ra
_sort_:
move $s3, $fp
addi $s3, $s3, 28
move $t4, $s3
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
move $s3, $fp
addi $s3, $s3, 28
sw $s3, 0($sp)
li $t5, 0
sw $t5, 4($sp)
li $t5, 100
sw $t5, 8($sp)
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
move $s0, $fp
addi $s0, $s0, 4
move $t5, $s0
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
move $s0, $fp
addi $s0, $s0, 4
sw $s0, 0($sp)
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
move $t1, $fp
addi $t1, $t1, 4
move $t2, $t1
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
