/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031010 */

undefined4 FUN_ram_00031010(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 4;
    puVar1 = param_2 + 1;
    iVar2 = iVar2 + 1;
    **(undefined4 **)(param_1 + iVar3) = *param_2;
    param_2 = param_2 + 2;
    *(undefined4 *)(*(int *)(param_1 + iVar3) + param_3 * 4) = *puVar1;
  } while (iVar2 < 4);
  return 0;
}


