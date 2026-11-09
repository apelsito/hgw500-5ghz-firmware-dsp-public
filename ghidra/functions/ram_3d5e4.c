/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d5e4 */

void FUN_ram_0003d5e4(undefined1 *param_1,undefined4 param_2)

{
  undefined1 *local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  local_14 = param_1;
  uStack_10 = param_2;
  FUN_ram_0003dc38(PTR_LAB_ram_0003d630_ram_0003d680,&local_14);
  *local_14 = 0;
  FUN_ram_00029848();
  return;
}


