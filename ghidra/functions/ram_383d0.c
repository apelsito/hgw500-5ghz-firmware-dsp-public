/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000383d0 */

void FUN_ram_000383d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char local_14 [4];
  
  FUN_ram_0004070c(local_14,4);
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      iVar1 = (int)local_14[iVar4];
      if (0 < param_3) {
        do {
          if (*(int *)(iVar4 * 4 + param_2) < *(int *)(param_2 + iVar2 * 4)) {
            cVar3 = (char)iVar1 + '\x01';
            iVar1 = (int)cVar3;
            local_14[iVar4] = cVar3;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_3);
      }
      *(char *)(iVar1 + param_1) = (char)iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return;
}


