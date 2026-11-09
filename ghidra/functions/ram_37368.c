/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00037368 */

undefined4 FUN_ram_00037368(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    return 1;
  }
  iVar1 = FUN_ram_000373dc(iVar2,param_1 + 4,param_1 + 0x42,param_1 + 0x6044,param_1 + 0x6844);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return 1;
  }
  FUN_ram_00026c9c((*(uint *)(param_1 + 0x24) & 0x10) == 0,*(undefined2 *)(iVar2 + 0x60));
  return 0;
}


