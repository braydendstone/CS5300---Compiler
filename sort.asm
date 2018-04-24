.globl main
.code
main:
move $fp, $sp
j start
_rand_:
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s6, 8121
mul $s6, $s6, $s7
li $s6, 28411
add $s7, $s6, $s6
move $s6, $fp
addi $s6, $s6, 0
sw $s7, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s6, 134456
div $s6, $s7, $s6
move $s6, $fp
addi $s6, $s6, 408
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 134456
rem $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 0
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 408
lw $s6, 0($s6)
move $v0, $s6
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
_print_:
li $s6, 0
move $s6, $fp
addi $s6, $s6, 412
sw $s6, 0($s6)
FOR0:
move $s6, $fp
addi $s6, $s6, 412
lw $s6, 0($s6)
li $s6, 99
sgt $s6, $s6, $s6
bne $s6, $0, FOR0END
move $s6, $fp
addi $s6, $s6, 412
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
lw $s6, 0($s6)
move $a0, $s6
li $v0, 1
syscall
li $a0, 32
li $v0, 11
syscall
move $s6, $fp
addi $s6, $s6, 412
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 412
sw $s6, 0($s6)
j FOR0
FOR0END:
move $s6, $fp
addi $s6, $s6, 0
addi $s6, $s6, 400
lw $s6, 0($s6)
move $a0, $s6
li $v0, 1
syscall
move $sp, $fp
jr $ra
_rfill_:
li $s6, 0
move $s6, $fp
addi $s6, $s6, 416
sw $s6, 0($s6)
FOR1:
move $s6, $fp
addi $s6, $s6, 416
lw $s6, 0($s6)
li $s6, 100
sgt $s6, $s6, $s6
bne $s6, $0, FOR1END
move $s6, $fp
addi $s6, $s6, 416
lw $s6, 0($s6)
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
move $s6, $v0
li $s6, 1000
rem $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 4
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 416
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 416
sw $s6, 0($s6)
j FOR1
FOR1END:
move $sp, $fp
jr $ra
_swap_:
move $s6, $fp
addi $s6, $s6, 8
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 420
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 12
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 8
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 420
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 12
sw $s6, 0($s6)
move $sp, $fp
jr $ra
_isort_:
li $s6, 0
move $s6, $fp
addi $s6, $s6, 424
sw $s6, 0($s6)
FOR2:
move $s6, $fp
addi $s6, $s6, 424
lw $s6, 0($s6)
li $s6, 100
sgt $s6, $s6, $s6
bne $s6, $0, FOR2END
move $s6, $fp
addi $s6, $s6, 424
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 428
sw $s6, 0($s6)
FOR2:
move $s6, $fp
addi $s6, $s6, 428
lw $s6, 0($s6)
li $s6, 100
sgt $s6, $s6, $s6
bne $s6, $0, FOR2END
move $s6, $fp
addi $s6, $s6, 424
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 428
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
lw $s6, 0($s6)
sgt $s6, $s6, $s6
beq $s6, $0, IF0EL0
move $s6, $fp
addi $s6, $s6, 424
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 428
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
lw $s6, 0($s6)
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
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
sw $s6, 0($sp)
move $s6, $fp
addi $s6, $s6, 16
li $s6, 0
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
sw $s6, 4($sp)
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
move $s6, $fp
addi $s6, $s6, 428
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 428
sw $s6, 0($s6)
j FOR2
FOR2END:
move $s6, $fp
addi $s6, $s6, 424
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 424
sw $s6, 0($s6)
j FOR3
FOR3END:
move $sp, $fp
jr $ra
_sort_:
move $s6, $fp
addi $s6, $s6, 28
move $s6, $s6
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
move $s6, $fp
addi $s6, $s6, 28
sw $s6, 0($sp)
li $s6, 0
sw $s6, 4($sp)
li $s6, 100
sw $s6, 8($sp)
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
move $s6, $fp
addi $s6, $s6, 4
move $s6, $s6
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
move $s6, $fp
addi $s6, $s6, 4
sw $s6, 0($sp)
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
move $s6, $fp
addi $s6, $s6, 4
move $s6, $s6
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
move $s6, $fp
addi $s6, $s6, 4
sw $s6, 0($sp)
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
move $s6, $fp
addi $s6, $s6, 4
move $s6, $s6
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
move $s6, $fp
addi $s6, $s6, 4
sw $s6, 0($sp)
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
move $s6, $fp
addi $s6, $s6, 4
move $s6, $s6
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
move $s6, $fp
addi $s6, $s6, 4
sw $s6, 0($sp)
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
