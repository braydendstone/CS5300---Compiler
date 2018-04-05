.globl main
.code
main:
j start
start: 
li $s7, 0
move $s6, $gp
addi $s6, $s6, 0
sw $s7, 0($s6)
move $s7, $gp
addi $s7, $s7, 0
lw $s6, 0($s7)
lw $s5, 0($gp)
li $s6, 5
slt $s7, $s5, $s6
beq $s7, $0, IF0EL0
la $a0, STR0
li $v0, 4
syscall
j IF0_END
IF0EL0:
la $a0, STR1
li $v0, 4
syscall
j IF0_END
IF0_END:
.data
.asciiz
STR0: "x less than 5"
STR1: "x is greater than or equal to 5"
