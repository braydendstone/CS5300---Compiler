.globl main
.code
main:
move $fp, $sp
j start
_sum_:
li $s7, 0
move $s6, $fp
addi $s6, $s6, 56
sw $s7, 0($s6)
li $s6, 1
move $s7, $fp
addi $s7, $s7, 52
sw $s6, 0($s7)
FOR0:
move $s6, $fp
addi $s6, $s6, 52
lw $s7, 0($s6)
li $s5, 12
sgt $s6, $s7, $s5
bne $s6, $0, FOR0END
move $s5, $fp
addi $s5, $s5, 56
lw $s6, 0($s5)
move $s7, $fp
addi $s7, $s7, 52
lw $s5, 0($s7)
move $s4, $fp
addi $s4, $s4, 0
li $s3, 1
sub $s2, $s5, $s3
li $s3, 4
mul $s1, $s2, $s3
add $s0, $s4, $s1
lw $s7, 0($s0)
add $s0, $s6, $s7
move $s7, $fp
addi $s7, $s7, 56
sw $s0, 0($s7)
move $s0, $fp
addi $s0, $s0, 52
lw $s7, 0($s0)
li $s6, 1
add $s0, $s7, $s6
move $s6, $fp
addi $s6, $s6, 52
sw $s0, 0($s6)
j FOR0
FOR0END:
move $s0, $fp
addi $s0, $s0, 56
lw $s6, 0($s0)
move $v0, $s6
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
start: 
li $s0, 1
move $s7, $fp
addi $s7, $s7, 0
sw $s0, 0($s7)
FOR1:
move $s0, $fp
addi $s0, $s0, 0
lw $s7, 0($s0)
li $s1, 12
sgt $s0, $s7, $s1
bne $s0, $0, FOR1END
move $s1, $fp
addi $s1, $s1, 0
lw $s0, 0($s1)
move $s7, $fp
addi $s7, $s7, 0
lw $s1, 0($s7)
li $s2, 5
add $s7, $s2, $s1
move $s1, $fp
addi $s1, $s1, 4
li $s2, 1
sub $s3, $s0, $s2
li $s2, 4
mul $t9, $s3, $s2
add $t8, $s1, $t9
sw $s7, 0($t8)
move $s7, $fp
addi $s7, $s7, 0
lw $t8, 0($s7)
li $t9, 1
add $s7, $t8, $t9
move $t9, $fp
addi $t9, $t9, 0
sw $s7, 0($t9)
j FOR1
FOR1END:
move $s7, $fp
addi $s7, $s7, 4
move $t9, $s7
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
addi $sp, $sp, -48
move $s7, $fp
addi $s7, $s7, 4
lw $t8, 0($s7)
sw $t8, 0($sp)
lw $t8, 4($s7)
sw $t8, 4($sp)
lw $t8, 8($s7)
sw $t8, 8($sp)
lw $t8, 12($s7)
sw $t8, 12($sp)
lw $t8, 16($s7)
sw $t8, 16($sp)
lw $t8, 20($s7)
sw $t8, 20($sp)
lw $t8, 24($s7)
sw $t8, 24($sp)
lw $t8, 28($s7)
sw $t8, 28($sp)
lw $t8, 32($s7)
sw $t8, 32($sp)
lw $t8, 36($s7)
sw $t8, 36($sp)
lw $t8, 40($s7)
sw $t8, 40($sp)
lw $t8, 44($s7)
sw $t8, 44($sp)
move $fp, $sp
jal _sum_
addi $sp, $sp, 48
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
move $t8, $v0
la $a0, STR0
li $v0, 4
syscall
move $a0, $t8
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
.data
.asciiz
STR0: "The sum of the array is: "
