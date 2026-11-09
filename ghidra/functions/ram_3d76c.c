/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d76c */

undefined4 FUN_ram_0003d76c(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_r11;
  
  pcVar1 = *(char **)(in_r11 + -0xc0);
  if (*pcVar1 == '*') {
    puVar3 = *(undefined4 **)(in_r11 + 0x44);
    *(char **)(in_r11 + -0xc0) = pcVar1 + 1;
    *(undefined4 **)(in_r11 + 0x44) = puVar3 + 1;
    uVar2 = *puVar3;
  }
  else {
    uVar2 = FUN_ram_0003e690(pcVar1,in_r11 + -0xc0,0);
  }
  return uVar2;
}


