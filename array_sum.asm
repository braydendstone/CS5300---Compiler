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
move $s6, $fp
addi $s6, $s6, 52
sw $s6, 0($s6)
FOR0:
move $s6, $fp
addi $s6, $s6, 52
lw $s6, 0($s6)
li $s6, 12
sgt $s6, $s6, $s6
bne $s6, $0, FOR0END
move $s6, $fp
addi $s6, $s6, 56
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 52
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
li $s6, 1
sub $s6, $s6, $s6
li $s6, 4
mul $s7, $s6, $s6
add $s5, $s6, $s7
lw $s6, 0($s5)
add $s5, $s6, $s6
move $s6, $fp
addi $s6, $s6, 56
sw $s5, 0($s6)
move $s6, $fp
addi $s6, $s6, 52
lw $s5, 0($s6)
li $s6, 1
add $s6, $s5, $s6
move $s6, $fp
addi $s6, $s6, 52
sw $s6, 0($s6)
j FOR0
FOR0END:
move $s6, $fp
addi $s6, $s6, 56
lw $s6, 0($s6)
move $v0, $s6
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
start: 
li $s6, 1
move $s6, $fp
addi $s6, $s6, 0
sw $s6, 0($s6)
FOR1:
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 12
sgt $s6, $s6, $s6
bne $s6, $0, FOR1END
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 5
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 4
li $s6, 1
sub $s6, $s6, $s6
li $s6, 4
mul $s6, $s6, $s6
add $s6, $s6, $s6
sw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 1
add $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 0
sw $s6, 0($s6)
j FOR1
FOR1END:
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
addi $sp, $sp, -48
move $s6, $fp
addi $s6, $s6, 4
lw $s6, 0($s6)
sw $s6, 0($sp)
lw $s6, 4($s6)
sw $s6, 4($sp)
lw $s6, 8($s6)
sw $s6, 8($sp)
lw $s6, 12($s6)
sw $s6, 12($sp)
lw $s6, 16($s6)
sw $s6, 16($sp)
lw $s6, 20($s6)
sw $s6, 20($sp)
lw $s6, 24($s6)
sw $s6, 24($sp)
lw $s6, 28($s6)
sw $s6, 28($sp)
lw $s6, 32($s6)
sw $s6, 32($sp)
lw $s6, 36($s6)
sw $s6, 36($sp)
lw $s6, 40($s6)
sw $s6, 40($sp)
lw $s6, 44($s6)
sw $s6, 44($sp)
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
move $s6, $v0
la $a0, STR0
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
.data
.asciiz
STR0: "The sum of the array is: "
