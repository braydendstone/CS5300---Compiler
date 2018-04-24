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
li $s4, 12
sgt $s0, $s7, $s4
bne $s0, $0, FOR1END
move $s4, $fp
addi $s4, $s4, 0
lw $s0, 0($s4)
move $s7, $fp
addi $s7, $s7, 0
lw $s4, 0($s7)
li $s1, 5
add $s7, $s1, $s4
move $s4, $fp
addi $s4, $s4, 4
li $s1, 1
sub $s2, $s0, $s1
li $s1, 4
mul $s3, $s2, $s1
add $t9, $s4, $s3
sw $s7, 0($t9)
move $s7, $fp
addi $s7, $s7, 0
lw $t9, 0($s7)
li $s4, 1
add $s7, $t9, $s4
move $s4, $fp
addi $s4, $s4, 0
sw $s7, 0($s4)
j FOR1
FOR1END:
move $s7, $fp
addi $s7, $s7, 4
move $s4, $s7
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
lw $t9, 0($s7)
sw $t9, 0($sp)
lw $t9, 4($s7)
sw $t9, 4($sp)
lw $t9, 8($s7)
sw $t9, 8($sp)
lw $t9, 12($s7)
sw $t9, 12($sp)
lw $t9, 16($s7)
sw $t9, 16($sp)
lw $t9, 20($s7)
sw $t9, 20($sp)
lw $t9, 24($s7)
sw $t9, 24($sp)
lw $t9, 28($s7)
sw $t9, 28($sp)
lw $t9, 32($s7)
sw $t9, 32($sp)
lw $t9, 36($s7)
sw $t9, 36($sp)
lw $t9, 40($s7)
sw $t9, 40($sp)
lw $t9, 44($s7)
sw $t9, 44($sp)
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
move $t9, $v0
la $a0, STR0
li $v0, 4
syscall
move $a0, $t9
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
.data
.asciiz
STR0: "The sum of the array is: "
