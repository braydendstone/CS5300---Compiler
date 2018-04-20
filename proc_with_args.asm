.globl main
.code
main:
j start
_swap_:
move $s6, $gp
addi $s6, $s6, 0
lw $s7, 0($s6)
move $s6, $gp
addi $s6, $s6, 8
sw $s7, 0($s6)
move $s7, $gp
addi $s7, $s7, 4
lw $s6, 0($s7)
move $s7, $gp
addi $s7, $s7, 0
sw $s6, 0($s7)
move $s6, $gp
addi $s6, $s6, 8
lw $s7, 0($s6)
move $s6, $gp
addi $s6, $s6, 4
sw $s7, 0($s6)
move $sp, $fp
jr $ra
start: 
li $s6, 5
move $s7, $gp
addi $s7, $s7, 0
sw $s6, 0($s7)
li $s7, 10
move $s6, $gp
addi $s6, $s6, 4
sw $s7, 0($s6)
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
move $s5, $gp
addi $s5, $s5, 4
lw $s7, 0($s5)
la $a0, STR0
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR1
li $v0, 4
syscall
move $a0, $s7
li $v0, 1
syscall
la $a0, STR2
li $v0, 4
syscall
move $s4, $gp
addi $s4, $s4, 0
lw $s5, 0($s4)
move $s3, $gp
addi $s3, $s3, 4
lw $s4, 0($s3)
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
move $s3, $gp
addi $s3, $s3, 0
sw $s3, 0($sp)
move $s2, $gp
addi $s2, $s2, 4
sw $s2, 4($sp)
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
move $s0, $gp
addi $s0, $s0, 0
lw $s1, 0($s0)
move $t9, $gp
addi $t9, $t9, 4
lw $s0, 0($t9)
la $a0, STR3
li $v0, 4
syscall
move $a0, $s1
li $v0, 1
syscall
la $a0, STR4
li $v0, 4
syscall
move $a0, $s0
li $v0, 1
syscall
la $a0, STR5
li $v0, 4
syscall
.data
.asciiz
STR0: "a: "
STR1: " b: "
STR2: "\n"
STR3: "a: "
STR4: " b: "
STR5: "\n"
