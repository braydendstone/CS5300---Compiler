.globl main
.code
main:
move $fp, $sp
j start
_moveTower_:
move $s6, $fp
addi $s6, $s6, 0
lw $s7, 0($s6)
li $s6, 1
seq $s6, $s7, $s6
beq $s6, $0, IF0EL0
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 4
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 8
lw $s6, 0($s6)
la $a0, STR0
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR1
li $v0, 4
syscall
lw $a0, 0($s6)
li $v0, 11
syscall
la $a0, STR2
li $v0, 4
syscall
lw $a0, 0($s6)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
j IF0_END
IF0EL0:
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 1
sub $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 4
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 12
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 8
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
addi $sp, $sp, -16
move $s6, $s6
sw $s6, 0($sp)
move $s6, $s6
sw $s6, 4($sp)
move $s6, $s6
sw $s6, 8($sp)
move $s6, $s6
sw $s6, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
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
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 4
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 8
lw $s6, 0($s6)
la $a0, STR3
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR4
li $v0, 4
syscall
lw $a0, 0($s6)
li $v0, 11
syscall
la $a0, STR5
li $v0, 4
syscall
lw $a0, 0($s6)
li $v0, 11
syscall
li $a0, 10
li $v0, 11
syscall
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
li $s6, 1
sub $s6, $s6, $s6
move $s6, $fp
addi $s6, $s6, 12
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 8
lw $s6, 0($s6)
move $s6, $fp
addi $s6, $s6, 4
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
addi $sp, $sp, -16
move $s6, $s6
sw $s6, 0($sp)
move $s6, $s6
sw $s6, 4($sp)
move $s6, $s6
sw $s6, 8($sp)
move $s6, $s6
sw $s6, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
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
IF0_END:
move $sp, $fp
jr $ra
start: 
la $a0, STR6
li $v0, 4
syscall
move $s6, $fp
addi $s6, $s6, 0
li $v0, 5
syscall
sw $v0, 0($s6)
move $s6, $fp
addi $s6, $s6, 0
lw $s6, 0($s6)
la $a0, STR7
li $v0, 4
syscall
move $a0, $s6
li $v0, 1
syscall
la $a0, STR8
li $v0, 4
syscall
move $s6, $fp
addi $s6, $s6, 0
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
addi $sp, $sp, -16
move $s6, $s6
sw $s6, 0($sp)
li $s6, 65
sw $s6, 4($sp)
li $s6, 66
sw $s6, 8($sp)
li $s6, 67
sw $s6, 12($sp)
move $fp, $sp
jal _moveTower_
addi $sp, $sp, 16
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
la $a0, STR9
li $v0, 4
syscall
.data
.asciiz
STR0: "Move "
STR1: " from "
STR2: " to "
STR3: "Move "
STR4: " from "
STR5: " to "
STR6: "Enter number of disks:"
STR7: "Moving "
STR8: " disks from tower A to tower B with tower C helping\n"
STR9: "Done\n"
