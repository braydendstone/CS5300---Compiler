.globl main
.code
main:
j start
start: 
li $s7, 5
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
li $s6, 1
move $s7, $gp
addi $s7, $s7, 4
sw $s6, 0($s7)
move $s6, $gp
addi $s6, $s6, 0
lw $s7, 0($s6)
lw $s5, 0($gp)
li $s7, 5
slt $s6, $s5, $s7
beq $s6, $0, IF0EL0
la $a0, STR0
li $v0, 4
syscall
move $s5, $gp
addi $s5, $s5, 4
lw $s6, 0($s5)
lw $s7, 0($gp)
li $s6, 1
seq $s5, $s7, $s6
beq $s5, $0, IF1EL0
la $a0, STR1
li $v0, 4
syscall
IF1EL0:
j IF1_END
IF1_END:
IF0EL0:
j IF0_END
IF0_END:
.data
.asciiz
STR0: "i less than 5!\n"
STR1: "j is 1\n"
