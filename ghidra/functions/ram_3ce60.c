/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003ce60 */

int FUN_ram_0003ce60(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  short sVar2;
  
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 100) = 3;
      return 3;
    }
    if (*(int *)(param_1 + 100) != 0) {
      return *(int *)(param_1 + 100);
    }
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        sVar2 = *(short *)(param_1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + sVar2 + 0x1e) = *param_2;
        sVar2 = sVar2 + 1;
        iVar1 = iVar1 + 8;
        *(short *)(param_1 + 0x1c) = sVar2;
        *(int *)(param_1 + 0x14) = iVar1;
        if ((iVar1 == 0) &&
           (iVar1 = *(int *)(param_1 + 0x18) + 1, *(int *)(param_1 + 0x18) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(param_1 + 100) = 1;
        }
        if (sVar2 == 0x40) {
          FUN_ram_0003cf18(param_1);
        }
        param_2 = param_2 + 1;
      } while ((param_3 != 0) && (*(int *)(param_1 + 100) == 0));
    }
  }
  return 0;
}


