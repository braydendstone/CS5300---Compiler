.globl main
.code
main:
move $fp, $sp
j start
_add_:
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
move $s6, $fp
addi $s6, $s6, 4
lw $s6, 0($s6)
add $s6, $s7, $s6
move $v0, $s6
move $sp, $fp
jr $ra
move $sp, $fp
jr $ra
start: 
li $s6, 1
move $s7, $fp
addi $s7, $s7, 0
sw $s6, 0($s7)
li $s7, 2
move $s7, $fp
addi $s7, $s7, 4
sw $s7, 0($s7)
move $s7, $fp
addi $s7, $s7, 0
lw $s7, 0($s7)
la $a0, STR0
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
move $s7, $fp
addi $s7, $s7, 4
lw $s7, 0($s7)
la $a0, STR1
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
move $s7, $fp
addi $s7, $s7, 0
lw $s7, 0($s7)
move $s7, $fp
addi $s7, $s7, 4
lw $s7, 0($s7)
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
move $s7, $s7
sw $s7, 0($sp)
move $s7, $s7
sw $s7, 4($sp)
move $fp, $sp
jal _add_
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
move $s7, $v0
la $a0, STR2
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
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
li $s7, 4
sw $s7, 0($sp)
li $s7, 5
sw $s7, 4($sp)
move $fp, $sp
jal _add_
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
move $s7, $v0
la $a0, STR3
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
move $s7, $fp
addi $s7, $s7, 0
lw $s7, 0($s7)
la $a0, STR4
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
move $s7, $fp
addi $s7, $s7, 4
lw $s7, 0($s7)
la $a0, STR5
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
li $a0, 10
li $v0, 11
syscall
.data
.asciiz
STR0: "a: "
STR1: "b: "
STR2: "a + b: "
STR3: "4 + 5: "
STR4: "a: "
STR5: "b: "
