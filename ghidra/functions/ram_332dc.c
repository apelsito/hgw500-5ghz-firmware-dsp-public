/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000332dc */

undefined4 FUN_ram_000332dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x2042) == '\x01') {
    return 1;
  }
  iVar1 = FUN_ram_00033610(iVar2,param_1 + 4,param_1 + 0x2044,param_1 + 0x6044,param_1 + 0x6844);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2042) = 1;
    return 1;
  }
  FUN_ram_00026c9c((*(uint *)(param_1 + 0x24) & 0x10) == 0,*(undefined2 *)(iVar2 + 0x60));
  return 0;
}


