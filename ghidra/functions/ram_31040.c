/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00031040 */

undefined4 FUN_ram_00031040(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  do {
    puVar3 = *(undefined4 **)(param_1 + iVar2 * 4);
    iVar2 = iVar2 + 1;
    puVar1 = param_2 + 1;
    *param_2 = *puVar3;
    param_2 = param_2 + 2;
    *puVar1 = puVar3[param_3];
  } while (iVar2 < 4);
  return 0;
}


